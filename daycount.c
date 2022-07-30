#include <stdio.h>

int main()
{   int birth,present,total,month,date,pmonth,pdate,totalyear,totalday,finalday,ptotalday,monthday;
    int count=0;  
    int notcount=0;

    printf("enter the birth date : ");
    scanf("%d",&date);
    while(date>31||date<1){
        printf("INVALID DATE !! Enter Date Again ");
        scanf("%d",&date);
    }
    printf("enter the birth month : ");
    scanf("%d",&month);
     while(month>12){
    printf("INVALID MONTH !! Enter Month Again ");
    scanf("%d",&month);
    }
    printf("enter the birth year : ");
    scanf("%d",&birth); 
    while(birth<=1500||birth>=2500){
     printf("enter the year between 1500 and 2500 ");
   scanf("%d",&birth); 
    }
    
    
    printf("enter the present date : ");
    scanf("%d",&pdate);
     while(pdate>31||pdate<1){
        printf("enter a valid Date ");
        scanf("%d",&pdate);
    }
     printf("enter the present month : ");
    scanf("%d",&pmonth);
    while(pmonth>12){
    printf("INVALID MONTH !! Enter Month Again ");
    scanf("%d",&pmonth);
    }
    printf("enter the present year : ");
    scanf("%d",&present);
    while(present<=1500||present>=2500){
     printf("Enter the year between 1500 and 2500 ");
   scanf("%d",&present);
    }
    
    for(int i=birth;i<=present;i++){
        if(i%400==0){
        count=count+1; 
        }else if(i%100==0){
    count=count+0;
        }else if(i%4==0){
            count+=1;
        }
       }
   
     totalyear=present-(birth+1);
    switch(month){
        case(1):
        totalday=334;
        break;
        case(2):
        totalday=306;
        break;
        case(3):
        totalday=275;
        break;
        case(4):
        totalday=245;
        break;
        case(5):
        totalday=214;
        break;
        case(6):
        totalday=184;
        break;
        case(7):
        totalday=153;
        break;
        case(8):
        totalday=122;
        break;
        case(9):
        totalday=92;
        break;
        case(10):
        totalday=61;
        break;
        case(11):
        totalday=31;
        break;
        case(12):
        totalday=0;
        break;
     
         }
    
      switch(pmonth){
        case(1):
        monthday=31-date;
        break;
        case(2):
        monthday=28-date;
        break;
        case(3):
        monthday=31-date;
        break;
        case(4):
        monthday=30-date;
        break;
        case(5):
        monthday=31-date;
        break;
        case(6):
        monthday=30-date;
        break;
        case(7):
        monthday=31-date;
        break;
        case(8):
        monthday=31-date;
        break;
        case(9):
        monthday=30-date;
        break;
        case(10):
        monthday=31-date;
        break;
        case(11):
        monthday=30-date;
        break;
        case(12):
        monthday=31-date;
        break;
     
         }
    
        switch(pmonth){
        case(1):
        ptotalday=0;
        break;
        case(2):
        ptotalday=31;
        break;
        case(3):
        ptotalday=59;
        break;
        case(4):
        ptotalday=90;
        break;
        case(5):
        ptotalday=120;
        break;
        case(6):
        ptotalday=151;
        break;
        case(7):
        ptotalday=181;
        break;
        case(8):
        ptotalday=212;
        break;
        case(9):
        ptotalday=243;
        break;
        case(10):
        ptotalday=273;
        break;
        case(11):
        ptotalday=304;
        break;
        case(12):
        ptotalday=334;
        break;
     
         }
    
    finalday=((totalyear*365)+count)+(totalday+monthday)+(pdate+ptotalday);
    if(finalday<0){
        printf("\n\nBirth Date Is More than Present date !");
        
    }else{
    printf("\n\nTotal leap years are %d \n\n",count);    
    printf("The total days from your bith date is %d",finalday);
    }
    return 0;
}
