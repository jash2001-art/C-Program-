#include<stdio.h>
int main()
{
int x=5;
switch (x)
{
case1: printf("Pizza for Rs.239\n");
break;
case2: printf("Burger for Rs.129\n");
break;
case3: printf("Pasta for Rs.179\n");
break;
case4: printf("French fries for Rs.99\n");
break;
case5: printf("Sandwich for Rs.149\n");
break;
default: printf("Pizza, Burger, Pasta, French fries, Sandwich\n");
}
return 0;
}