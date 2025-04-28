#include <zephyr/kernel.h>

extern void hid_mouse_init(uint8_t busid, uintptr_t reg_base);
extern void hid_mouse_test(uint8_t busid);

int main(void)
{
    hid_mouse_init(0, USBHS1__USBC_BASE);
    printk("HID mouse test started\n");

    while (1) {
        hid_mouse_test(0);
    }

    return 0;
}
