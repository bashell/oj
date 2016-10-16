#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n) {
    int k = sqrt(n);
    for(int i = 2; i <= k; ++i) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        vector<int> ivec(n, 0);
        for(int i = 0; i < n; ++i)
            scanf("%d", &ivec[i]);
        int total = 0;
        for(int i = 0; i < n; ++i)
            if(isPrime(ivec[i]))
                ++total;
        printf("%d\n", total);
    }
    return 0;
}
