#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; ++i) {
        string a, b, res("");
        int carry = 0;
        cin >> a >> b;
        int index_a = a.size()-1, index_b = b.size()-1;
        for( ; index_a >= 0 || index_b >= 0; --index_a, --index_b) {
            int tmp_a = index_a >= 0 ? a[index_a] - '0' : 0;
            int tmp_b = index_b >= 0 ? b[index_b] - '0' : 0;
            int sum = tmp_a + tmp_b + carry;
            carry = sum / 10;
            res = string(1, sum%10 + '0') + res;
        }
        if(carry)
            res = '1' + res;
        if(i > 0)
            printf("\n");
        printf("Case %d:\n", i+1);
        cout << a << " + " << b << " = " << res << endl;
    }
    return 0;
}

