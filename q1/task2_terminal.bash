eman@eman:~/iti/Embedded-Linux$ vi binarySearch.c
eman@eman:~/iti/Embedded-Linux$ vim binarySearch.c
Command 'vim' not found, but can be installed with:
sudo apt install vim         # version 2:8.2.3995-1ubuntu2.13, or
sudo apt install vim-tiny    # version 2:8.2.3995-1ubuntu2.13
sudo apt install vim-athena  # version 2:8.2.3995-1ubuntu2.13
sudo apt install vim-gtk3    # version 2:8.2.3995-1ubuntu2.13
sudo apt install vim-nox     # version 2:8.2.3995-1ubuntu2.13
sudo apt install neovim      # version 0.6.1-3
eman@eman:~/iti/Embedded-Linux$ cal binarySearch.c
Command 'cal' not found, but can be installed with:
sudo apt install ncal
eman@eman:~/iti/Embedded-Linux$ sudo cal binarySearch.c
[sudo] password for eman: 
sudo: cal: command not found
eman@eman:~/iti/Embedded-Linux$ cat binarySearch.c
#include <stdio.h>  
int binarySearch(int a[], int beg, int end, int val);
int main() {  
  int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};  
  int val = 40;
  int n = sizeof(a) / sizeof(a[0]);  
  int res = binarySearch(a, 0, n-1, val);  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
    printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    

        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    

        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
} 
eman@eman:~/iti/Embedded-Linux$ gcc -c binarySearch.c -o binarySearch.exe

