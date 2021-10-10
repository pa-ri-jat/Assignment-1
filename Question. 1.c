#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char number[10];
    int flag = 0;
    int length, i = 0;
    printf("Enter any number: ");
    scanf("%s", number);
   length = strlen(number);

    for(i=0; i <length ; i++)
    {
        if(number[i] == '.')    // decimal point is present
        {
            flag = 1;
            break;
        }
    }
    // if(0) is same as if(false)
    if(flag)
        printf("Given number is a floating point number");
    else
        printf("Given number is not a floating point number");
    return 0;
}
