#include <cstdio>
using namespace std;

char s[52];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i) {
            scanf("%s", s);
            printf("String #%d\n", i+1);
            char *str = s;
            while(*str) {
                if(*str == 'Z')
                    printf("A");
                else
                    printf("%c", *str+1);
                ++str;
            }
            printf("\n\n");
        }
    }
    return 0;
}
