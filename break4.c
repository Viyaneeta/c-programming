#include<stdio.h>
void main () 
{
int i = 0;
while(1) 
{ printf("%d\n",i); 
 i++; 
if(i == 8) 
break;
}
printf("The loop terminates");
}