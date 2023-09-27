//
// Created by hanyuan on 2023/9/26.
//
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

#include "../include/port.h"

volatile uint8_t *pinmux_base;

int pinmux_setup(uintptr_t base_addr) {
    int fd = open("/dev/mem", O_RDWR);
    if (fd < 0) {
        printf("Failed to open /dev/mem. Are you root?\n");
        return -1;
    }
    pinmux_base = mmap(0, 0x1000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, base_addr);
    if (pinmux_base == NULL) {
        printf("Failed to get the pinmux register base address\n");
        close(fd);
        return -1;
    }
    return 0;
}

void pinmux_close() {
    if (pinmux_base != NULL) {
        munmap(pinmux_base, 0x1000);
    }
}

uint32_t pinmux_read_32(uintptr_t addr) {
    return *((volatile uint32_t *) (pinmux_base + addr));
}

void pinmux_write_32(uintptr_t addr, uint32_t f_val) {
    *((volatile uint32_t *) (pinmux_base + addr)) = f_val;
}