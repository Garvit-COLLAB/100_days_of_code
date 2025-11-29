//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include<stdio.h>
int main () {
     char str[11];
     printf("Enter a date in dd/mm/yyyy format:");
     scanf("%s",str);

    char day[3],month[3],year[5];
    int month_num;

    day[0]=str[0];
    day[1]=str[1];
    day[2]='\0';

    month[0]=str[3];
    month[1]=str[4];
    month[2]='\0';

    year[0]=str[6];
    year[1]=str[7];
    year[2]=str[8];
    year[3]=str[9];
    year[4]='\0';

    month_num=(month[0]-'0')*10+(month[1]-'0');

    printf("%s-",day);

    switch(month_num){
        case 1:printf("Jan");break;
        case 2:printf("Feb");break;
        case 3:printf("Mar");break;
        case 4:printf("Apr");break;
        case 5:printf("May");break;
        case 6:printf("jun");break;
        case 7:printf("Jul");break;
        case 8:printf("Aug");break;
        case 9:printf("Sep");break;
        case 10:printf("Oct");break;
        case 11:printf("Nov");break;
        case 12:printf("Dec");break;
        default :printf("Invalid");break;
    }
     
     printf("-%s\n",year);

     return 0;
}