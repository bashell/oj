#include <cstdio>
#include <cmath>
using namespace std;

/* 
  m = n^n ==> log10(m) = nlog10(n) ==> m = 10^(nlog10(n)) 
  设nlog10(n) = 整数部分(a) + 小数部分(b), 则 m = 10^a * 10^b.
  10^a的最高位必为1, 故10^b的最高位即为所求.
  由于 0<=b<1, 故 1<=10^b<10, 因此对10^b取整即可
*/
int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        double x, y;
        while(n--) {
            scanf("%lf", &x);
            y = x*log10(x) - (long long)(x*log10(x));  // 小数部分
            printf("%d\n", (int)pow(10, y));
        }
    }
    return 0;
}
