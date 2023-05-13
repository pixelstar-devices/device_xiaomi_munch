#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common BananaDroid stuff
$(call inherit-product, vendor/banana/config/common.mk)

# Inherit from munch device
$(call inherit-product, device/xiaomi/munch/device.mk)

# Inherit viper4android stuff
$(call inherit-product-if-exists, packages/apps/ViPER4AndroidFX/config.mk)

#Banandroid Stuff
BANANA_MAINTAINER := Mudit
TARGET_ENABLE_BLUR := true
TARGET_EXCLUDE_MATLOG := true
TARGET_BOOT_ANIMATION_RES := 720
TARGET_SUPPORTS_QUICK_TAP := true

#GAPPS
WITH_GAPPS := true
TARGET_SUPPORTS_GOOGLE_RECORDER := true
TARGER_SUPPORTS_NEXT_GEN_ASSISTANT := true

#CoreGapps
#BUILD_CORE_GAPPS := true
#BUILD_CORE_GAPPS_EXTRA := true
TARGET_USE_GOOGLE_TELEPHONY := true

PRODUCT_NAME := banana_munch
PRODUCT_DEVICE := munch
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := POCO
PRODUCT_MODEL := POCO F4

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

BUILD_FINGERPRINT := Redmi/munch/munch:13/RKQ1.211001.001/V14.0.3.0.TLMMIXM:user/release-keys
