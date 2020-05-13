#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf ("enter character in aphabet (a-z) : ");
	scanf ("%c",&c);
	
	if (c< 'a' || c>'z')
	printf ("the character not alower in aphabet");
	else
	switch (c)
	{ 
	case 'a':
	case 'o':
	case 'i':
	case 'u':
	case 'e':
	printf ("\n character is vowel");
	break;
	
	case 'z':
	printf ("\n aphabet 'z' was ended");
	break;
	
	default:
	printf ("character is a consonant");
	break;
	}
	
	return 0;
}
