#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int a[8] = {1, 2, 0, 2, 2, 1, 0, 1};  // 数组元素为f(i)模3的余数, 周期为8.
    int n;
    while(~scanf("%d", &n))
        printf("%s\n", (a[n % 8]) ? "no" : "yes");  // 数组值取0时打印yes(此时被3整除), 非0时打印no.
    return 0;
}
