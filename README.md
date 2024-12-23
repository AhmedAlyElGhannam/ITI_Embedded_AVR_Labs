# ITI_Embedded_AVR_Labs
```bash
cmake -S . -B build
cmake --build build
cd build
make flash
make burn
simulavr --device atmega32 --gdbserver --file AVR_TRIAL.elf
```

in a new tab, run:

```bash
avr-gdb AVR_TRIAL.elf
target remote localhost:1212
```
## Lab 01
1. 
