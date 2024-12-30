# include "stdio.h"

int find_nth_term(int n, int a, int b, int c)
{
    if (n==0) return c;
    return find_nth_term(n-1,b,c,(a+b+c)); 
}

void main(){
    int n, a, b, c, ans; 

    scanf("%d %d %d %d", &n, &a, &b, &c);

    if(n==1){
      ans = a;
    }
    else if(n==2){
      ans = b;
    }
    else if(n==3){
      ans = c;
    }
    else {
      ans = find_nth_term(n-3,a,b,c);
    }
 
    printf("%d", ans); 
    return;
}