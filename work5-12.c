#include<stdio.h>

int main(void){
    int tensu[2][4][3] = {{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    int sum[4][3];

    for(int h = 0;h<2;h++){
        //2回分の点数の合計を求める
        for(int i = 0;i<4;i++){
            for(int j = 0;j<3;j++){
                sum[i][j] += tensu[h][i][j];
            }
        }

        //点数表示
        printf("%d回目の点数\n",h+1);
        for(int i = 0;i<4;i++){
            for(int j = 0;j<3;j++){
                printf("%4d",tensu[h][i][j]);
            }
            putchar('\n');
        }
    }

    //合計点を表示
    puts("合計点");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            printf("%4d",sum[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

