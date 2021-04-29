#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void	gets();
int	main()
{
	int i=0;
	char *p;
	p = calloc(100,sizeof p);

	gets(p);

	//tolower
	while(p[i]!='\0'){

		putchar (toupper(p[i]));
		i++;
	}

//	printf("%s\n",p);


	return 0;
}
