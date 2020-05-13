#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf ("nhap so a: ");
	scanf ("%d",&a);
	printf ("nhap so b: ");
	scanf ("%d",&b);
	printf ("nhap so c: ");
	scanf ("%d",&c);
	
	if (a>b && a>c)
	printf ("%d la so lon nhat",a);
	else if (b>a && b>c)
	printf ("%d la so lon nhat",b);
	else
	printf ("%d la so lon nhat",c);
	return 0;
}
