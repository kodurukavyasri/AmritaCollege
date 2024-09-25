#include<stdio.h>
int main(){
struct FUN
{
char x;
char* y;
int z [20] ;
} ;
struct FUN fnl;
struct FUN fn2;
struct FUN fn3 [10];
struct FUN fn4 [50];

fnl.x = 'b';
fn2 .y = 'b ' ;

fn3[4].z[5] = 234;
fn4[23 ] .y = "1234";
fn4[23] = fn3[5];

};
