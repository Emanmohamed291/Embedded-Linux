# Task_EmbeddedLinux_6
### Make virtual `SD card`
creating sd.img has zeros from zeros block which saved into /dev/zero and put 1024 block of 1MB blocksize
```c
sudo dd if=/dev/zero of=sd.img bs=1M count=1024 
```
and to see the size we made :
```c
du -sh sd.img
```
for example:
#
![1](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/87127d9f-566b-4340-a111-51dc00ff7816)


### we need now to make 2 partitions, 1 -> Fat (boot) 2 -> ext4 (rootfs):
```c
sudo cfdisk sd.img
```
![Screenshot from 2024-01-08 13-38-30](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/be734cf6-931c-467e-b752-8c180971a7c7)

### to use it as if it's an external sd  and the output is /dev/loop<x> and x is the number of it.
```c
sudo losetup -f --show --partscan sd.img
```
for example:
#
![3](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/03a508f6-8b2d-45c8-84d1-99ae04f37fc4)
#### save direction into DISK
```c
export DISK=/dev/loop14
```
### to make Fat as boot in /dev/loop<x>P1.
```c
sudo mkfs.vfat -F 16 -n boot ${DISK}p1
```
for example:

![5](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/3a2caf56-1ccd-4d59-bdbd-9a519b0c6093)
### to make ext4 as rootfs in /dev/loop<x>P2.
```c
sudo mkfs.ext4 -L rootfs ${DISK}p2
```
for example:

![6](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/bda8708e-184c-4a9c-aa4d-6a38d56cd657)

# `Finally`

![7](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/65b1c94b-4ebc-448e-9300-a55ac3918985)
![final](https://github.com/Emanmohamed291/Embedded-Linux/assets/109046357/b7949a61-e9b9-46de-9ee6-a9683c16e178)


