#include <stdio.h>
#include <stdlib.h>


int print(n) {
	if(n>9){
		print(n/10);
	}
	printf("%d ",n%10);
}
