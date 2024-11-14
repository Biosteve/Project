#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
int  i, length, count, atg, taa, tga, tag;
char seq[ 5000 ];

atg = 0;
taa = 0;
tag = 0;
tga = 0;
count = 0;


while ( scanf("%s",  seq) ==1)
	{
		length = strlen(seq);
		atg=0;
		taa=0;
		tga=0;
		tag=0;

		for (i=0 ; i<length ; i++)
			{
				if ( seq[i] == 'A' || seq[i] == 'T' || seq[i] == 'C' || seq[i] == 'G')
					{
						count++;
					}
				if ( count == length)
					{
						printf("The number of the nucleotides in the file is %d\n", count);
					}
				if ( seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
					{
						atg++;
					}
				if ( seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'A')
					{
						taa++;
					}
				if ( seq[i] == 'T' && seq[i+1] == 'G' && seq[i+2] == 'A')
					{
						tga++;
					}

				if ( seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'G')
					{
						tag++;
					}

			}
		printf("The number of ATG codons is %d\n", atg );
		printf("The number of TAA codons is %d\n", taa );
		printf("The number of TGA codons is %d\n", tga );
		printf("The number of TAG codons is %d\n", tag );
	}
}
