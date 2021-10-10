#include <stdio.h>
#include <string.h>
int main()
{
	  char email[100];
	   int length ;
	   char c;
	   int At = -1, Dot = -1;
    printf("Enter an email address: ");
    scanf("%s", email);
   length = strlen(email);
   if (email[0] == '@' ||email[0] == '.'){
     printf("Sorr! Invalid. Try again!");
   }
 else if (email[0]>= 'a' && email[0] <= 'z'	|| email[0] >= 'A' && email[0] <= 'Z') {

	for (int i = 0;i < length; i++) {

		// If the character is '@'
		if (email[i] == '@') {

			At = i;
		}
		else if (email[i] == '.') {
		Dot = i;
		}
	}if (At == -1 || Dot == -1 || Dot >= (length - 1))
		{
		    printf("Sorry! Invalid . Try again!");
		}
	 else if (At > Dot)
		{
		    printf("Sorry! Invalid. Try again!");
		}
		else {
		    printf("Address is valid");
		}
 }
 else if (email[0]>= '0' && email[0] <= '9'){
     printf("Sorry! Invalid address. Try again!");
 }
	else {
	    printf("Address is valid");
	}
}
