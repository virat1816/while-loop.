#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any Table No : ");
	scanf("%d",&n);

	while(i<=10){
        printf("%d * %d = %d \n", n, i, n*i);
		i++;
	}
	return 0;
}
