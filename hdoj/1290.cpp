#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    for(int n; ~scanf("%d", &n); printf("%d\n", (n*n*n+5*n+6)/6)) ;
    return 0;
}
