#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 11;
char arr[maxn][maxn];
int flag[maxn][maxn];
int r, c;

void judge() {
    int num = 1;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(arr[i][j] == '*') continue;
            if(i == 0 && arr[i][j] != '*') {
                flag[i][j] = num++;
            } else if(j == 0 && arr[i][j] != '*') {
                flag[i][j] = num++;
            } else if(arr[i-1][j] == '*' || arr[i][j-1] == '*') {
                flag[i][j] = num++;
            }
        }
    }
}

void solve() {
    memset(flag, 0, sizeof(flag));
    judge();
    printf("Across");
    for(int i = 0; i < r; ++i) {
        int j = 0, k = 0;
        for(;;) {
            while(k < c && arr[i][k] != '*')
                ++k;
            if(j < k) {
                printf("\n");
                if(flag[i][j] < 10)
                    printf("  %d.%c", flag[i][j], arr[i][j]);
                else
                    printf(" %d.%c", flag[i][j], arr[i][j]);
                ++j;
            }
            while(j < k) {
                printf("%c", arr[i][j]);
                ++j;
            }
            if(j >= c) break;
            while(j < c && arr[i][j] == '*')
                ++j;
            ++k;
        }
    }
    printf("\nDown");
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(arr[i][j] == '*') continue;
            int i_tmp = i;
            printf("\n");
            if(flag[i_tmp][j] < 10)
                printf("  %d.%c", flag[i_tmp][j], arr[i_tmp][j]);
            else
                printf(" %d.%c", flag[i_tmp][j], arr[i_tmp][j]);
            arr[i_tmp++][j] = '*';
            while(i_tmp < r && arr[i_tmp][j] != '*') {
                printf("%c", arr[i_tmp][j]);
                arr[i_tmp][j] = '*';
                ++i_tmp;
            }
        }
    }
    printf("\n");
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int kase = 0;
    while(scanf("%d%d", &r, &c) && r) {
        getchar();
        for(int i = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j)
                scanf("%c", &arr[i][j]);
            getchar();
        }
        if(kase++) printf("\n");
        printf("puzzle #%d:\n", kase);
        solve();
    }
    return 0;
}

