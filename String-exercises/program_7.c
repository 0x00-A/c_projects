#include<stdio.h>
void gets();
int	main()
{
	char *p;
	gets(p);
	int i=0,degits=0,alphabits=0,spchars=0;

	while(p[i]!='\0'){

		if((p[i]>='a' && p[i]<='z')||(p[i]>='A' && p[i]<='Z')) alphabits++;
		else if(p[i]>='0' && p[i]<='9') degits++;
		else spchars++;
	

		i++;
	}

	printf("spchars=%d alphabits=%d degits=%d\n",spchars,alphabits,degits);
	

	return 0;
}
