# Task_EmbeddedLinux_8
- we need `TFTP` to load kernal and zimage by tftp instead of SD-card, but u-boot need SD-card, so we won't pass SD-card up.
  #
  - ### install `tftp` package.
      
      ```c
      sudo apt-get install tftpd-hpa
      ```
     - to make sure it's installed perfectly.
       
        ```v
        sudo ss -tulpn | grep :69
        ```
     - it directly created `/etc/default/tftp-hpa` which has tftp configuration so we ned to add `TFTP_OPTIONS="--secure --create"` to be editable not read only.
       
        ```c
        sudo vi /etc/default/tftpd-hpa
        ```
      - we now need to restart `tftpd-hpa` so it get the changes and see the status to make sure it go in a right way.
        
        ```c
        systemctl restart tftpd-hpa
        systemctl status tftpd-hpa
        ```
       - it directly made `/srv/tftp` which has root as its owner so we need to change the owner to be tft and in tftp group.
         
          ```c
          cd srv/tftp
          sudo chown tftp:tftp tftp
          ```
       - we need to make 2 files `zimage` and `hardware.dtp`.
  
          ```c
          sudo vi zimage
          sudo vi hardware.dtp
          ```
      #       
  - we need now in `u-boot` to make `qemu-ifup`
      ```c
      vi qemu-ifup
      ```
    - and write in it the following lines but `192.168.15.87/24` may not the same so we should use `ifconfig` to know my ip:
  
      ```c
       #!/bin/sh
       ip a add 192.168.15.87/24 dev $1
       ip link set $1 up
      ```
      - and give this fle the execution permission.
        
       ```c
      chmod +x qemu-ifup
      ```
- #### go to qemu to make the connection between server "my_PC" and client/ target "beaglebone" virtually
  ```v   
  sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel u-boot -sd sd.img -net tap,script=./qemu-ifup -net nic
  ```
  - to set ip addresses for server and target.
  
    ```m
    setenv serverip=192.168.15.87
    setenv sipaddr=192.168.15.88
    saveenv
    ```
    to know DRAM bank start address use `bdinfo` 























  
  
