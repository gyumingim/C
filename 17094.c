#include <stdio.h>
#include <string.h>

int main() {
    int a, cnt = 0;
    char str[100000];
    scanf("%d\n%s", &a, str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '2') cnt++;
        else cnt--;
    }
    if (cnt == 0) printf("yee");
    else if (cnt >= 1) printf("2");
    else printf("e");
    return 0;
}
