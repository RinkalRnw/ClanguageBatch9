//Wap to add 2 value using scanf()
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("Enter value a:"); //output
	scanf("%d",&a); //input
	printf("Enter value b:"); //output
	scanf("%d",&b); //input
	printf("\n Addition is %d",a+b);
	getch();
}