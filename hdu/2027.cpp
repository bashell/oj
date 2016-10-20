#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 111;
char arr[maxn];

void solve() {
    int mymap[5];
    memset(mymap, 0, sizeof(mymap));
    int len = strlen(arr);
    for(int i = 0; i < len; ++i) {
        if(arr[i] == 'a') ++mymap[0];
        if(arr[i] == 'e') ++mymap[1];
        if(arr[i] == 'i') ++mymap[2];
        if(arr[i] == 'o') ++mymap[3];
        if(arr[i] == 'u') ++mymap[4];
    }
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",
            mymap[0], mymap[1], mymap[2], mymap[3], mymap[4]);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, kase;
    while(~scanf("%d", &n)) {
        kase = 0;
        getchar();
        for(int i = 0; i < n; ++i) {
            memset(arr, 0, sizeof(arr));
            gets(arr);
            if(kase++) printf("\n");
            solve();
        }
    }
    return 0;
}
