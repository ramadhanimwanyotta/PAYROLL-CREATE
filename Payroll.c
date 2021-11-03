#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    printf("\t------------INDUSTRY BABY COMPANY---------------\n\n");
      printf("\t^^^^^^^^^A-Pay Roll System^^^^^^^^^\n\n");

    char fname[50];
    char lname[20];

    printf("Enter the employee's First Name:\n");
    scanf("%s",&fname[50]);

    printf("Enter the employee's Last Name:\n");
    scanf("%s",&lname[20]);

    return 1;
}
int add_hours()
{
printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");


    int hours;
    int mo, tu, we, th, fr;


    printf("Enter daily hours for Monday:\n");
    scanf("%d",&mo);

    printf("Enter daily hours for Tuesday:\n");
    scanf("%d",&tu);

    printf("Enter daily hours for Wednesday:\n");
    scanf("%d",&we);

    printf("Enter daily hours for Thursday:\n");
    scanf("%d",&th);

    printf("Enter daily hours for Friday:\n");
    scanf("%d",&fr);
    hours=mo+tu+we+th+fr;
    printf("\nThe weekly hours are:%d\n",hours);

    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    return 2;

}
int salary_select()
{
    int education_tax;
    int NIS_tax;
    int NHT_tax;
    int medical_dental;

    int hours;
    int salary_deduct=0;salary_deduct>20;salary_deduct++;
    int normal_pay;
    int over_time; /*Overtime pay increases the pay rate from $20 to $25*/
    int bonus=0;bonus>1;bonus++; /* Adds $3000 to workers going over 70 hours*/

    normal_pay=hours*20;
    over_time=(hours-60)*40+normal_pay;
    bonus=over_time+3000;
    salary_deduct=hours*20-hours*10;

    if(hours<=40)
    printf("\nThe employee is slacking and salary will be deducted!\nThe gross pay is:$%d dollars\n",salary_deduct);
    else if(hours<=60)
    printf("\nThe employee will get normal pay\nThe gross pay is:$%d dollars\n",normal_pay);
    else if(hours<=70)
    printf("\nThe employee is working over time and will get overtime pay\nThe gross pay is:$%d dollars\n",over_time);
    else
    printf("\nTHE EMPLOYEE IS WORKING EXTREMELY HARD AND WILL GET A BONUS ON HIS PAY!\nThe gross pay is:$%d\n",bonus);

    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    return 3;

}
int tax()
{
    int normal_pay;
    int over_time; /*Overtime pay increases the pay rate from $20 to $25*/
    int bonus=0;bonus>1;bonus++; /* Adds $3000 to workers going over 70 hours*/
    int salary_deduct=0;salary_deduct>20;salary_deduct++;
    int hours;
    int education_tax;
    int NIS_tax;
    int NHT_tax;
    int medical_dental;

    education_tax=hours*20*.06;
    NHT_tax=hours*20*.1;
    medical_dental=hours*20*.05;
    NIS_tax=hours*20*.05;

    printf("Education tax of %6:$-%d\n",education_tax);

    printf("NHT tax of %10:$-%d\n",NHT_tax);

    printf("NIS tax of %5:$-%d\n",NIS_tax);

    printf("Medical/dental of %5:$-%d\n",medical_dental);

    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    return 4;

}
int ntpay()
{
    int normal_pay;
    int over_time; /*Overtime pay increases the pay rate from $20 to $25*/
    int bonus=0;bonus>1;bonus++; /* Adds $3000 to workers going over 70 hours*/
    int education_tax;
    int NIS_tax;
    int NHT_tax;
    int medical_dental;
    int salary_deduct=0;salary_deduct>20;salary_deduct++;
    int hours;
    int netpay;
    int netpay1;
    int netpay2;
    int netpay3;

    netpay=salary_deduct-(NHT_tax+education_tax+NIS_tax+medical_dental);
    netpay1=normal_pay-(NHT_tax+education_tax+NIS_tax+medical_dental);
    netpay2=over_time-(NHT_tax+education_tax+NIS_tax+medical_dental);
    netpay3=bonus-(NHT_tax+education_tax+NIS_tax+medical_dental);

   if(hours<=40)
    printf("The net pay is:$%d\n",netpay);
    else if(hours<=60)
    printf("The net pay is:$%d\n",netpay1);
    else if(hours<=70)
    printf("The net pay is:$%d\n",netpay2);
    else
    printf("The net pay is:$%d\n",netpay3);
printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

return 5;
}