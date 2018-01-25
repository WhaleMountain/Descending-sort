#include <stdio.h>
#define SIZE 5 //定数。配列の要素数

void dSort(int scores[SIZE]);

int main(){                   
    int scores[SIZE] = {0, 60, 70, 100, 90};
    dSort(scores);
    for(int i=0;i<SIZE;i++){
        printf("%d\n",scores[i]);
    }
    return 0;
}

/**
 * sort関数
 * 配列の値を降順に並べ換える。
 **/
void dSort(int scores[SIZE]){
    int tmp;
    for(int i=0;i<SIZE;i++){
        for(int j=i;j<SIZE;j++){
            if(scores[i]<scores[j]){
                tmp=scores[i];
                scores[i]=scores[j];
                scores[j]=tmp;
            }
        }
    }
}