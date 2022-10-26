#include <stdio.h>
#include<espl_lib.h>
int main() 
{
unsigned int n ;
int condition ; 

do{
	printf("please enter a positive number\n " );
	Scanf("%u",&n);
	printf("%s\n",num_to_words(n));
	printf(" Do you want to exit or run another number ? type 0 for exit and 1 for run\n ");
	scanf("%d",condition); 
} while (condition);

return 0 ; 
}