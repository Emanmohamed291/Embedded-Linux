# Embedded-Linux
This is static and dynamic libraries with `bashscript` for each of them to do that.

##for Static Library:

get into directory "LIB".
```cd
cd LIB
```
to compile and assymply without linking all .c files.
```cd
gcc -c -Wall *.c
```
to make shared library with lib before its name and .so as an extension.
```cd
ar -rcs liboperation.a *.o
```
 The ar t command is used to display the table of contents (TOC) of an archive file. -t: Specifies that you want to display the table of contents.
 ```cd
ar t liboperation.a
```
to link static main.c with .h files in INCLUDE directory & library "operations" & .c in LIB directory and make exe file called Calc.
```cd
gcc -static main.c -o Calc -l operation -L ./LIB -I ./INCLUDE
```
to run that exe file.
```cd
./Calc
```
##for Dynamic Library:

get into directory "LIB".
```cd
cd LIB
```
to compile and assymply without linking all .c files.
```cd
gcc -c -fPIC *.c
```
to make shared library with lib before its name and .so as an extension.
```cd
gcc -shared -o liboperations.so *.o
```
The objdump command is a disassembler for Unix-like systems that displays information about object files. The -T option specifically displays the dynamic symbol table entries of an object file. 
```cd
objdump -T liboperations.so
```
to put the path to this library global so can be seen from anywhere.
```cd
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PWD}
```
to make sure that path is set.
```cd
echo $LD_LIBRARY_PATH
```

to link main.c with .h files in INCLUDE directory & library "operations" & .c in LIB directory and make exe file called Calc.
```cd
gcc main.c -o Calc -l operations -L ./LIB -I ./INCLUDE
```
to run that exe file.
```cd
./Calc
```
