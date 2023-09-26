//
// Created by hanyuan on 2023/9/26.
//

#ifndef CVI_PINMUX_PORT_H
#define CVI_PINMUX_PORT_H

#include <stdint.h>

#define PINMUX_BASE 0x03001000

int pinmux_setup(uintptr_t base_addr);

void pinmux_close();

uint32_t pinmux_read_32(uintptr_t offset);

void pinmux_write_32(uintptr_t offset, uint32_t f_val);

#endif //CVI_PINMUX_PORT_H
