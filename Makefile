SDKVERSION = latest
include theos/makefiles/common.mk

TWEAK_NAME = NoAlertEOW
NoAlertEOW_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk
