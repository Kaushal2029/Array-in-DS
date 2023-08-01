#include<stdio.h>
int main() {
	int a[5];
	int i,x;
	
	printf("Enter the Size of array:->");
	scanf("%d",&x);
	
	for (i=0;i<=x;i++){
		scanf("%d",&a[i]);
		}
		for(i=0;i<=x;i++){
			printf("The Elements of Array is :->%d\n",a[i]);
		}
		return 0;
}
