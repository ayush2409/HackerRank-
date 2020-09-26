#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,c,j=0,result_size;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    int result[n];
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
       if(grades[grades_i]%5 != 0 )
        {
            c=grades[grades_i];
            while(c%5 !=0)
                c++;
            if((c-grades[grades_i])<3 && c >= 40)
                    result[grades_i]=c;
            else
                result[grades_i]=grades[grades_i];
         }
        else
             result[grades_i]=grades[grades_i];
    }
    result_size=n;
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    return 0;
}
