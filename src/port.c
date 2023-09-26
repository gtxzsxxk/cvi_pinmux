//
// Created by hanyuan on 2023/9/26.
//
#include "../include/port.h"

#ifdef HOST_DEBUG
#include <stdio.h>
#endif

uint32_t mmio_read_32(uintptr_t addr) {
#ifdef HOST_DEBUG
    printf("Trying to read memory @ 0x%8lx\n", addr);
#endif
    return 0;
}

void mmio_write_32(uintptr_t addr, uint32_t f_val) {
#ifdef HOST_DEBUG
    printf("Trying to write memory @ 0x%8lx value 0x%8lx\n", addr, f_val);
#endif
}