int main(void)
{
    int year,month;
    int dataA[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dataB[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int i,cnt=0;
 
    printf("”N:");
    if(year>=1)
    scanf("%d",&year);
    putchar('\n');
    
    printf("ŒŽ:");
    if(month>=1&&month<=12)
    scanf("%d",&month);
    putchar('\n');
 
    int leap=0; 
    if((year%4==0&&year%100!=0)||(year%400==0)) 
         leap=1;
    else 
    leap=0;
 
    int ly=0;
    int allday=0;
    
    ly=year-1;
    
        if (leap==0){
        allday=365*ly+ly%4+ly%400-ly%100;
        for(i=1;i<month-1;i++)
        allday+=dataA[i];
        allday++;
        }
        
        else if(leap==1){
        allday=365*ly+ly%4+ly%400-ly%100;
        for(i=1;i<month-1;i++)
        allday+=dataB[i];
        allday++;
        }
        
        printf("%d",allday);
    
    printf(" Sun Mon Tue Wed Thu Fri Sat ");
    putchar('\n');
    for(i=1;i<=allday%7;i++){
        printf("    ");
        cnt++;
    }
        
    if (leap==0)
    for(i=1;i<=dataA[month-1];i++){ 
        printf("%4d",i);
        cnt++;
       if(cnt%7==0)
        putchar('\n');
       }
    
    else if(leap==1);
    for(i=1;i<=dataB[month-1];i++){
        printf("%4d",i);
        cnt++;
       if(cnt%7==0)
        putchar('\n');
        }
        
     return 0;
}