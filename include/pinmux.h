//
// Created by hanyuan on 2023/9/26.
//

#ifndef CVI_PINMUX_PINMUX_H
#define CVI_PINMUX_PINMUX_H
#include "../include/port.h"

#define ARR_LEN(x) (sizeof(x) / sizeof((x)[0]))
#define INVALID_PIN 9999

struct pin_func {
    char name[32];
    char func[32];
};

struct pin_def {
    char name[32];
    unsigned int offset;
};

void print_usage(void);

uint32_t pin_function_get_value(char *pin, char *func);
void pin_function_print(char *name, uint32_t value);
void pin_function_print_all();
void pin_function_print_all_detailed();
void pin_function_read(char *pin);
void pin_function_write(char *arg);

#endif //CVI_PINMUX_PINMUX_H
