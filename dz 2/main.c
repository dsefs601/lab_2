#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a,b,l;
    scanf ("%d%d", &a, &b);
    if (a>=0 && b<0){
        l=a/abs(b);
        b=-l*b;
        a = a-b;
    }
    if  (a<0 && b<0){
        l=a/b;
        l=l+1;
        b=l*b;
        a = abs(b)-abs(a);
    }
    if (a>=0 && b>=0){
        l=a/b;
        a = a-b*l;
    }
    if(a<0 && b>=0){
        l=abs(a)/b;
        l=l+1;
        b=-l*b;
        a = abs(b)-abs(a);
    }
    printf ("%d\n", a);
}
