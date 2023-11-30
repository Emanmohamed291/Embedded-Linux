eman@eman:~/iti/Embedded-Linux$ sudo mv  q1/binarySearch.exe /user/local/bin
[sudo] password for eman: 
mv: cannot move 'q1/binarySearch.exe' to '/user/local/bin': No such file or directory
eman@eman:~/iti/Embedded-Linux$ sudo mv  q1/binarySearch.exe /usr/local/bin
eman@eman:~/iti/Embedded-Linux$ binarySearch.exe
bash: /usr/local/bin/binarySearch.exe: Permission denied
eman@eman:~/iti/Embedded-Linux$ sudo binarySearch.exe
sudo: binarySearch.exe: command not found
eman@eman:~/iti/Embedded-Linux$ sudo cp  /usr/local/bin/binarySearch.exe q1/binarySearch.exe 
eman@eman:~/iti/Embedded-Linux$ binarySearch.exe
bash: /usr/local/bin/binarySearch.exe: Permission denied
eman@eman:~/iti/Embedded-Linux$ q1/binarySearch.exe
bash: q1/binarySearch.exe: Permission denied
eman@eman:~/iti/Embedded-Linux$ 

