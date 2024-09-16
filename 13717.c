#include <stdio.h>
#include <string.h>

int main() {
    int T = 0, max_ev = 0, ev = 0, sum_ev = 0;
    char max_ev_str[100];
    scanf("%d", &T);
    while (T--) {
        int K, M;
        char str[100];
        scanf("%s", str);
        scanf("%d %d", &K, &M);

        while (M >= K) {
            M -= K;
            M += 2;
            ev++;
        }

        sum_ev += ev;
        if (ev > max_ev) {
            max_ev = ev;
            strcpy(max_ev_str, str);
        }
        ev = 0;
    }
    printf("%d\n", sum_ev);
    printf("%s\n", max_ev_str);

    return 0;
}