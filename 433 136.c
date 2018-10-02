#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main()
{
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;
	
    for(i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
	. 
	for(i=0; i<ARSIZE; i++)
		printf("%f\n", numbers[i]);
	
	if ((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Could not open %s for output.\n", file);
        exit(EXIT_FAILURE);
    }
    fwrite(numbers, sizeof (double), ARSIZE, iofile);
    fclose(iofile);
	if((iofile = fopen(file, "rb")) == NULL) {
		fprintf( stderr, "can't open %s", file );
		exit(EXIT_FAILURE);
	}
	printf("please enter the number( empty line to quit)");
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long) i * sizeof(double); // calculate offset
        fseek(iofile, pos, SEEK_SET);    // go there
        fread(&value, sizeof (double), 1, iofile);
        printf("The value there is %f.\n", value);
        printf("Next index (out of range to quit):\n");
    }
	fclose(iofile);
	
	system("pause");
	return 0;
}