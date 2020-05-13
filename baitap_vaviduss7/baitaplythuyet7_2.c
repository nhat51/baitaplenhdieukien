#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf ("enter number a: ");
	scanf ("%d",&a);
	printf ("enter number b: ");
	scanf ("%d",&b);
	
	if (a*b==100)
	printf ("a*b = 100");
	else 
	printf ("a*b khac 100");
	return 0;
}
