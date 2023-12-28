# Embedded-Linux
### This is static avr gcc with `bashscript` to make .elf file.
![1st_task_iti - ISIS Professional (Animating) 12_28_2023 10_19_55 PM](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/b2a89be5-4b73-45cb-b37c-2af8645256f7)

### for Static Library:

get into directory "LIB".
```cd
cd LIB
```
to compile and assymply without linking all .c files.
```cd
~/x-tools/avr/bin/avr-gcc  -c -Wall *.c
```
to make shared library with lib before its name and .so as an extension.
```cd
~/x-tools/avr/bin/avr-ar -rcs liboperation.a *.o
```
 The ar t command is used to display the table of contents (TOC) of an archive file. -t: Specifies that you want to display the table of contents.
 ```cd
ar t liboperation.a
```
to link static main.c with .h files in INCLUDE directory & library "operations" & .c in LIB directory and make exe file called main.elf.
```cd
~/x-tools/avr/bin/avr-gcc  -static main.c -o main.elf -l operation -L ./LIB -I ./INCLUDE
```
