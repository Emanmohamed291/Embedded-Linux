# Task_EmbeddedLinux_8
we need `TFTP` to load kernal and zimage by tftp instead of SD-card, but u-boot need SD-card, so we won't pass SD-card up.
- ### install `tftp` package.
  ```c
  sudo apt-get install tftpd-hpa
  ```
  to make sure it's installed perfectly.
  ```v
  sudo ss -tulpn | grep :69
  ```
  it directly created `/etc/default/tftp-hpa` which has tftp configuration so we ned to add `TFTP_OPTIONS="--secure --create"` to be editable not read only.
  ```c
  sudo vi /etc/default/tftpd-hpa
  ```

- 
