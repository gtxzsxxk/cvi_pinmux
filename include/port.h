//
// Created by hanyuan on 2023/9/26.
//

#ifndef CVI_PINMUX_PORT_H
#define CVI_PINMUX_PORT_H

#include <stdint.h>

uint32_t mmio_read_32(uintptr_t addr);

void mmio_write_32(uintptr_t addr, uint32_t f_val);

#endif //CVI_PINMUX_PORT_H
