#include <cstdio>
#include <vector>
using namespace std;

bool judge(int num) {
    int x = num/100, y = num%100/10, z = num%10;
    return num == x*x*x + y*y*y + z*z*z ? true : false;
}

void solve(int m, int n, vector<int> &ivec) {
    for(int i = m; i <= n; ++i) {
        if(judge(i))
            ivec.push_back(i);
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(2 == scanf("%d%d", &m, &n)) {
        vector<int> ivec;
        solve(m, n, ivec);
        if(ivec.empty())
            printf("no\n");
        else {
            printf("%d", ivec[0]);
            for(int i = 1; i < ivec.size(); ++i)
                printf(" %d", ivec[i]);
            printf("\n");
        }
    }
    return 0;
}
