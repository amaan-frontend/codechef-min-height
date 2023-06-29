#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, H;
        scanf("%d %d", &X, &H);

        if (X >= H) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
