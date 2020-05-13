#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf ("nhap : ");
	scanf ("%d",x);
	printf ("nhap y: ");
	scanf ("%d",y);
	
	{
	if (x<200 && y>3000)
	printf ("%d",x);
	else 
	printf ("x khong hop le");
}
{
		if (y>100 && y<500)
	printf ("%d",y);
	else 
	printf ("y khong hop le");
}
	return 0;
}
