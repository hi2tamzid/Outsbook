#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{

    char str[100];

    while(scanf("%s", str)!= EOF)
    {
        int l=strlen(str);

        if(next_permutation(str,str+l))
        puts(str);
        else
        printf("Fix\n");

    }
    return 0;
}

