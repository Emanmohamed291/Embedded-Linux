eman@eman:~$ cd
eman@eman:~$ mkdir myDirectory
eman@eman:~$ mkdir secondDirectory
eman@eman:~$ touch myNotePaper
eman@eman:~$ cp secondDirectory/myNotePaper 
cp: missing destination file operand after 'secondDirectory/myNotePaper'
Try 'cp --help' for more information.
eman@eman:~$ cd secondDirectory
eman@eman:~/secondDirectory$ touch myNotePaper
eman@eman:~/secondDirectory$ cp secondDirectory/myNotePaper myDirectory/myNotePaper
cp: cannot stat 'secondDirectory/myNotePaper': No such file or directory
eman@eman:~/secondDirectory$ cp myNotePaper myDirectory/myNotePaper
cp: cannot create regular file 'myDirectory/myNotePaper': No such file or directory
eman@eman:~/secondDirectory$ cp myNotePaper myDirectory
eman@eman:~/secondDirectory$ cp myNotePaper myDirectory/myNotePaper
cp: cannot create regular file 'myDirectory/myNotePaper': No such file or directory
eman@eman:~/secondDirectory$ cp myNotePaper ../myDirectory/myNotePaper
eman@eman:~/secondDirectory$ cd myDirectory
bash: cd: myDirectory: No such file or directory
eman@eman:~/secondDirectory$ cd ../myDirectory
eman@eman:~/myDirectory$ mv myNotePaper myOldNotePaper

