#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int  i, length, count, atg, taa, tga, tag, end;
char seq[ 5000 ];

atg = 0;
end = 0;
count = 0;


while ( scanf("%s",  seq) ==1)
	{
	length = strlen(seq);
		for (i=0 ; i<length ; i++)
				{
				if ( seq[i] == 'A' || seq[i] == 'T' || seq[i] == 'C' || seq[i] == 'G')
					{
						count++;
					}
				if ( seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
					{
						atg++;
					}
				if ( atg >=1 )
					{
					break;
					}
				}
		for (i=i ; i<length ; i = i+3)
			{
					if ( seq[i] == 'T' && seq[i+1] == 'G' && seq[i+2] == 'A')
						{
						end++;
						}
					else
						if ( seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'A')
							{
							end++;
							}
					else
						if ( seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'G')
							{
							end++;
							}
			}
		if ( end == 0 )
			{
			printf("There is no stop codon \n");
			}
		else
			if ( end >= 1 )
				{
				printf("There is a complete sequence in the file \n");
				}
	}
}
