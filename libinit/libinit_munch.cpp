/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define FINGERPRINT_GL "POCO/munch_global/munch:13/RKQ1.211001.001/V14.0.6.0.TLMMIXM:user/release-keys"
#define FINGERPRINT_CN "Redmi/munch/munch:13/RKQ1.211001.001/V14.0.9.0.TLMCNXM:user/release-keys"
#define FINGERPRINT_IN "POCO/munch_in/munch:13/RKQ1.211001.001/V14.0.8.0.TLMINXM:user/release-keys"

static const variant_info_t munch_in_info = {
    .hwc_value = "INDIA",
    .sku_value = "",
    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .mod_device = "munch_in_global",
    .model = "22021211RI",
    .build_fingerprint = FINGERPRINT_IN,

    .nfc = true,
};

static const variant_info_t munch_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",
    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .mod_device = "munch_global",
    .model = "22021211RG",
    .build_fingerprint = FINGERPRINT_GL,
    
    .nfc = true,
};

static const variant_info_t munch_info = {
    .hwc_value = "CN",
    .sku_value = "",
    .brand = "Redmi",
    .device = "munch",
    .marketname = "Redmi K40S",
    .mod_device = "munch_global",
    .model = "22021211RC",
    .build_fingerprint = FINGERPRINT_CN,
    
    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    munch_in_info,
    munch_global_info,
    munch_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
