#include <cstdio>
#include <cstring>
#include <string>
#include <unordered_set>
using namespace std;

const int maxn = 88;
char arr[maxn];
unordered_set<string> cset;

int solve(int n) {
    int len;
    // 枚举长度
    for(len = 1; len <= n; ++len) {
        cset.clear();
        if(n%len == 0) {
            int k = n/len;  // k份, 每份长度为len
            //if(k == 1) break;
            for(int j = 0; j < k; ++j)
                cset.insert(string(arr+j*len, arr+(j+1)*len));
            if(cset.size() == 1)
                return len;
        }
    }
    return n;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, kase = 0;
    scanf("%d", &T);
    getchar();
    while(T--) {
        scanf("%s", arr);
        if(kase++) printf("\n");
        printf("%d\n", solve(strlen(arr)));
    }
    return 0;
}

