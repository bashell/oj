#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char *msg[] = {"not a palindrome", "a regular palindrome",
                     "a mirrored string", "a mirrored palindrome"};

char cal(char ch) {
    if(isalpha(ch)) return rev[ch-'A'];
    return rev[ch-'0'+25];
}

int main()
{
    //freopen("in.txt", "r", stdin);
    char input[100];
    while(scanf("%s", input) == 1) {
        int isPal = 1, isMir = 1;
        int len = strlen(input);
        for(int i = 0; i < (len+1)/2; ++i) {
            if(input[i] != input[len-1-i]) isPal = 0;
            if(cal(input[i]) != input[len-1-i]) isMir = 0;
        }
        printf("%s -- is %s.\n\n", input, msg[isMir*2+isPal]);
    }
    return 0;
}
