#include <stdio.h>
int main()
{
 int a, b, s, Greatest;
 scanf("%d %d %d", &a, &b, &s);
Greatest = a;
 if(a < b || a < s){
  if(b < s){
  Greatest = s;
  }else{
   Greatest = b;
  }
 }
 printf("%d eh o maior\n", Greatest);
 return 0;
}
