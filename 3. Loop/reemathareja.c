
//Write a program to calculate the sum of first 10 numbers

// #include<stdio.h>
// int main()
// {
//     int i=0,sum=0;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }
//     printf("Sum of 10 numbers: %d\n",sum);
// }

//Write a program to printf 20 horizontal *
// #include<stdio.h>
// int main()
// {
//     int i=1,n=4;
//     while(i<=n){
//         printf("*");
//         i++;
//     }
// }

//Write a program to calculate sum from m to n
// #include<stdio.h>
// int main()
// {
//     int m,n,sum=0,i;
//     scanf("%d %d",&m,&n);
//     while(m<=n){
//         sum+=m;
//         m++;
//     }
//     printf("%d",sum);
// }

//Write a program to display the largest of 6 numbers using ternary
// #include<stdio.h>
// int main()
// {
//     int i=1,large=-111,num;
//     while(i<=6){
//         printf("Enter a number: \n");
//         scanf("%d",&num);
//         large=num>large?num:large;
//         i++;
//     }
//     printf("Largest number is: %d\n",large);
// }


//Write  a program to read the numbers until -1. count negative,positive and zeros
// #include<stdio.h>
// int main()
// {
//     int neg=0,pos=0,zero=0,i,num;
//     while(num!=-1){
//         printf("Enter any numbers: ");
//         scanf("%d",&num);
//         if(num>0){
//             pos++;
//         }
//         else if(num<0){
//             neg++;
//         }
//         else{
//             zero++;
//         }
//     }
//     printf("positives are %d\n",pos);
//     printf("negatives are %d\n",neg);
//     printf("Zeros are %d\n",zero);
// }

// #include<stdio.h>
// int main()
// {
//     int n,i=1,num,sum=0;
//     float avg=0;
//     printf("Enter how many numbers: ");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("Enter integers: ");
//         scanf("%d",&num);
//         sum+=num;
//         i++;
//     }
//     avg=(float)sum/n;
//     printf("Average is: %.2f\n",avg);
// }

///write a program to calculate average of 10 numbers
// #include<stdio.h>
// int main()
// {
//     int i=1,num,sum=0;
//     float avg=0;
//     do{
//         sum=sum+i;
//         i++;
//     }while(i<=10);
//     printf("Sum is: %d",sum);
// }

//Write a program to calculate square and cube of n integers
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     i=1;
//     do{
//         printf("\n | \t %d \t | %d \t | %d \t|",i,pow(i,2),pow(i,3));
//         i++;
//     }while(i<n);
// }

//write a program to list all the leap years from 1900 to 2100
// #include<stdio.h>
// int main()
// {
//     int m=1900,n=2100;
//     do{
//         if(m%4==0){
//             printf("%d is leap year\n",m);
//         }
//         else{
//             printf("%d is not leap year\n",m);
//         }
//         m++;
//     }while(m<=n);
// }

//Write a program to count lower upper and numbers
// #include<stdio.h>
// int main()
// {
//     int lower=0,upper=0,number=0;
//     char ch;
//     do{
//         printf("Enter any character: ");
//         scanf("%c",&ch);
//         if(ch>='A' && ch<='Z'){
//             upper++;
//         }
//         if(ch>='a' && ch<='z'){
//             lower++;
//         }
//         if(ch>='0' && ch<='9'){
//             number++;
//         }
//         fflush(stdin);
//     }while(ch!='*');
//     printf("%d upper\n",upper);
//     printf("%d lower\n",lower);
//     printf("%d numbers\n",number);
// }

//sum and mean of all positives negatives
// #include<stdio.h>
// int main()
// {
//     int pos=0,neg=0,sum_pos=0,sum_neg=0,num;
//     float mean_pos=0,mean_neg=0;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     do{
//         if(num>0){
//             sum_pos+=num;
//             pos++;
//         }
//         if(num<0){
//             sum_neg+=num;
//             neg++;
//         }
//         printf("Enter number: ");
//         scanf("%d",&num);
//     }while(num!=-1);
    
//     mean_pos=(float)sum_pos/pos;
//     mean_neg=(float)sum_neg/neg;
//     printf("Mean of positives: %.2f\n",mean_pos);
//     printf("Mean of negative : %.2f\n",mean_neg);

