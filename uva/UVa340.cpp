#include <cstdio>
#include <cstring>
using namespace std;

#define min(a,b) ( (a) < (b) ? (a) : (b) )

const int maxn = 1111;
int N;
int code[maxn];
int guess[maxn];
int hash_code[9], hash_guess[9];

void solve() {
    int x = 0, y = 0;
    memset(hash_code, 0, sizeof(hash_code));
    memset(hash_guess, 0, sizeof(hash_guess));
    for(int i = 0; i < N; ++i) {
        if(code[i] == guess[i]) {
            ++x;
        } else {
            ++hash_code[code[i]-1];
            ++hash_guess[guess[i]-1];
        }
    }
    for(int i = 0; i < 9; ++i)
        y += min(hash_code[i], hash_guess[i]);
    printf("    (%d,%d)\n", x, y);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int kase = 1;
    while(scanf("%d", &N) == 1 && N) {
        printf("Game %d:\n", kase++);
        for(int i = 0; i < N; ++i)
            scanf("%d", &code[i]);
        while(scanf("%d", &guess[0]) == 1) {
            for(int i = 1; i < N; ++i)
                scanf("%d", &guess[i]);
            if(guess[0] == 0) break;
            solve();
        }
    }
    return 0;
}

