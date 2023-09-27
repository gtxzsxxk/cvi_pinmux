#include <getopt.h>
#include <string.h>
#include <stdio.h>

#include "../include/pinmux.h"
#include "../include/port.h"

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))
#define INVALID_PIN 9999

uint32_t convert_func_to_value(char *pin, char *func)
{
    uint32_t i;
    uint32_t max_fun_num = NELEMS(pin_func);
    char v;

    for (i = 0; i < max_fun_num; i++)
    {
        if (strcmp(pin_func[i].func, func) == 0)
        {
            if (strncmp(pin_func[i].name, pin, strlen(pin)) == 0)
            {
                v = pin_func[i].name[strlen(pin_func[i].name) - 1];
                break;
            }
        }
    }

    if (i == max_fun_num)
    {
        printf("ERROR: invalid pin or func\n");
        return INVALID_PIN;
    }

    return (v - 0x30);
}

void print_fun(char *name, uint32_t value)
{
    uint32_t i;
    uint32_t max_fun_num = NELEMS(pin_func);
    char pinname[128];

    sprintf(pinname, "%s%d", name, value);

    printf("%s function:\n", name);
    for (i = 0; i < max_fun_num; i++)
    {
        if (strncmp(pinname, pin_func[i].name, strlen(name)) == 0)
        {
            if (strcmp(pinname, pin_func[i].name) == 0)
                printf("[v] %s\n", pin_func[i].func);
            else
                printf("[ ] %s\n", pin_func[i].func);
            // break;
        }
    }
    printf("\n");
}

void print_usage(void)
{
    printf("./cvi_pinmux -p          <== List all pins\n");
    printf("./cvi_pinmux -l          <== List all pins and its func\n");
    printf("./cvi_pinmux -r pin      <== Get func from pin\n");
    printf("./cvi_pinmux -w pin/func <== Set func to pin\n");
}

int main(int argc, char **argv)
{
    int opt;
    uint32_t i;
    uint32_t value;
    char pin[32];
    char func[32];
    uint32_t f_val;

    char *strops;

    if (argc == 1)
    {
        print_usage();
        return 1;
    }

    if (optind != 0)
    {
        optind = 0;
        optarg = NULL;
    }

    pinmux_setup(PINMUX_BASE);
    memset(pin, 0, sizeof(pin));
    memset(func, 0, sizeof(func));

    while ((opt = getopt(argc, argv, "hplr:w:")) != -1)
    {
        switch (opt)
        {
        case 'r':
            for (i = 0; i < NELEMS(pin_list); i++)
            {
                if (strcmp(optarg, pin_list[i].name) == 0)
                    break;
            }
            if (i != NELEMS(pin_list))
            {
                value = pinmux_read_32(pin_list[i].offset);
                // printf("value %d\n", value);
                print_fun(optarg, value);

                printf("register: 0x%08x\n", PINMUX_BASE + pin_list[i].offset);
                printf("value: 0x%08x\n", value);
            }
            else
            {
                printf("\nInvalid option: %s", optarg);
            }
            break;

        case 'w':
            strops = strchr(optarg, '/');
            if (!strops)
                print_usage();

            strncpy(pin, optarg, strops - optarg);
            pin[strops - optarg] = '\0';
            strcpy(func, strops + 1);

            printf("pin %s\n", pin);
            printf("func %s\n", func);

            for (i = 0; i < NELEMS(pin_list); i++)
            {
                if (strcmp(pin, pin_list[i].name) == 0)
                    break;
            }

            if (i != NELEMS(pin_list))
            {
                f_val = convert_func_to_value(pin, func);
                if (f_val == INVALID_PIN)
                    return 1;

                printf("register: 0x%08x\n", PINMUX_BASE + pin_list[i].offset);
                printf("value: 0x%08x\n", f_val);

                pinmux_write_32(pin_list[i].offset, f_val);
            }
            else
            {
                printf("\nInvalid option: %s\n", optarg);
            }
            break;

        case 'p':
            printf("Pinlist:\n");
            for (i = 0; i < NELEMS(pin_list); i++)
                printf("%s\n", pin_list[i].name);
            break;

        case 'l':
            for (i = 0; i < NELEMS(pin_list); i++)
            {
                value = pinmux_read_32(pin_list[i].offset);
                print_fun(pin_list[i].name, value);
            }
            break;

        default:
            print_usage();
            break;
        }
    }

    pinmux_close();

    return 0;
}