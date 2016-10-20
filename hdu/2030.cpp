#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 1111;
char arr[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) {
        gets(arr);
        int len = strlen(arr), sum = 0;
        // 汉字机内码使用二个字节，每个字节最高位是1（负值）
        for(int i = 0; i < len; ++i)
            if(arr[i] < 0)
                ++sum;
        printf("%d\n", (sum+1)/2);
    }
    return 0;
}
