#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
    int nums[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];  
    }
    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;
    printf("%d", missing);
    return 0;
}

