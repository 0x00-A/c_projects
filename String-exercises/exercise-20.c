#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void	gets();
int	main()
{
	char *str = malloc(sizeof *str * 100);	
	printf("enter first string : ");
	gets(str);
//-------------count and mark the start of words----
	int i,ctr=1;
	char *mark = malloc(sizeof mark * strlen(str));
	for(i=0;i<strlen(str);i++) mark[i]='1';	
	mark[0]='0';
	for(i=1;str[i]!='\0';i++){

		if(str[i]==' '){
			ctr++;
			mark[i+1]='0';
		}
	}
//separate each word and store it in a pointer array
	char *p[ctr];
	char *temp;
	int j,k=0;
	for(i=0 ; str[i]!='\0' ; i++){

		if(mark[i]=='0'){
		temp = malloc(sizeof *temp * 50);

		for(j=i;str[j]!=' '&&str[j]!='\0';j++){

			temp[j-i]=str[j];
		}
		temp[j-i]='\0';
		*(p+k)= malloc(sizeof *temp * (j-i+1));
		strcpy(*(p+k),temp);
		k++;
		free(temp);
		
		}
	}
//--------sorting array of pointers----------------
	char largest[50];
	char smallest[50];
	strcpy(largest,p[0]);
	strcpy(smallest,p[0]);
	//------ASCII value cmp--------------------
/*	for(i=0;i<ctr-1;i++){

		if(strcmp(largest,p[i+1])<0)
			strcpy(largest,p[i+1]);
		else if(strcmp(smallest,p[i+1])>0)
			strcpy(smallest,p[i+1]);
	}
*/	//------lenght cmp--------------------------
	for(i=0;i<ctr-1;i++){

		if(strlen(largest)<strlen(p[i+1]))
			strcpy(largest,p[i+1]);
		else if(strlen(smallest)>strlen(p[i+1]))
			strcpy(smallest,p[i+1]);
	}
//-------------------------------------------------
	printf("largest : %s | smallest : %s \n",largest,smallest);

	free(str);

	return 0;
}
