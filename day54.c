#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int S = n * (n + 1) / 2;   
    int x = sqrt(S);          
    if (x * x == S)
        printf("%d\n", x);
    else
        printf("-1\n");
    return 0;
}
