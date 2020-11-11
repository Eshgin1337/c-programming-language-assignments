#include<stdio.h>
void function(char *source, char *integer, char *noninteger)
{
	int i, integerindex=0, nonintegerindex=0;
	for(i=0;source[i]!='\0';i++){
	     if(48<=source[i] && source[i]<=57){
		integer[integerindex]=source[i];
		integerindex+=1;
			       }
	     else
	         {noninteger[nonintegerindex]=source[i];
	          nonintegerindex+=1;
	         }
	     integer[integerindex]='\0';
	     noninteger[nonintegerindex]='\0';
	}
}
int main()
{
	char source[]="abc123def99!";
	char integers[256];
	char noninteger[256];
	function(source,integers,noninteger);
        printf("source string:%s\n", source);
        printf("integer string:%s\n", integers);
        printf("noninteger string:%s\n", noninteger);

        return 0;
}