// }


//32 pattern
// #include<stdio.h>
// int main()
// {
//     int i=1,n=5;
//     for(;i<=n;i++){
//         printf("Pass %d- ",i);
//         for(int j=1;j<=n;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

//33 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//34 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//35 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }


//36 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }


//37 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5,k=0;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",k++);
//         }
//         printf("\n");
//     }
// }

//38 pattern
// #include<stdio.h>
// int main()
// {
//     char i,j;
//     for(i=65;i<=70;i++){
//         for(j=65;j<=i;j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
// }


//39 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,n=5;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=n;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//                 printf("%d",k);
//             }
//         printf("\n");
//         n--;
//     }
// }


// #include<stdio.h>
// #define N 5
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=N;i++){
//         for(k=N;k>=i;k--){
//             printf(" ");
//         }
//             for(j=1;j<=i;j++){
//             printf("%d",j);
//           }
//         printf("\n");
//     }
// }

//40 pattern
// #include<stdio.h>
// #define N 5
// int main()
// {
//     int i,j,k,l;
//     for(i=1;i<=N;i++){
//         for(k=N;k>=i;k--){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for(l=j-2;l>0;l--){
//             printf("%d",l);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// #define N 5
// int main()
// {
//     int i,j,k,l,counter=1,n=5;
//     for(i=1;i<=N;i++){
//         for(k=n;k>1;k--){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("* ",j);
//         }
//         printf("\n");
//         n--;
//     }
// }

//41 pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(k=5;k>1;k--){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }

//pattern 42
// #include<stdio.h>
// int main()
// {
//     int i,n,j;
//     printf("number for table and till how: ");
//     scanf("%d %d",&n,&j);
//     for(i=1;i<=j;i++){
//         printf("%d X %d= %d\n",i,n,(i*n));

//     }
// }

//43 
// #include<stdio.h>
// int main()
// {
//     int m,n;
//     printf("Enter starting and ending point: ");
//     scanf("%d %d",&m,&n);
//     for(int i=m;i<=n;i++){
//         printf("%d ",i);
//     }
// }

//44
// #include<stdio.h>
// int main()
// {
//     int m,n;
//     printf("Enter starting and ending point: ");
//     scanf("%d %d",&m,&n);
//     for(int i=m;i<=n;i++){
//         if(i%2==0){
//             printf("Even\n");
//         }
//         else{
//             printf("Odd\n");
//         }
//     }
// }

//45 write a program to calculate avg of n numbers
// #include<stdio.h>
// int main()
// {
//     int i,j,n,sum=0;
//     float avg=0;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum+=i;
//     }
//     avg=(float)sum/n;
//     printf("Average: %.2f\n",avg);
// }

//45 factorial
// #include<stdio.h>
// int main()
// {
//     int fac=1,i,n;
//     printf("factorial of: ");
//     scanf("%d",&n);
//     if(n==0){
//         fac=1;
//     }
//     else{
//         for(i=1;i<=n;i++){
//             fac*=i;
//         }
//     }
//     printf("factorial of %d is %d\n",n,fac);
// }

//47 prime number
// #include<stdio.h>
// int main()
// {
//     int i,n,count=0;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     for(i=2;i<n/2;i++){
//         if(n%i==0){
//             count++;
//             break;
//         }
//     }
//     if(count==0){
//         printf("prime\n");
//     }
//     else{
//         printf("Not Prime\n");
//     }
// }


//48 count primes
// #include<stdio.h>
// int main()
// {
//     int i,n,count=0,primes=0,non_primes=0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     do{
//         for(i=2;i<n/2;i++){
//             if(n%2==0){
//                 count=1;
//                 break;
//             }
//         }
//         if(count==0){
//             primes++;
//         }
//         else{
//             non_primes++;
//         }
//         count=0;
//         printf("Enter number: ");
//         scanf("%d",&n);       
//     }while(n!=-1);
//     printf("Number of primes: %d\n",primes);
//     printf("Number of nonPrimes: %d\n",non_primes);
// }


//49 power of n
// #include<stdio.h>
// int main()
// {
//     int i,num,n;
//     long int result=1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Till which power to calculate: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         result=result*num;
//     }
//     printf("\nPow of(%d,%d) is %d",num,n,result);
// }

//50 reverse a number
// #include<stdio.h>
// int main()
// {
//     int num,rev;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         rev=num%10;
//         printf("%d",rev);
//         num=num/10;
//     }
// }

// #include<stdio.h>  
//  int main()    
// {    
// int n, reverse=0, rem;    
// printf("Enter a number: ");    
//   scanf("%d", &n);    
//   while(n!=0)    
//   {    
//      rem=n%10;    
//      reverse=reverse*10+rem;    
//      n/=10;    
//   }    
//   printf("Reversed Number: %d",reverse);    
// return 0;  
// }   


// #include <stdio.h>
// int main()
// {
//   int n, r = 0;

//   printf("Enter a number to reverse\n");
//   scanf("%d", &n);

//   while (n != 0)
//   {
//     r = r * 10;
//     r = r + n%10;
//     n = n/10;
//   }

//   printf("Reverse of the number = %d\n", r);

//   return 0;
// }

//51 sum of digits
// #include<stdio.h>
// int main()
// {
//     int num,rev;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         rev=num%10;
//         printf("%d",rev);
//         num=num/10;
//     }
// }

// #include<stdio.h>  
// int main()    
// {    
//     int n, sum=0, rem;    
//     printf("Enter a number: ");    
//     scanf("%d", &n);    
//     while(n!=0)    
//     {    
//        rem=n%10;    
//        sum=sum+rem;    
//        n/=10;    
//     }    
//     printf("Reversed Number: %d",sum);    
//     return 0;  
// }  

//52 decimal to binary
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num,rem,binary=0,i=0;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         rem=num%2;
//         binary=binary+rem*(pow(10,i));
//         num=num/2;
//         i++;
//     }
//     printf("Binary is: %d",binary);
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     int bin = 0;
//     int rem, i = 1, step = 1;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     while (n != 0) {
//         rem = n % 2;
//         printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
//         n /= 2;
//         bin += rem * i;
//         i *= 10;
//     }
//     printf("Binary is: %d",bin);
// }


//53 Octal to decimal
// #include<stdio.h>
// int main()
// {
//     int num,oct=0,i=1,rem;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         rem=num%8;
//         oct=oct+rem*i;
//         num/=8;
//         i*=10;
//     }
//     printf("Octal value is: %d\n",oct);
// }


//54 decimal to hexadecimal

// #include <stdio.h>
// int main()
// {
//     int number,cnt,i;
//     char    hex[32];    /*bcoz it contains characters A to F*/
 
//     printf("Enter decimal number: ");
//     scanf("%d",&number);
 
     
//     cnt=0;              /*initialize index to zero*/
//     while(number>0)
//     {
//         switch(number%16)
//         {
//             case 10:
//                 hex[cnt]='A'; break;
//             case 11:
//                 hex[cnt]='B'; break;
//             case 12:
//                 hex[cnt]='C'; break;
//             case 13:
//                 hex[cnt]='D'; break;
//             case 14:
//                 hex[cnt]='E'; break;
//             case 15:
//                 hex[cnt]='F'; break;
//             default:
//                 hex[cnt]=(number%16)+0x30;  /*converted into char value*/
//         }
//         number=number/16;
//         cnt++;
//     }
 
//     /*print value in reverse order*/
//     printf("Hexadecimal value is: ");
//     for(i=(cnt-1); i>=0;i--)
//         printf("%c",hex[i]);
 
//     return 0;
// }

//55 Binary to decimal
// #include<stdio.h>
// int main()
// {
    // int deci_num=0,rem,binary,i=1;
    // printf("Enter binary number: ");
    // scanf("%d",&binary);
    // while(binary!=0){
    //     rem=binary%10;
    //     deci_num=deci_num+rem*i;
    //     binary=binary/10;
    //     i*=2;
    // }
    // printf("%d in decimal is: %d\n",binary,deci_num);
   
// }


//56 Octal to decimal
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int octal,decimal=0,i=0,rem;
//     printf("Enter octal number: ");
//     scanf("%o",&octal);
//     while(octal!=0){
//         rem=octal%10;
//         decimal=decimal+rem*pow(8,i);
//         octal/=10;
//         i++;
//         //i*=8;
//     }
//     printf("%o in decimal is: %d\n",octal,decimal);
// }

// #include <stdio.h>
// #include <math.h>
// /* This function converts the octal number "octalnum" to the
//  * decimal number and returns it.
//  */
// long octalToDecimal(int octalnum)
// {
//     int decimalnum = 0, temp = 0;

//     while(octalnum != 0)
//     {
//         decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
//         temp++;
//         octalnum = octalnum / 10;
//     }

//     return decimalnum;
// }
// int main()
// {
//     int octalnum;

//     printf("Enter an octal number: ");
//     scanf("%d", &octalnum);

//     printf("Equivalent decimal number is: %ld", octalToDecimal(octalnum));

//     return 0;
// }


//59 1+ 1/2 + 1/3+.....1/n
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     float a,sum=0;
//     printf("Till how: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         a=(float)1/i;
//         sum=sum+a;
//         printf("1/%d is %.2f\n",i,a);
//     }
//     printf("Sum of series is: %.2f\n",sum);
// }

//60 pow series
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n,i;
//     float a,sum=0;
//     printf("Till how: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         a=(float)1/pow(i,2);
//         sum=sum+a;
//     }
//     printf("Sum of series is: %.2f\n",sum);
// }




//67 investment over a period time
//my solution
// #include<stdio.h>
// int main()
// {
//     double initVal,futureVal,ROI,val;
//     int yrs,i=1;
//     printf("enter the investment value: ");
//     scanf("%lf",&initVal);
//     printf("enter the rate of interest: ");
//     scanf("%lf",&ROI);
//     printf("enter the number of years: ");
//     scanf("%d",&yrs);
    
//     printf("\nYear\t\tvalue\n");
//     while(i<=yrs){
//         val=initVal*ROI/100;
//         val+=initVal;
//         initVal=val;
//         printf("%d\t\t%.2lf\n",i,initVal);
//         i++;
//     }
// }




//book solution //this code is not working
// #include<stdio.h>
// int main()
// {
//     double initVal,futureVal,ROI,val;
//     int yrs,i;
//     printf("enter the investment value: ");
//     scanf("%lf",&initVal);
//     printf("enter the rate of interest: ");
//     scanf("%lf",&ROI);
//     printf("enter the number of years: ");
//     scanf("%d",&yrs);


//     printf("\nYears\t\tvalue\n");
//     for(i=1;i<=yrs;i++){
//         futureVal=futureVal*(1+ROI/100);
//         printf("\n%d\t\t%lf\n",i,futureVal);
//     }

// }


//################  String ########################

// #include<stdio.h>
// int main()
// {
//     char str[]="Hello";
//     printf("%s",str);
//     char str2[]={'h','e','l','l','o','\0'};
//     printf("\n%s",str2);
    

// }

// #include<stdio.h>
// int main()
// {
//     char str[100];
//     char str2[100];
//     printf("Enter a string: ");
//     scanf("%s ",str);
//     printf("%s",str);
//     printf("Enter a string: ");
//     scanf("%s",str2);
//     printf("%s",str2);

    

// }

 //scanf(), gets(), getchar(), getch(), getche()
 //printf(), puts(), putchar()
// #include<stdio.h>
// int main()
// {
//     char str[]="Hello";
//     printf("\n%s",str);
//     printf("\n%s",&str);
//     printf("\n%s",&str[2]);
// }

// #include<stdio.h>
// int main()
// {
//     char str[]="Introduction to C";
//     printf("|%s|\n",str);
//     printf("|%20s|\n",str);
//     printf("|%-20s|\n",str);
//     printf("|%.4s|\n",str);
//     printf("|%20.4s|\n",str);
//     printf("|%-20.4s|\n",str);
    
// }

//pattern
// #include<stdio.h>
// int main()
// {
//     char str[]="Hello";
//     int i = 3, j = 4;
//     printf("|%*.*s|\n", i, j, str);
//     printf("|%-3.4s|\n", str);
// }

// #include<stdio.h>
// int main()
// {
//     int i,w,p;
//     char str[]="HELLO";
//     printf("\n");
//     for(i=0;i<5;i++){
//         p=i+1;
//         printf("\n|%5.*s|",p,str);
//     }

//     for(i=4;i>=0;i--){
//         p=i+1;
//         printf("\n|%5.*s|",p,str);
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[100],s2[100]="Hello";
//     sprintf(s1,"output= %s",s2);
//     printf("%s",s1);
//     printf("\n\n");

//     char buf[100];
//     int num=10;
//     int total_Char=sprintf(buf,"num= %d",num);
//     printf("buf: %s and total character= %d",buf,total_Char);
// }


// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter string: ");
//     //scanf("%[^aeiou]",str);
//     //scanf("%[^aeiou]",str);
//     //scanf("%[A-Z]",str);
//     scanf("%10[aeiou]",str);
//     printf("The string is: %s",str);
// }

// #include<stdio.h>
// int sumOfEven(){
//     int i,sum=0;
//     for(i=0;i<=20;i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }
//     return sum;
// }
// int main()
// {
//     int sum;
//     sum=sumOfEven();
//     printf("Sum of even numbers from 0 to 20 is: %d",sum);
// }

// #include<stdio.h>
// void check(char ch){
//      if(ch<=9){
//         printf("true\n");
//     }
//     else{
//         printf("false\n");
//     }

// }
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);

