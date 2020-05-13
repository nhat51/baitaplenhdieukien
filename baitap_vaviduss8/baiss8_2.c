#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n;

	printf ("nhap chu cai: ");
	scanf ("%c",&n);
	
	switch (n)
	{
		case 'a':
			printf ("Ada");
			break;
		case 'b':
			printf ("Basic");
			break;
		case 'c':
			printf ("COBOL");
			break;
		case 'd':
			printf ("dBASE |||");
			break;
		case 'f':
			printf ("Fortran");
			break;
		case 'p':
			printf ("Pascal");
			break;
		case 'v':
			printf ("Visual C++");
			break;
		default:
		printf ("not found");	
	}
	return 0;
}
