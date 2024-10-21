#include <stdio.h>
int main(){
int i;
int num, sum=0;
for (i=1; i<=10; ++i){
printf("Enter n%d: ", i);
scanf("%d",&num);
if (num<0){
break;
}
sum=sum+num;
}
printf("the sum is %d",sum);
}