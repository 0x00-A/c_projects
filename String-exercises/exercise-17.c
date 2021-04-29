#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void	gets();
int	main()
{
	char *str = malloc(sizeof *str * 100);	
	int l1,l2,flag,i,j;

	printf("enter string : ");
	gets(str);

	l1 = strlen(str);

	for(i=0;str[i]!='\0';i++){

		while(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))&&str[i]!='\0')
		{
			j=i;
			while(str[j]!='\0'){
			str[j]=str[j+1];
			j++;
			}
		}
	}


	printf("%s\n",str);



	free(str);


	return 0;
}
