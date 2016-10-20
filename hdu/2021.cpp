#include <cstdio>
using namespace std;

const int maxn = 111;
int arr[maxn];

/*
// solve1
int solve(int n) {
    int num = 0;
    while(n > 0) {
        if(n >= 100)
            ++num, n -= 100;
        else if(n >= 50)
            ++num, n -= 50;
        else if(n >= 10)
            ++num, n -= 10;
        else if(n >= 5)
            ++num, n -= 5;
        else if(n >= 2)
            ++num, n -= 2;
        else
            ++num, n -= 1;
    }
    return num;
}
*/

// solve2
int solve(int n) {
    return n/100 + n%100/50 + n%100%50/10 + n%100%50%10/5 + n%100%50%10%5/2 + n%100%50%10%5%2;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        int sum = 0;
        for(int i = 0; i < n; ++i) {
            sum += solve(arr[i]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
