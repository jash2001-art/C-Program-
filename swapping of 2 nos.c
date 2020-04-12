#include<stdio.h>
int main()
{
int marks;
printf("Enter the marks");
scanf("%d", &marks);
if(marks>84&&marks<=100)
{
printf("Grade A");
}
else if(marks<69&&marks<=84)
{
printf("Grade B");
}
else if(marks<54&&marks<=54)
{
printf("Grade C");
}
else if(marks<39&&marks<=54)
{
printf("Grade D");
}
else
{
printf("Grade F");
}
return 0;
}
    