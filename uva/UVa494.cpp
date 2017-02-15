#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    char str[1024];
    while(fgets(str, 1024, stdin)) {
        int len = strlen(str), words = 0;
        for(int i = 0, flag = 1; i < len;) {
            while(i < len && !isalpha(str[i]))
                ++i, flag = 0;
            while(i < len && isalpha(str[i]))
                ++i, flag = 1;
            if(flag) ++words;
        }
        printf("%d\n", words);
    }
    return 0;
}

