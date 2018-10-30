#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

const int maxn = 55;
char arr[maxn][maxn];
char words[maxn][maxn];
int m, n, k;


bool judge(const char *word, int len, int i, int j, int flag) {
    for(int idx = 0; idx < len; ++idx) {
        if(tolower(word[idx]) != tolower(arr[i][j]))
            return false;
        switch(flag) {
        // 左
        case 0:
            --j;
            break;
        // 左上
        case 1:
            --i; --j;
            break;
        // 上
        case 2:
            --i;
            break;
        // 右上
        case 3:
            --i; ++j;
            break;
        // 右
        case 4:
            ++j;
            break;
        // 右下
        case 5:
            ++i; ++j;
            break;
        // 下
        case 6:
            ++i;
            break;
        // 左下
        case 7:
            ++i; --j;
            break;
        }
    }
    return true;
}

void judge(const char *word) {
    int len = strlen(word);
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(j-len+1 >= 0 && judge(word, len, i, j, 0) ||
               i-len+1 >= 0 && j-len+1 >= 0 && judge(word, len, i, j, 1) ||
               i-len+1 >= 0 && judge(word, len, i, j, 2) ||
               i-len+1 >= 0 && j+len-1 < n && judge(word, len, i, j, 3) ||
               j+len-1 < n && judge(word, len, i, j, 4) ||
               i+len-1 < m && j+len-1 < n && judge(word, len, i, j, 5) ||
               i+len-1 < m && judge(word, len, i, j, 6) ||
               i+len-1 < m && j-len+1 >= 0 && judge(word, len, i, j, 7)
               ) {
                printf("%d %d\n", i+1, j+1);
                return ;
            }
        }
    }
}

void solve() {
    for(int i = 0; i < k; ++i) {
        judge(words[i]);
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, kase = 0;
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &m, &n);
        for(int i = 0; i < m; ++i)
            scanf("%s", arr[i]);
        scanf("%d", &k);
        for(int i = 0; i < k; ++i)
            scanf("%s", words[i]);
        if(kase++) printf("\n");
        solve();
    }
    return 0;
}
