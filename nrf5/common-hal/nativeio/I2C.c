/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

 // This file contains all of the port specific HAL functions for the machine
 // module.

#include "shared-bindings/nativeio/I2C.h"
#include "py/mperrno.h"
#include "py/runtime.h"

void common_hal_nativeio_i2c_construct(nativeio_i2c_obj_t *self,
        const mcu_pin_obj_t* scl, const mcu_pin_obj_t* sda, uint32_t frequency) {

}

void common_hal_nativeio_i2c_deinit(nativeio_i2c_obj_t *self) {

}

bool common_hal_nativeio_i2c_probe(nativeio_i2c_obj_t *self, uint8_t addr) {
    return false;
}

void common_hal_nativeio_i2c_configure(nativeio_i2c_obj_t *self,
        uint32_t baudrate, uint8_t polarity, uint8_t phase, uint8_t bits) {
    return;
}

bool common_hal_nativeio_i2c_try_lock(nativeio_i2c_obj_t *self) {
    //self->has_lock = i2c_master_lock(&self->i2c_master_instance) == STATUS_OK;
    return self->has_lock;
}

bool common_hal_nativeio_i2c_has_lock(nativeio_i2c_obj_t *self) {
    return self->has_lock;
}

void common_hal_nativeio_i2c_unlock(nativeio_i2c_obj_t *self) {
    self->has_lock = false;
    //i2c_master_unlock(&self->i2c_master_instance);
}

uint8_t common_hal_nativeio_i2c_write(nativeio_i2c_obj_t *self, uint16_t addr,
        const uint8_t *data, size_t len, bool transmit_stop_bit) {
    return MP_EIO;
}

uint8_t common_hal_nativeio_i2c_read(nativeio_i2c_obj_t *self, uint16_t addr,
        uint8_t *data, size_t len) {
    return MP_EIO;
}
