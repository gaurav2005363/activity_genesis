#include<stdio.h>
int main()
{
int num,i,f=0,j;
printf("Enter an integer: ");
scanf("%d",&num);
//Number even or odd
if(num%2==0)
{
printf("%d is even\n",num);
}
else
{
printf("%d is odd\n",num);
}
  //Number prime or not
for(int i=2;i<=num/2;++i){
  if(num%i==0)
  {f=1;
   break;}
}
  if(num==1){
    printf("1 IS NEITHER PRIME NOR COMPOSITE\n");
  }
  else{
    if(f==0)
      printf("%d is a prime number\n",num);
    else
      printf("%d is not a prime number\n",num);
  }
  // Factors of the number
  printf("Factors of %d are: ",num);
  for(int i=1;i<=num;++i){
    if(num%i==0){
      printf("%d",i);
    }
  }
  return 0;
}
