#include <stdio.h>

int main(void)
 {
	int year,month,dow,py,sum,i;   /*各変数の宣言*/
	int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,30};   /*各月の日数*/
    int cnt = 0; /*改行用のカウントに使用する変数cnt*/

	printf("年:");		/*年の入力*/
	scanf("%d",&year);  /*int[year]はint　yearの配列である*/
	printf("月:");      /*月の入力*/
	scanf("%d",&month); /*int[month]はint　monthの配列である*/

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        day[2] = 29; /*閏年の時、二月を二十九日に変更する*/

    py = year - 1; /*前年をpyに格納する*/
    sum = 365 * py + py / 4 + py / 400 - py / 100; 
    /*日数の計算をする。前年までの日数＋閏年の分の日数*/
    for (i = 1; i < month; i++) /*iの値がmonth以下である限り続ける*/
        sum += day[i]; /*変数sumにday[i]を加えたものを新しい変数sumとして格納する*/
    sum++;  /*変数sumに１を加えた結果を代入する演算子*/
    dow = sum % 7; /*曜日を確定させるために変数sumを７で割る。その余りを曜日番号とする*/

    printf("\n%d年%d月\n",year,month);

    printf(" Sun Mon Tue Wed Thu Fri Sat \n"); /*曜日の名前*/
    for(i = 0; i < dow; i++) /*iの値がdow以下である限り続ける*/
    {
        printf("    "); /*カレンダー調節用の空白*/
        cnt++; /*変数cntに１を加えた結果を代入する演算子*/
    }

    for(i = 1; i <= day[month]; i++) /*iの値がday[month]以下もしくは同値である限り続ける*/
    {
        printf("%4d", i); /*曜日と数字を揃えるための変数変換子*/
        cnt++; /*変数cntに１を加えた結果を代入する演算子*/
            if(cnt % 7 == 0) /*cntが７で割り切れたときのif文*/
            {
                putchar('\n'); /*改行する*/
                cnt = 0; /*カウントをゼロにする*/
            }
    }

    if(cnt != 0) /*cntが０と同値でない時のif文*/
    putchar('\n'); /*改行する*/

	return 0;
}

