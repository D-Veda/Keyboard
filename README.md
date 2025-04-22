# Keyboard

![Static Badge](https://img.shields.io/badge/Dv2212-blue)

A simple keyboard designed by individuals.

# Setup

This project depends on `Zephyr SDK` .

1. Install `Zephyr SDK` environment dependencies, ignore it if `Zephyr SDK` installed.

   > Refer to  [Zephyr Project Documentation](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) , for more details.
2. Select a blank directory using for workspace, and create virtual python environment, then activate it.
3. Install west tool & initial the repository.

```shell
pip install -U west
west init -m https://github.com/D-Veda/Keyboard --mr main .
west update
```

