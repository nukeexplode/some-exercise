#include <stdio.h>

int main()
{
	int i = 2;
	
	switch ( i%3 ) {
		case 0:printf("zero"); 
		case 1:printf("one"); 
		case 2:printf("two"); 
	}
}
