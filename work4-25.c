#include<stdio.h>
 
int main(){
    int step;
    int cnt=0;

    printf("�����������s���~�b�h�����܂��B");
    printf("���i�ł����H: "); scanf("%d",&step);
    putchar('\n');

    for(int a = 1; a <= step; a++){
        //�󔒕\��
        cnt = 0;
        while(cnt<a-1){
            printf(" ");
            cnt++;
        }

        //�����\��
        cnt = 2*(step+1-a)-1;
        for(int b = 0; b<cnt; b++){
            printf("%d",a%10);
        }
        putchar('\n');
    }
    return 0;
}
