#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
int main()
{
    int t, n, cas = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        LL MR = 0, MT = 0, MU = 0, RM = 0, RT = 0, RU = 0, TM = 0, TR = 0, TU = 0, UM = 0, UR = 0, UT = 0;
        LL m,r,t,u;
        string s;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> m >> r >> t >> u >> s;
            if(s == "Moni")
            {
                MR += r;
                MT += t;
                MU += u;
            }
            else if(s == "Rasel")
            {
                RM += m;
                RT += t;
                RU += u;
            }
            else if(s == "Touhid")
            {
                TM += m;
                TR += r;
                TU += u;
            }
            else
            {
                UM += m;
                UR += r;
                UT += t;

            }
        }

        if(MR > RM)
        {
            MR -= RM;
            RM = 0;
        }
        else{
            RM -= MR;
            MR = 0;
        }
        if(MT > TM)
        {
            MT -= TM;
            TM = 0;
        }
        else
        {
            TM -= MT;
            MT = 0;
        }
        if(MU > UM)
        {
            MU -= UM;
            UM = 0;
        }
        else
        {
            UM -= MU;
            MU = 0;
        }
        if(RT > TR)
        {
            RT -= TR;
            TR = 0;
        }
        else
        {
            TR -= RT;
            RT = 0;
        }
        if(RU > UR)
        {
            RU -= UR;
            UR = 0;
        }
        else
        {
            UR -= RU;
            RU = 0;
        }
        if(TU > UT)
        {
            TU -= UT;
            UT = 0;
        }
        else
        {
            UT -= TU;
            TU = 0;
        }
        printf("Case %d:\n", cas++);
        printf("%lld %lld %lld\n", MR,MT,MU);
        printf("%lld %lld %lld\n", RM,RT,RU);
        printf("%lld %lld %lld\n", TM,TR,TU);
        printf("%lld %lld %lld\n", UM,UR,UT);
    }
    return 0;

}
