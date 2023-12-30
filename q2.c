#include<stdio.h>
int main(){
int x=5,y=6;
printf("Enter x:5\n");
printf("Enter y:6\n");
int temp;
temp = x;
x = y;
y = temp;
	printf("Swap success!!!:x=%d,y=%d",x,y);
	scanf("%d%d%d",&x,&y,&temp);
}



