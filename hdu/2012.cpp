#include <cstdio>
#include <cmath>
using namespace std;

bool prime_judge(int n) {
    if(n <= 1) return false;
    int val = sqrt(n);
    for(int i = 2; i <= val; ++i) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int x, y;
    while(2 == scanf("%d%d", &x, &y) && !(x == 0 && y == 0)) {
        bool flag = true;
        for(int i = x; i <= y; ++i) {
            int v = i*i + i + 41;
            if(!prime_judge(v))
                flag = false;
        }
        if(flag) printf("OK\n");
        else printf("Sorry\n");
    }
    return 0;
}
