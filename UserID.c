#include <stdio.h>
int main() 
{
    int ID = 500;
    int password = 123;
    printf("\nPlease Enter Your ID:");
    scanf("%d", &ID);
    switch (ID) 
	{
    	case 500:
        printf("\nEnter your Password:");
        scanf("%d", &password);
        switch (password) 
		{
        	case 123:
        	printf("\nWelcome Dear Programmer");
        	break;
        	default:
        	printf("Incorrect Password");
        	break;
        }
        	break;
            default:
                printf("Incorrect ID");
            break;
        }
        return 0;
}
