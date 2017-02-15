#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 100010;
int table[maxn];

void build_table() {
    memset(table, 0, sizeof(table));
    for(int num = 1; num < maxn; ++num) {
        int x = num, y = num;
        while(x > 0) {
            y += x%10; x/= 10;
        }
        if(table[y] == 0 || num < table[y])
            table[y] = num;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, n;
    build_table();
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        printf("%d\n", table[n]);
    }
    return 0;
}

