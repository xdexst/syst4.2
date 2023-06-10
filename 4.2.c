#include <stdio.h>
#include <math.h>
int main () {
int i;
int a;
int n;
int S=0;
printf("Enter a three digit number: a= ");
scanf("%d",&a);
for (i=0;i<4;i++){
n=a%10;
a=(a-n)/10;
S=S+n;
}
if (S%2==0){
printf("Number is an even");
} else {
printf("Number is not an even");
}
return 0;
}
