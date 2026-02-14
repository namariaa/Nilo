#include <stdio.h>

int f1 (int a, int b){
    int c = a;
    if (a>b)
        c = b;
    return c;

}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int w = f1(x, y);
    printf("%d\n", w);
    return 0;
}