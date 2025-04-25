zephyr_system_include_directories(include)

zephyr_library()
zephyr_library_sources(usbd_hid.c usbh_hid.c)
