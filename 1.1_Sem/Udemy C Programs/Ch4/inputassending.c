#include<stdio.h>

int main ()
{   int currentvalue = 0;
    int previousvalue = 0; 
    int len;
    int VeryAssendingFlag = 1;
    
    printf("Enter the length of the assending order required : ");
    scanf("%d", len);

    do
    {
        printf("Enter the number :");
        scanf ("%d",currentvalue );

        if (currentvalue < 0)
        {
            printf("The current Value is not positive :");

            else
            {
                if (currentvalue <= previousvalue )
                 VeryAssendingFlag = 0

                 previousvalue = currentvalue
                    
                
                

            }

            
        
        
    } while (/* condition */);
    
}