#include<stdio.h>
 
int main(){
    int step;
    int cnt=0;

    printf("下向き数字ピラミッドを作ります。");
    printf("何段ですか？: "); scanf("%d",&step);
    putchar('\n');

    for(int a = 1; a <= step; a++){
        //空白表示
        cnt = 0;
        while(cnt<a-1){
            printf(" ");
            cnt++;
        }

        //数字表示
        cnt = 2*(step+1-a)-1;
        for(int b = 0; b<cnt; b++){
            printf("%d",a%10);
        }
        putchar('\n');
    }
    return 0;
}
