#include<stdio.h>
struct student_record
{
    int student_Id;
    char *First_Name;
    char *Last_Name;
    int total_credits;
    int grade;
    
}stu;


int main(){
    scanf("%d", &stu.student_Id);
    scanf("%s", &stu.First_Name);
    scanf("%s", &stu.Last_Name);
    scanf("%d", &stu.total_credits);
    scanf("%d", &stu.grade);


    printf("%d\n",stu.student_Id);
    printf("%c\n",stu.First_Name);
    printf("%c\n",stu.Last_Name);
    printf("%d\n",stu.total_credits);
    printf("%d\n",stu.grade);
}
