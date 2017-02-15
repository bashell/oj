#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 111;
char s[6][maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, ch, i;
    scanf("%d", &n);
    while(n--) {
        for(int i = 0; i < 6; ++i)
            memset(s[i], 0, sizeof(s[i]));
        getchar();
        for(int i = 0; (ch = getchar()) != '<'; ++i)
            s[0][i] = char(ch);
        for(int i = 0; (ch = getchar()) != '>'; ++i)
            s[1][i] = char(ch);
        for(int i = 0; (ch = getchar()) != '<'; ++i)
            s[2][i] = char(ch);
        for(int i = 0; (ch = getchar()) != '>'; ++i)
            s[3][i] = char(ch);
        for(int i = 0; (ch = getchar()) != '\n'; ++i)
            s[4][i] = char(ch);
        int k;
        for(k = 0; (ch = getchar()) != '.'; ++k)
            s[5][k] = char(ch);
        getchar(); getchar();
        s[5][k] = '\0';
        printf("%s%s%s%s%s\n", s[0], s[1], s[2], s[3], s[4]);
        printf("%s%s%s%s%s\n", s[5], s[3], s[2], s[1], s[4]);
    }
    return 0;
}

