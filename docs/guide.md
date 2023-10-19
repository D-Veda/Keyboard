# Introduction

Since the keyboard I currently have is discarded by others, and it feels very poor, so I designer a new personal keyboard. when designing the keyboard, there are a few features below that are necessary (at least from the beginning of the first generation version).

- Need to be as silent as possible (this part is mainly influenced by the actual device);
- Need to be able to support non-conflict keys (this feature is unquestionable);
- Need to support one or more extended USB ports (just easy mouse connection).

The design keyboard is divided into the following main parts:

- Appearance design;
- Hardware design;
- Software design.

Based on the current popular keyboard design solutions, I personally decided to refer to the following scheme to make the universal and simple scalable keyboard.

> [QMK Firmware - An open source firmware for AVR and ARM based keyboards](https://qmk.fm/)
>
> [peng-zhihui/HelloWord-Keyboard (github.com)](https://github.com/peng-zhihui/HelloWord-Keyboard)

The appearance of the design in the first design does not do much consideration, this part of the main consideration is how to minimized the noise in the environment of continuous high-speed typing. In the hardware design, compared with the traditional matrix scanning, the key scanning of the HelloWorld keyboard is referred to, where all keys are considered as one single bit of the register and sent to the MCU by the shift register. At the software design layer, we mainly refer to the layer concept in QMK firmware and change original matrix scan to support shift scan.

Now let's start.  **:-)**

# Issues, Tips, References & Logs

- ESP-IDF Visual Studio Code Extension related references:

  > [espressif/vscode-esp-idf-extension: Visual Studio Code extension for ESP-IDF projects (github.com)](https://github.com/espressif/vscode-esp-idf-extension)

- ESP32 cannot communicate with PC using the built-in JTAG interface, and it might get the LIBUSB_ERROR_NOT_FOUND errors.

  > [Configure ESP32-S3 built-in JTAG Interface - ESP32-S3 - — ESP-IDF Programming Guide v5.1.1 documentation (espressif.com)](https://docs.espressif.com/projects/esp-idf/en/v5.1.1/esp32s3/api-guides/jtag-debugging/configure-builtin-jtag.html)
  
- VS Code tips on definition errors but esp-idf still compile success.

  > [vscode编译esp-idf项目时编译正常，但部分代码下有下划线，提示未定义标识符的解决办法,代码补全及函数跳转 - jopny - 博客园 (cnblogs.com)](https://www.cnblogs.com/jopny/p/15692539.html)

---

# Temporary ...

> [树莓派UPS设计详解，树莓派电池供电方案，直流UPS详解_哔哩哔哩_bilibili](https://www.bilibili.com/video/BV1cu411k7uA/?spm_id_from=333.337.search-card.all.click&vd_source=689d03e7561fb65fcc83e6e6fa337782)
>
> [USB数据线串联电阻知识总结_Filthyfrank的博客-CSDN博客_usb走线阻抗匹配](https://blog.csdn.net/qq_41904778/article/details/123967670)

- 静音键轴
  - 高特奶油黄轴
- 安装组件
  - top mount结构
  - 消音棉
  - 定位板
  - 外壳
- 系统组成
  - [x] 移位寄存器按键扫描
  - [x] ***主控(ESP32-S3)***
  - [x] 集线器 1 -> 3
    - [x] ***传统固定单口***
  - [x] ***电源(外置模块)***
  - [x] ***无线扩展接口***
    - [ ] 无线扩展模块
    - [ ] 罗技控制模块
    - [ ] 声音模块

