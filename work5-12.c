#include<stdio.h>

int main(void){
    int tensu[2][4][3] = {{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    int sum[4][3];

    for(int h = 0;h<2;h++){
        //2�񕪂̓_���̍��v�����߂�
        for(int i = 0;i<4;i++){
            for(int j = 0;j<3;j++){
                sum[i][j] += tensu[h][i][j];
            }
        }

        //�_���\��
        printf("%d��ڂ̓_��\n",h+1);
        for(int i = 0;i<4;i++){
            for(int j = 0;j<3;j++){
                printf("%4d",tensu[h][i][j]);
            }
            putchar('\n');
        }
    }

    //���v�_��\��
    puts("���v�_");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            printf("%4d",sum[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

