#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    int contest_start_hh, contest_start_mm, contest_end_hh, contest_end_mm ;
    int exam_start_hh, exam_start_mm, exam_end_hh, exam_end_mm ;
    while(scanf("%d:%d %d:%d %d:%d %d:%d", &contest_start_hh, &contest_start_mm, &contest_end_hh, &contest_end_mm, &exam_start_hh, &exam_start_mm, &exam_end_hh, &exam_end_mm) != EOF)
    {
        int contest_start, contest_end, exam_start, exam_end, temp ;
        contest_start = contest_start_hh * 100 + (contest_start_mm % 10) ;
        contest_start_mm /= 10 ;
        contest_start = contest_start + (contest_start_mm % 10) * 10 ;

        contest_end = contest_end_hh * 100 + (contest_end_mm % 10) ;
        contest_end_mm /= 10 ;
        contest_end = contest_end + (contest_end_mm % 10) * 10 ;

        exam_start = exam_start_hh * 100 + (exam_start_mm % 10) ;
        exam_start_mm /= 10 ;
        exam_start = exam_start + (exam_start_mm % 10) * 10 ;

        exam_end = exam_end_hh * 100 + (exam_end_mm % 10) ;
        exam_end_mm /= 10 ;
        exam_end = exam_end + (exam_end_mm % 10) * 10 ;
        if((contest_start <= exam_start && contest_end >= exam_start) || (contest_start <= exam_end && contest_end >= exam_end) || (exam_start <= contest_start && contest_start <= exam_end) || (exam_start <= contest_end && contest_end <= exam_end))
            printf("UNLUCKY 13 :(\n") ;
        else
            printf("LUCKY 13 :)\n") ;

    }
    return 0;
}

