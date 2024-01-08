# Task_EmbeddedLinux_6
### Make `SD card` virtual
creating sd.img has zeros from zeros block which saved into /dev/zero and put 1024 block of 1MB blocksize
```c
sudo dd if=/dev/zero of=sd.img bs=1M count=1024 
```
and to see the size we made :
```c
du -sh sd.img
```
for example:
![Uploading 1.png…]()


