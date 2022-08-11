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
        //����-1�N�܂ł̉[�N��ϐ�leap�ɃJ�E���g����
        int leap = 0; //
        for(i=1;i<year;i++){
            if((year%4==0 && year%100!=0) || year%400==0){
            leap++;
            }
        }

        //(����-1)���܂ł̓�����ϐ�mdaysum�ɃJ�E���g����
        int mdaysum = 0;
        for (i=0;i<month-1;i++){
            mdaysum += date[i];
        }

        //���N���[�N���𔻒肷��(�ϐ�thisLeap; 0-�[�N�łȂ�/1-�[�N)
        int thisLeap = 0;
        if((year%4==0 && year%100!=0) || year%400==0){
            thisLeap = 1;
        }

        //����1�N1��1�����瓖����1���܂ł̌o�ߓ�����ϐ�daysum�Ɍv�Z����
        int daysum = (year-1)*365+mdaysum+1+leap;

        //�������͌���2������Ŋ����N���[�N�Ȃ�΁C�ϐ�daysum���C���N�������g����
        if(month>2){
            if(thisLeap==1){
                daysum++;
            }
        }

        //�J�����_�[�̃C���f���g���v�Z���邽�߁C�o�ߓ�����7�̏�]��ϐ�indent�ɑ������
        int indent = daysum % 7;


        //�J�����_�[��\������
        system("cls");
        printf("%d�N%d��\n\n",year,month); //"<���͔N>�N<���͌�>��"�ƕ\��
        puts(" Sun Mon Tue Wed Thu Fri Sat"); //���o����\��
        
        //�v�Z�����C���f���g�̐������󔒂��o��
        for(i=1;i<=indent;i++){
            printf("    ");
        }

        int j = indent; //���̌�̃J�E���g�A�b�v�ɗp���邽�߁C�ϐ�j�ɃC���f���g�̒l�������Ă���

        int dateA = date[month-1]; //���̓������������z��date����C�����̓������擾����

        //�������N���[�N�ł�������2���Ȃ�C�擾�������t���C���N�������g����
        if(thisLeap==1){
            if(month==2){
                dateA++;
            }
        }

        //7�o�͂�������s���C�擾�������t�܂ŃJ�E���g�A�b�v���ďo�͂���
        for(i=1;i<=dateA;i++){
            printf("%4d",i);
            j++;
            if(j>=7){
                putchar('\n');
                j = 0;
            }
        }

        //���s�R�[�h�^�v���O�����ꎞ��~
        printf("\n\n");
        system("PAUSE");

    }
    return 0;
}