#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    long a, b;
    while(2 == scanf("%ld%ld", &a, &b)) {
        printf("%ld\n", (a > b ? a-b : b-a));
    }
    return 0;
}

