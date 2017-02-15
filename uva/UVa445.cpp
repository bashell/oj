#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

const int maxn = 139;
char str[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    while(fgets(str, maxn, stdin)) {
        int len = strlen(str);
        if(len == 0) printf("\n");
        for(int i = 0; i < len; ++i) {
            if(str[i] == '!') {
                printf("\n");
                continue;
            }
            int times = 0;
            while(i < len && isdigit(str[i]))
                times += str[i++]-'0';
            if(str[i] == 'b') str[i] = ' ';
            for(int j = 0; j < times; ++j)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}

