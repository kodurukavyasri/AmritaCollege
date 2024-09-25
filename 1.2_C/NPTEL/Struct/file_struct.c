#include<stdio.h>
int main(){
FILE *my_record;
char ch;

char records_name[100];

printf("Enter the file, you want to record");
scanf("%d", my_record);

struct record{
        char name[60];
        char address[60];
        int phone_number;
    };


 records_name = fopen(my_record,"w");
 fputc(ch, my_record);

 printf("File written succesfully");

 fclose(my_records);

return 0;
}