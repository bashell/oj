#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n = 12;
    double sum = 0.0, money;
    while(n--) {
        scanf("%lf", &money);
        sum += money;
    }
    printf("$%.2f\n", sum/12);
    return 0;
}
