#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int freq[256] = {0}; 
    int left = 0, right = 0;
    int maxLen = 0;
    while (right < n) {
        freq[(unsigned char)s[right]]++;
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
        right++;
    }
    printf("%d", maxLen);
    return 0;
}
