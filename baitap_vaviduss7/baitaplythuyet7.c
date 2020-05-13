#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf ("nhap vao so a: ");
	scanf ("%d",&a);
	printf ("nhap vao so b: ");
	scanf ("%d",&b);
	
if (a%b==0)
printf ("a chia het cho b ");
else 
printf ("a không chia het cho b");
	return 0;
}
