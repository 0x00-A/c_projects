#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void gets();
int	main()
{
	#define size 100
	char *str = malloc(sizeof *str * size);
	char *search = malloc(sizeof *search * size);
	char *temp = malloc(sizeof *temp * size);
	int i,j,k,l;
	int ctr=0;
	i=0;
	printf("enter string : ");
	gets(str);
	printf("enter search : ");
	gets(search);

	l = strlen(search);

/*	while(str[i]!='\0'){

		if(str[i]==search[0]){
			printf("check\n");
			ctr=0;
			for(j=i,k=0;k<l;j++,k++){

				if(str[j]==search[k])
					ctr++;
				else break;
			}
		if(ctr==l) break;
		}

		i++;
	}
	printf("ctr = %d l = %d",ctr,l);

		if(ctr==l) printf("yes");
		else printf("no");
*/


	int c1=0,c2=0,flg;
	while (str[c1]!='\0')
		c1++;
                c1--;

	while (search[c2]!='\0')
		c2++;
                c2--;


	for(i=0;i<=c1-c2;i++)
	{
		for(j=i;j<=i+c2;j++)
		{
			flg=1;
			if (str[j]!=search[j-i])
			{
				flg=0;
			   break;
			}
		}
		if (flg==1)
			break;
	}
	if (flg==1)
		printf("The substring exists in the string.\n\n");
	else
		printf("The substring is not exists in the string. \n\n");



	free(temp);
	free(str);
	free(search);





	return 0;
}
