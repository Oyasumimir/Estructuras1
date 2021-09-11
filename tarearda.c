#include <stdio.h>

int main()
{  
    int num1, num2;
  do{  
printf("Presiona 0 para salir\n");
printf("Dame un numero,no1\n");
scanf("%d",&num1);
printf("Dame otro numero,no2\n");
scanf("%d",&num2);

while(num2<=num1)
{
printf("Error Dame un numero mayor que no1\n");
scanf("%d",&num2);
}

for( int i =0;i < (num2-num1); i++)
{
    printf("%d\n",i+num1);
}

    
}
while(num1 != 0);
return 0;
}

