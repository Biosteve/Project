#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int  i, len;
char seq[ 5000 ];
float max;
float babis;

max = 0;



while ( scanf("%s",  seq) ==1)
	{
		len = strlen(seq);
		max=0;

		for (i=0 ; i<len ; i++)
			{
				if ( seq[i] == 'G' || seq[i] == 'C' )
				{
					max++;
				}
			}

		babis =  100*( max/len );
		printf("The GC content is %f%%\n", babis );
	}
}

