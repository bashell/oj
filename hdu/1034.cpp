#include <cstdio>
#include <vector>
using namespace std;

void cal(vector<int> &ivec) {
    int sz = ivec.size();
    for(int i = 0; i < sz; ++i)
        ivec[i] /= 2;
    vector<int> tmp(ivec);
    ivec[0] += tmp[sz-1];
    if(ivec[0]%2) 
        ++ivec[0];
    for(int i = 1; i < sz; ++i) {
        ivec[i] += tmp[i-1];
        if(ivec[i]%2)
            ++ivec[i];
    }
}

bool judge(vector<int> &ivec) {
    int k = ivec[0], sz = ivec.size();
    for(int i = 1; i < sz; ++i)
        if(k != ivec[i])
            return false;
    return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) && n) {
        vector<int> ivec(n, 0);
        for(int i = 0; i < n; ++i)
            scanf("%d", &ivec[i]);
        int times = 0;
        for(;;) {
            if(judge(ivec)) break;
            ++times;
            cal(ivec);
        }
        printf("%d %d\n", times, ivec[0]);
    }
    return 0;
}
