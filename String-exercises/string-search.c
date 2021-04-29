#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void gets();
int	main()
{
	#define size 100
	char *str;
	str = malloc(sizeof *str * size);

	char *search;
	search = malloc(sizeof *search * size);

	int l1,l2,flag,i,j;
	l1=l2=0;

	int ctr=0;
	printf("enter string : ");
	gets(str);

	printf("enter substring to search : ");
	gets(search);

	while(str[l1]!='\0')
		l1++;
			l1--;

	while(search[l2]!='\0')
		l2++;
			l2--;
//-----------------Mark the start of each word----------
	int mark[l1];
	mark[0]=0;
	for(i=1;i<=l1;i++){

		if(str[i]==' ')
			mark[i+1]=0;
	}
//------------------------------------------------------
	i=0;
	while(str[i]!='\0'){
		flag=0;
		if(mark[i]==0){
			flag=1;
			j=i;
			while(str[j]!=' '&&str[j]!='\0'){

				if(str[j]!=search[j-i]){
					flag=0;
					break;
				}
				j++;
			}
		}
		if(flag==1) ctr++;
		i++;
	}


	printf("the fre of\"%s\" is : %d",search,ctr);

	free(str);
	free(search);


	return 0;
}
