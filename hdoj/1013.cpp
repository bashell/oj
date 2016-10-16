#include <cstdio>
#include <cstring>
using namespace std;

char ch[1111];

int main()
{
    //freopen("in.txt", "r", stdin);

    // 大数处理
    while(~scanf("%s", ch), ch[0] != '0') {
        int sum = 0;
        int len = strlen(ch);
        for(int i = 0; i < len; ++i)
            sum += ch[i] - '0';
        printf("%d\n", (sum-1)%9+1);  // 9余数定理
    }
    return 0;
}

