#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int	main()
{
	char *str = malloc(sizeof *str * 100);	
	char *str2 = malloc(sizeof *str2 * 100);
	int l1,l2,flag,i,j;


	printf("enter first string : ");
	gets(str);

	printf("enter second string : ");
	gets(str2);

	l1=strlen(str);
	l2=strlen(str2);

/*	char *cat = malloc(sizeof *cat * (l1+l2+2));


	for(i=0;i<=l1+l2+1;i++){

		if(i<l1) cat[i]=str[i];
		else if(i==l1) cat[l1]=' ';
		else cat[i]=str2[i-l1-1];
	}
*/	

	for(i=0;i<l1;i++);
	str[i]=' ';
	i++;


	for(j=0;j<l2;i++,j++){

		str[i]=str2[j];
	}
	str[l1+l2+1]='\0';


	printf("%s",str);



	free(str);


	return 0;
}
