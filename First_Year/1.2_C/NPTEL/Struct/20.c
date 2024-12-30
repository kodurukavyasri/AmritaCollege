#include<stdio.h>

int main(){

struct fields{
  int month;
  char name[50];
  int days;
};

struct fields f[12];

f[0].month = 1;
strcpy(f[0].name, "January");
f[0].days = 31;

f[0].month = 2;
strcpy(f[0].name, "February");
f[0].days = 29;

f[0].month = 3;
strcpy(f[0].name, "March");
f[0].days = 31;

f[0].month = 4;
strcpy(f[0].name, "April");
f[0].days = 30;

f[0].month = 5;
strcpy(f[0].name, "May");
f[0].days = 31;

f[0].month = 6;
strcpy(f[0].name, "June");
f[0].days = 30;

f[0].month = 7;
strcpy(f[0].name, "July");
f[0].days = 31;

f[0].month = 8;
strcpy(f[0].name, "August");
f[0].days = 31;

f[0].month = 9;
strcpy(f[0].name, "September");
f[0].days = 30;

f[0].month = 10;
strcpy(f[0].name, "October");
f[0].days = 31;

f[0].month = 11;
strcpy(f[0].name, "November");
f[0].days = 30;

f[0].month = 12;
strcpy(f[0].name, "December");
f[0].days = 31;

}

