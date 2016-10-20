#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    char op;
    int left, right;
    while(~scanf("%d", &T)) {
        for(int i = 0; i < T; ++i) {
            cin >> op >> left >> right;
            switch(op) {
            case '+':
                printf("%d\n", left + right);
                break;
            case '-':
                printf("%d\n", left - right);
                break;
            case '*':
                printf("%d\n", left * right);
                break;
            case '/':
                if(left % right == 0)
                    printf("%d\n", left / right);
                else
                    printf("%.2f\n", (double)left / right);
            }
        }
    }
    return 0;
}
