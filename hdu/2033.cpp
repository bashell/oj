#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    int h1, m1, s1, h2, m2, s2;
    scanf("%d", &n);
    while(n--) {
        int carry = 0;
        scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
        int z = s1 + s2 + carry;
        carry = z/60;
        z %= 60;
        int y = m1 + m2 + carry;
        carry = y/60;
        y %= 60;
        int x = h1 + h2 + carry;
        printf("%d %d %d\n", x, y, z);
    }
    return 0;
}
