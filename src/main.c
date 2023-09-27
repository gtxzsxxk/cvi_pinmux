#include <getopt.h>
#include <string.h>
#include <stdio.h>

#include "../include/pinmux.h"

void print_usage(void) {
    printf("./cvi_pinmux -p          <== List all pins\n");
    printf("./cvi_pinmux -l          <== List all pins and its func\n");
    printf("./cvi_pinmux -r pin      <== Get func from pin\n");
    printf("./cvi_pinmux -w pin/func <== Set func to pin\n");
}

int main(int argc, char **argv) {
    int opt;

    if (argc == 1) {
        print_usage();
        return 1;
    }

    if (optind != 0) {
        optind = 0;
        optarg = NULL;
    }

    pinmux_setup(PINMUX_BASE);

    while ((opt = getopt(argc, argv, "hplr:w:")) != -1) {
        switch (opt) {
            case 'r':
                pin_function_read(optarg);
                break;

            case 'w':
                pin_function_write(optarg);
                break;

            case 'p':
                pin_function_print_all();
                break;

            case 'l':
                pin_function_print_all_detailed();
                break;

            default:
                print_usage();
                break;
        }
    }

    pinmux_close();

    return 0;
}