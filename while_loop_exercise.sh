#!/bin/bash
echo $HOSTNAME
echo $USERNAME
read -p "Enter a number: " num
 
if [[ $num -eq 0 ]]; then
    echo "ERROR : you entered 0"
elif [[ $num -lt 0 ]]; then
    echo "ERROR : you entered -ve value"
else
    temp=1
    sum=0
    while [[ $num -gt 0 ]]; do
        sqr=$((temp*temp))
        echo "square of $temp = $sqr"
        num=$((num-1))
        temp=$((temp+1))
        sum=$((sum+sqr))
    done
    echo "sum = $sum"
fi
