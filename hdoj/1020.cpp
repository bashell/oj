#include <cstdio>
using namespace std;

const int maxn = 11111;
char str[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        char *ptr1 = str;
        int cnt;
        while(*ptr1) {
            cnt = 1;
            char *ptr2 = ptr1+1;
            while(*ptr2 == *ptr1) {
                ++cnt;
                ++ptr2;
            }
            if(cnt == 1)
                printf("%c", *ptr1);
            else
                printf("%d%c", cnt, *ptr1);
            ptr1 = ptr2;
        }
        printf("\n");
    }
    return 0;
}

