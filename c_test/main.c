#include <stdbool.h>
#include <stdio.h>

//»ØÎÄÊı
bool isPalindrome(int x) {
    if (x < 0 || x > 0 && x % 10 == 0) {
        return false;
    }
    int ver = 0;
    while (x > ver) {
        ver = ver  * 10 + x % 10;
        x = x / 10;
    }
    return ver == x || x == ver / 10;
}
int main() {
    int x = 0;
    scanf("%d", &x);
    return isPalindrome(x);
}
