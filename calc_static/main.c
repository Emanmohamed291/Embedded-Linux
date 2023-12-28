#include <stdio.h>
#include <stdlib.h>
#include "./INCLUDE/add.h"
#include "./INCLUDE/sub.h"
#include "./INCLUDE/mult.h"
#include "./INCLUDE/div.h"

int main(void){
	printf("the sum equal  %f\n",add(8,4));
	printf("the sub equal  %f\n",sub(8,4));
	printf("the mult equal %f\n",mult(8,4));
	printf("the div equal  %f\n",diiv(8,4));
	return 0;
}
