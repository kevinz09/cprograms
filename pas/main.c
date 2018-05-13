#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>

int main()
{   int i, digcount=0,upcount=0,scount=0;
    char password[10];
    printf("Enter 6 letter password\n");
    scanf(" %s",password);
    printf(" %s",password);
    for(i=0;i<=7;i++)
    {
        if(isupper(password[i]))
        {
            printf("\nupper");
            upcount++;
        }
        if(isdigit(password[i]))
         {
             printf("\nnum");
             digcount++;
         }
        if(password[i]=='!' || password[i]=='$')
        {
            printf("\nspecial");
            scount++;
        }
     }
    if(upcount!=0 && digcount!=0 && scount!=0)
    {
        printf("\nstrong Password");
    }
    else
    {
        printf("\nweak password");
    }
    return 0;
}
