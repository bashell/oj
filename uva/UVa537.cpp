#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


unordered_map<char, char> hash_table{{'U', 'V'}, {'I', 'A'}, {'P', 'W'}};


void solve(const string &s) {
    unordered_map<char, bool> hash_table_flag{{'U', false}, {'I', false}, {'P', false}};
    int equal_index1 = s.find_first_of('='), equal_index2 = s.find_last_of('=');
    char concept1 = s[equal_index1-1], concept2 = s[equal_index2-1];
    char unit1 = hash_table[concept1], unit2 = hash_table[concept2];
    hash_table_flag[concept1] = true, hash_table_flag[concept2] = true;
    double weight1 = 1.0, weight2 = 1.0;
    bool has_prefix1 = false, has_prefix2 = false;
    int i1 = equal_index1 + 1, i2 = equal_index2 + 1;

    while(s[i1] != unit1) ++i1;
    while(s[i2] != unit2) ++i2;

    if(s[i1-1] == 'm') { weight1 *= 0.001; --i1; }
    else if(s[i1-1] == 'k') { weight1 *= 1000; --i1; }
    else if(s[i1-1] == 'M') { weight1 *= 1000000; --i1; }

    if(s[i2-1] == 'm') { weight2 *= 0.001; --i2; }
    else if(s[i2-1] == 'k') { weight2 *= 1000; --i2; }
    else if(s[i2-1] == 'M') { weight2 *= 1000000; --i2; }

    string str1(s.begin()+equal_index1+1, s.begin()+i1);
    string str2(s.begin()+equal_index2+1, s.begin()+i2);
    //cout << str1 << " " << str2 << " " << weight1 << " " << weight2 << endl;
    double num1 = atof(str1.c_str()) * weight1, num2 = atof(str2.c_str()) * weight2, result;
    if(!hash_table_flag['U']) { // we got 'P' and 'I'
        if(concept1 == 'P')
            result = num1 / num2;
        else
            result = num2 / num1;
        printf("U=%.2fV\n", result);
    }
    else if(!hash_table_flag['I']) {  // we got 'U' and 'P'
        if(concept1 == 'U')
            result = num2 / num1;
        else
            result = num1 / num2;
        printf("I=%.2fA\n", result);
    }
    else if(!hash_table_flag['P']) {  // we got 'U' and 'I'
        printf("P=%.2fW\n", num1 * num2);
    }
    printf("\n");
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, kase = 1;
    string s;
    scanf("%d", &n);
    getchar();
    while(n--) {
        getline(cin, s);
        printf("Problem #%d\n", kase++);
        solve(s);
    }
    return 0;
}

