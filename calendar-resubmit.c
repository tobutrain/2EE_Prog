//Class: 2R No: 32 Name: 長谷川 桂太
#include<stdio.h>

int main(void){

    int year,month,i; //int型のyear,month,iを宣言する
    int date[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //int型の配列dateを宣言し，後述の内容で初期化する
    
    printf("年: "); scanf("%d",&year); //表示年を取得
    printf("月: "); scanf("%d",&month); //表示月を取得
    
    //曜日を判定する
    //入力-1年までの閏年を変数leapにカウントする
    int leap = 0; //
    for(i=1;i<year;i++){
        if((year%4==0 && year%100!=0) || year%400==0){
        leap++;
        }
    }

    //(入力-1)月までの日数を変数mdaysumにカウントする
    int mdaysum = 0;
    for (i=0;i<month-1;i++){
        mdaysum += date[i];
    }

    //今年が閏年かを判定する(変数thisLeap; 0-閏年でない/1-閏年)
    int thisLeap = 0;
    if((year%4==0 && year%100!=0) || year%400==0){
        thisLeap = 1;
    }

    //西暦1年1月1日から当月の1日までの経過日数を変数daysumに計算する
    int daysum = (year-1)*365+mdaysum+1+leap;

    //もし入力月が2月より後で且つ今年が閏年ならば，変数daysumをインクリメントする
    if(month>2){
        if(thisLeap==1){
            daysum++;
        }
    }

    //カレンダーのインデントを計算するため，経過日数の7の剰余を変数indentに代入する
    int indent = daysum % 7;


    //カレンダーを表示する
    printf("\n%d年%d月\n",year,month); //"<入力年>年<入力月>月"と表示
    puts(" Sun Mon Tue Wed Thu Fri Sat"); //見出しを表示
    
    //計算したインデントの数だけ空白を出力
    for(i=1;i<=indent;i++){
        printf("    ");
    }

    int j = indent; //この後のカウントアップに用いるため，変数jにインデントの値を代入しておく

    int dateA = date[month-1]; //月の日数を代入した配列dateから，当月の日数を取得する

    //もし当年が閏年でかつ当月が2月なら，取得した日付をインクリメントする
    if(thisLeap==1){
        if(month==2){
            dateA++;
        }
    }

    //7つ出力したら改行しつつ，取得した日付までカウントアップして出力する
    for(i=1;i<=dateA;i++){
        printf("%4d",i);
        j++;
        if(j>=7){
            putchar('\n');
            j = 0;
        }
    }
    return 0;
}