//     check(ch);
// }

// #include<stdio.h>
// int main()
// {
//     char str[]="HI MY NAME IS JONI";
//     int i=0;
//     while(str[i]!='\0'){
//         i+=1;
//     }
//     printf("%d",i);
// }
// #include<stdio.h>
// int main()
// {
//     char str[100],upper_str[100];
//     int i=0,j=0;
//     printf("Enter a string: ");
//     gets(str);
//     while(str[i]!='\0'){
//         if(str[i]>='a' && str[i]<='z'){
//             upper_str[j]=str[i]-32;
//         }else{
//             upper_str[i]=str[i];
//         }
//         i++;
//         j++;
//     }
//     upper_str[j]='\0';
//     printf("The string in upper case is: ");
//     puts(upper_str);
// }


// #include<stdio.h>
// int main()
// {
//     char str1[100],str2[100];
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Enter a string: ");
//     gets(str2);
//     int i=0,j=0;
//     char str3[100];
//     while(str1[i]!='\0'){
//         str3[j]=str1[i];
//         i++;
//         j++;
//     }
//     i=0;
//     while(str2[i]!='\0'){
//         str3[j]=str2[i];
//         i++;
//         j++;
//     }
//     str3[j]='\0';
//     puts(str3);


// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char dest[100],source[100];
//    int i=0,j=0;
//    printf("Enter the source string: ");
//    gets(source);
//    printf("Enter the destination string: ");
//    gets(dest);
//    while(dest[i]!='\0'){
//         i++;
//    }

//    while(source[j]!='\0'){
//         dest[i]=source[j];
//         i++;
//         j++;
//    }

//    dest[i]='\0';
//    printf("\nAfter appending the string is: ");
//    puts(dest);

// }




















//##################### Array ########################
//array insertion

//insert a new elements to the end of the array
// #include<stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9};
//     int upper_bound=8;
//     upper_bound+=1;
//     arr[upper_bound]=10;
//     for(int i=0;i<=upper_bound;i++){
//         printf("arr[%d]= %d\n",i,arr[i]);
//     }
// }

//insert an element in the ascending order

// #include<stdio.h>
// int main()
// {
//     int arr[15]={12,23,34,56,67,78,89,90,100};
//     int i,insert=75,pos;

//     for(i=1;i<9;i++){
//         if(insert<arr[i] && insert>arr[i-1]){
//             pos=i;
//             for(int j=8;j>=pos;j--){
//                 arr[j+1]=arr[j];
//             }
//         }
//     }
//     arr[pos]=insert;

//     for(i=0;i<10;i++){
//         printf("arr[%d]= %d\n",i,arr[i]);
//     }
// }