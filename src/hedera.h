#pragma once

#include <stdint.h>
#include <os.h>
#include <cx.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "os.h"
#include "os_io_seproxyhal.h"
#include "errors.h"
#include "io.h"
#include "ui.h"
#include "utils.h"

extern void hedera_derive_keypair(
    uint32_t index,
    /* out */ cx_ecfp_private_key_t* private_key, 
    /* out */ cx_ecfp_public_key_t* public_key
);

extern void derive_and_sign(
    uint32_t index,
    const uint8_t* buffer,
    /* out */ uint8_t* result
);