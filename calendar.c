#include<stdio.h>
#include<stdlib.h>

int main(void){

    while(1) {
        system("cls"); //�R���\�[���̉�ʂ��N���A����
    
        int year,month,i; //int�^��year,month,i��錾����
        int date[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //int�^�̔z��date��錾���C��q�̓��e�ŏ���������
        
        printf("�N: "); scanf("%d",&year); //�\���N���擾
        printf("��: "); scanf("%d",&month); //�\�������擾
        
        //�j���𔻒肷��
        int leap = 0; //
        for(i=1;i<year;i++){
            if((year%4==0 && year%100!=0) || year%400==0){
            leap++;
            }
        }

        int mdaysum = 0;
        for (i=0;i<month-1;i++){
            mdaysum += date[i];
        }

        int thisleap = 0;
        if((year%4==0 && year%100!=0) || year%400==0){
            thisleap = 1;
        }

        int daysum = (year-1)*365+mdaysum+1+leap;

        if(month>2){
            if(thisleap==1){
                daysum++;
            }
        }

        int indent = daysum % 7;


        //�J�����_�[��\������
        system("cls");
        printf("%d�N%d��\n\n",year,month);
        puts(" Sun Mon Tue Wed Thu Fri Sat");
        
        for(i=1;i<=indent;i++){
            printf("    ");
        }

        int j = indent;

        int dateA = date[month-1];

        if((year%4==0 && year%100!=0) || year%400==0){
            if(month==2){
                dateA++;
            }
        }

        for(i=1;i<=dateA;i++){
            printf("%4d",i);
            j++;
            if(j>=7){
                putchar('\n');
                j = 0;
            }
        }
        printf("\n\n");
        system("PAUSE");

    }
    return 0;

    
}