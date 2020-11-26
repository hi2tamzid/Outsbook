#include <stdio.h>

int main()
{
    int t, fail, i, k = 1;
    float point, gpa, op, sp ;
    scanf("%d", &t) ;
    while(t--)
    {
        for(i = 0, gpa = 0.0, fail = 0 ; i < 13 ; i++)
        {
            scanf("%f", &point) ;
            if(i != 12 && point == 0.0)
                fail++ ;
            if(i == 12 && point <= 2.0)
                point = 0.0 ;
            if(i == 12 && point > 2.0)
            {
                sp = point - 2.0 ;
                gpa += sp ;
                if(gpa > 60.0)
                    gpa = 60.0 ;
            }
            else
            gpa += point ;

        }
        gpa /= 12 ;
        if(fail == 1 || fail == 2)
            printf("Student %d: Sorry. You failed.\n", k) ;
        else if(fail > 2)
            printf("Student %d: Oops, get ready for all subjects again. :(\n", k) ;
        else
            printf("Student %d: %.2f\n", k, gpa) ;
        k++ ;
    }
    return 0 ;
}
