#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binary_search(int* a_list, int n)
{
    int first = 0;
    int last =  6;
    while (last >= first){
        int mid = (first + last )/2;
        if(a_list[mid] == n)
        {
            return 1;
        }
        else{
            if(n < a_list[mid])
            {
                last = mid - 1;
            }
            else{
                first = mid + 1;
            }
        }
    }
    return 0;
}

int main(){
    int list[] = {10, 12, 13, 14, 15, 18, 19};
    printf("%d", binary_search(list,1));
}