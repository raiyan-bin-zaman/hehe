a#include <stdio.h>
int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    printf("%d\n", X > Y ? A : B);
    return 0;
}



b#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        putchar(s[i]);
        if (i < n - 1) putchar('o');
    }
    putchar('\n');
    return 0;
}

c#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        long long s[3];
        scanf("%lld %lld %lld", &s[0], &s[1], &s[2]);
        for (int i = 0; i < 3; i++)
            for (int j = i + 1; j < 3; j++)
                if (s[i] > s[j]) { long long tmp = s[i]; s[i] = s[j]; s[j] = tmp; }
        int ok = s[0]*s[0] + s[1]*s[1] == s[2]*s[2];
        printf("Case %d: %s\n", t, ok ? "yes" : "no");
    }
    return 0;
}

j#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, l, r;
        scanf("%d %d %d", &n, &l, &r);
        int cur = 0, mx = 0, mn = 0;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            if (a >= l && a <= r) cur++;
            else cur--;
            if (cur > mx) mx = cur;
            if (cur < mn) mn = cur;
        }
        printf("%d %d\n", mx, mn);
    }
    return 0;
}