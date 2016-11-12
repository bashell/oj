#include <cstdio>
using namespace std;

void wave_print(int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j)
            printf("%d", i+1);
        printf("\n");
    }
    for(int i = n-2; i >= 0; --i) {
        for(int j = 0; j <= i; ++j)
            printf("%d", i+1);
        printf("\n");
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, A, F, kase1 = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &A, &F);
        if(kase1++) printf("\n");
        int kase2 = 0;
        for(int i = 0; i < F; ++i) {
            if(kase2++) printf("\n");
            wave_print(A);
        }
    }
    return 0;
}

