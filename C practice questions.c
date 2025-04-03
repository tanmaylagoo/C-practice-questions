//#include<stdio.h>
/*int main() {
printf("Hello world");
}*/
#include<stdio.h>
/*int main () {
/*int i;
printf("Enter a number:");
scanf("%d",&i);
printf("The number is %d",i);

int area=l*b;
printf("The area is %d\n",area);*/
/*int l;
int b;
printf("Enter the length and the breadth:\n");
scanf("%d %d",&l,&b);
/*scanf("%d",&l);
scanf("%d",&b);
alternate method
*/
/*float r,h;
printf("Enter the radius and height of the circle respectively:\n");
scanf("%f %f",&r,&h);
printf("The area of the circle is:%.2f\n",3.14*r*r);
printf("The volume of the cylinder of radius %.2f and height %.2f is:%.2f",r,h,3.14*r*r*h);*/
/*float c;
printf("Enter the temperature in degree celcius:");
scanf("%f",&c);
float f=((c*(9.0/5.0))+32.0);
printf("The temperature in degree celcius and degree fahrenheit is:%.1f and %.1f",c,f);*/
/*float p,r;
int y;
printf("Enter the principal amount, rate of interest, and number of years\n");
scanf("%f %f %d",&p,&r,&y);
printf("The final value of the invested amount %.1f at a rate of %.1f after %d years is:%.1f",p,r,y,(p*r*y/100));*/
/*int a=973;
int b=97;
printf("The remainder when %d is divided by %d is:%d",a,b,(a%b));*/
/*int marks;
printf("Enter your marks:");
scanf("%d",&marks);

if(marks>=90){
    printf("A grade");

}
if (marks<90 && marks>=80){
    printf("B grade");
}
else{
    printf("You are %d years old and so you can vote",age);
}*/
/*int a;
printf("Enter your age:");
scanf("%d",&a);
int b=18;
//condition ? expression if condition is true : expression if condition is false
a>=b ? printf("You are an adult"): printf("You are a child");*/
/*switch (condition){
case c1:
break;
case c2:
break;
case c3:
break;
default
break;
}*/
/*int a=11;
switch(a){
case 11:
    printf("I am 11");
    break;
case 12:
    printf("I am 12");
    break;
default:
    printf("I am not 11 nor 12");
    break;



}*/
/*int m1,m2,m3;
printf("Enter the marks of subject 1,2 and 3 of the student respectively:");
scanf("%d %d %d",&m1,&m2,&m3);
float avg=((m1+m2+m3)/3);
if(m1<=33|| m2<=33 || m3<=33){
    printf("You have failed because you failed to score more than 33 marks in a subject/s");
}
else if(avg<=40){
    printf("You have failed because your average of 3 subjects does not surpass 40");
}
else{
    printf("You have passed");
}

*/
/*float an_in,tax;
printf("Enter your anual income:");
scanf("%f",&an_in);
if (an_in<=250000){
    tax=0;
}
else if(an_in>250000 && an_in<=500000){
    tax=0.05*(an_in-250000);
}
else if(an_in>500000 && an_in<=1000000){
    tax= (0.05*(500000 - 250000) + 0.2*(an_in- 500000));
}
else{
    tax=(0.05*(500000-250000)+0.2*(1000000- 500000)+0.3*(an_in - 1000000));
}
printf("The tax you have to pay annually is %.2f \n",tax);
printf("Your annual income post tax deductions is %.2f \n",(an_in-tax));*/
/*int yr;
printf("Enter the year you wish to check:");
scanf("%d",&yr);
if (yr%4==0 && yr%100!=0 || yr%400==0){
    printf("The year %d is a leap year",yr);
}
else{
    printf("The year %d is not a leap year",yr);
}*/
/*char ch;
printf("Enter a character:");
scanf("%c",&ch);
printf("The Ascii value of the character entered is:%d\n",ch);
if(ch>=97 && ch<=122){
    printf("The character %c is lower case\n",ch);
}
else if(ch>=65 && ch<=90){
    printf("The character %c is upper case\n",ch);
}
else{
    printf("Invalid character entered");
}*/
/*int i=1;
int sum=0;
while(i<=10){
  sum+=i;
  i++;

}
printf("%d",sum);*/
/*int sum=0;
for(int i=1;i<=10;i++){
    sum+=i;
}
printf("%d",sum);*/
/*int sum=0;
int i=1;
do{
        sum+=(8*i);
i++;

}while(i<=10);
printf("%d",sum);
}*/
/*int sum=0;
for (int i=1;i<=10;i++){
sum +=(8*i);
}
printf("%d",sum);
}*/
/*int product=1;
int n;
printf("Enter the number whose factorial you want to calculate:");
scanf("%d",&n);
for(int i=1; i<=n;i++){
        product*=i;
}
int i=1;
while(i<=n){
    product*=i;
    i++;
}
do{
        product*=i;
i++;

}while(i<n);
printf("The factorial of the number is %d",product);*/
/*int n=7;
int not_prime=0;
if(n==0 || n==1){
    not_prime=1;
}
else{
    for(int i=2; i<=n;i++){
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
    }
}
if (not_prime){
    printf("%d is not prime number\n",n);
}
else{
    printf("%d is a prime number\n",n);
}
}*/
/*void goodmorning() {
printf("good morning\n");
}
int sum(int a, int b) {
return a+b;
}
int diff(int a, int b){
return a-b;
}
int main () {
goodmorning();
int a1=10, a2=100;

int b=sum(a1,a2);
printf("%d\n",b);
int c=diff(a1,a2);
printf("%d\n",c);
}*/
/*int change(int a);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22;
    change(b); // The value of b remains 22
    printf("b is %d", b);

    return 0;
}*/
/*int factorial(int z){
int f;
if(z==0 || z==1){
    return 1;
}
else{
    f=z*factorial(z-1);
    return f;
}
}
int main (){
int fact=factorial(5);
printf("%d",fact);
}*/
/*#include <math.h>
int main(){
int a=6;
printf("%f",pow(a,2));
}*/
/*float avg(float a,float b, float c){
return (a+b+c)/3.0;
}
int main () {
int c=avg(10,10,10);
printf("%d",c);
}*/
/*float c2f(float c){
return (c*(9.0/5.0))+32.0;
}
int main(){
float f=c2f(100.0);
printf("%.1f",f);
}*/
/*int fibonacci(int n){
if (n==1 || n==2){
    return (n-1);
}
else{
    return fibonacci(n-1)+fibonacci(n-2);
}
}
int main () {
int n=7;
printf("%d",fibonacci(n));
}*/
/*int sum(int n){
if(n==1){
    return 1;
}
else {
return sum(n-1)+n;
}
}
int main (){
printf("%d",sum(5));
}*/
/*int main(){
int n;
printf("Enter the number of rows you want:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<(2*i+1);j++){

        printf("*");

    }
    printf("\n");
}
}*/
/*#include <stdio.h>
int main (){
int i = 8;
int *j;
j = &i;
int** k;
k=&j;
printf("add i= %u\n",&i);
printf("add i= %u\n",j);
printf("add j= %u\n",&j);
printf("add j= %u\n",k);
printf("value i= %d\n",i);
printf("value i= %d\n",*(&i));
printf("value i= %d\n",*j);
}*/
/*void swap(int* x, int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main() {
int a=4,b=3;
printf("The numbers before swapping are %d and %d\n",a,b);
swap(&a,&b);
printf("The numbers after swapping are %d and %d",a,b);
}*/
/*int main () {
int a=10;
int* b;
b=&a;
printf("The value of a is %d\n",(*b));
printf("The address of a is %u\n",b);
}*/
/*int returning_5(int* ptr) {
printf("The value of ptr is %d\n",ptr);
printf("The value at ptr is %d\n",*ptr);
return 5;
}
int main(){
int i=2;
int* ptr= &i;
printf("The address of i is %u\n",&i);
returning_5(i);*/
/*void change_to_10times(int* a){
*a= *a * 10;
}
//the above function is a call by reference function
int main() {
int a=100;
printf("The value of a is (before function) %d\n",a);
change_to_10times(&a);
printf("The value of a is %d\n",a);
}*/
/*int sum(int*a, int*b){
return *a+*b;
}
void average(float*a, float*b, float* c){
float avg=(*a+ *b+ *c)/3.0;
float* ptr2=&avg;
printf("The value of average is %f\n",avg);
printf("The address of the average is %p\n",ptr2);
}
int main () {
int a=10;
int b=10;
int c=10;
int d=sum(&a,&b);
int* ptr1=&d;

printf("%d\n",d);
printf("The address of the sum is %p\n",&d);
float a1=10;
float b1=10;
float c1=10;
average(&a1,&b1,&c1);

}

/*#include <stdio.h>


int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

float* average(int a, int b){
    float avg =  (a+b)/2.0;
    float * ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr;
}

int main(){
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2 );

    return 0;
}*/
/*#include <stdio.h>

void change_to_thirty_times(int a){
    a = a * 10;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_thirty_times(x);
    printf("The value of x is %d\n", x);

    return 0;
}*/
/*int main() {
int marks[5];
printf("Enter the marks of 5 students:\n");
for(int i=0; i<5;i++){
    scanf("%d",&marks[i]);
}
for(int i=0; i<5;i++){
    printf("The value of marks at index %d is %d\n",i,marks[i]);
}
return 0;
}*/
/*#include <stdio.h>

int main(){
    int cgpa[] = {9, 8, 8};
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}*/
/*#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}*/
/*int main() {
int marks[5];
printf("Enter the marks of 5 students:\n");
for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);

}
for (int i=0;i<5;i++){
    printf("The address of marks at index %d is %u\n",i,&marks[i]);
}

}*/
/*int main() {
int marks[]={100,90,88,91};
int* ptr=marks;
//same as int* ptr=&marks[0];
for (int i=0;i<=4;i++){
printf("The address of marks at index %d is %u\n",i,&marks[i]);
}*/
/*int main () {
int i=32;
int*a =&i;
printf("%u\n",a);
a++;
printf("%u\n",a);
char a1='A';
char*b=&a1;
printf("%u\n",b);
b++;
printf("%u\n",b);
float i1 = 1.7;
float *c = &i1; // now a = 87994
printf("%u\n",c);
c++;
printf("%u\n",c);
}*/
/*int main() {
int arr[3][2];
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("Enter the element at arr[%d][%d]\n",i,j);
        scanf("%d",&arr[i][j]);
    }
}
for (int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}*/
/*#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=a;
    printf("The value at address %u is %d",ptr+2,*(ptr+2));

}*/
/*#include <stdio.h>

int main() {
    int S[] = {10, 20, 30, 40, 50, 60};  // A sample 1-D array

    printf("S[3] = %d\n", S[3]);       // Accessing directly
    printf("*(S + 3) = %d\n", *(S + 3)); // Accessing using pointer arithmetic

    return 0;
}*/
/*int main() {
int n;
printf("Enter the number whose table you want:");
scanf("%d",&n);

int arr[10];
for (int i=0;i<10;i++){
arr[i]=n*(i+1);
}
for (int i=0;i<10;i++){
    printf("%d X %d = %d\n",n,i+1,arr[i]);
}
}*/
/*void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
}
void reverse(int arr[],int n){
int temp;
for(int i=0;i<n/2;i++){
    temp=arr[i];
        arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
}
int main(){
    int arr[]={1,2,3,4,5,6};
    printarray(arr,6);
   reverse(arr,6);
printarray(arr,6);
}
/*#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
   /* for  i from 0 to n/2
    arr[i] arr[n-i-1]

   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }

}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }


}*/
/*#include <stdio.h>

int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {sa
                printf("%u ", &arr[i][j][k]);
            }

        }

    }

    return 0;
}*/
/*int main(){
char s1[]={'T','A','N','N','Y','\0'};
char s2[]="TANNY";
char st[50];
scanf("%s",st);
printf("%s\n",st);
printf("%s\n",s1);
printf("%s\n",s2);
}*/
//int main (){
/*char st[]="abc";
for(int i=0;i<3;i++){
  printf("%c\n",st[i]);
}*/
//char st[]="tanny";
/*printf("Enter a string:");
gets(st);*/

//puts(st);
//}
/*int main() {
char str[6];
for(int i=0;i<6;i++){
    scanf("%c",&str[i]);
}
str[5]='\0';
printf("%s",str);
}*/
/*#include <stdio.h>

int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  // Loop until null terminator
        i++;
    }
    return i;  // Return length of string
}

int main() {
    char str[] = "HarryBhai";
    printf("%d", my_strlen(str));  // Call function and print length
    return 0;
}*/
/*#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    return 0;
}*/
/*int sumdigits(int num){
int sum=0;
while(num!=0){
sum+=num%10;
num /=10;
}
return sum;
}
int main () {
int n;
printf("Enter the number:");
scanf("%d",&n);
int d=sumdigits(n);
printf("The sum of digits in %d is %d",n,d);

}*/
/*int main () {
char str[100];
int sum=0;
printf("Enter a string:\n");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\0';i++){
sum+=str[i];
}
printf("The sum is %d",sum);
}*/
/*int main() {
float user_score,max_score=1000.00;
printf("Enter the user score:\n");
scanf("%f",&user_score);
printf("The user score of %.1f is %.2f percentage of the total score",user_score,((user_score/max_score)*100.00));
}*/
/*int main () {
printf("Size of char %lu bytes\n",sizeof(char));
printf("Size of int %lu bytes\n",sizeof(int));
printf("Size of short int %lu bytes\n",sizeof(short int));
printf("Size of long int %lu bytes\n",sizeof(long int));
printf("Size of float %lu bytes\n",sizeof(float));
printf("Size of double %lu bytes\n",sizeof(double));
printf("Size of long double %lu bytes\n",sizeof(long double));
}*/
/*int swapnum(int* a,int* b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main() {
int a=10, b=11;
printf("%d and %d\n",a,b);
swapnum(&a,&b);
printf("%d and %d\n",a,b);

}*/
/*int main() {
char c1,c2;
printf("Enter 2 characters:\n");
scanf(" %c %c",&c1,&c2);
int sum= (int)c1+(int)c2;
char result=(char) sum ;
 if (sum >= 32 && sum <= 126) {  // Printable ASCII range
        printf("Character representation of sum: %c\n", result);
    } else {
        printf("Sum is outside printable ASCII range.\n");
    }
}*/
/*int fibonnaci(int n){
if (n == 0) return 0;
    if (n == 1) return 1;
else{
    return fibonnaci(n-1)+fibonnaci(n-2);
}
}
int main() {
int n;
printf("Enter the position in the fibonnaci series:\n");
scanf("%d",&n);


//0,1,1,2,3,4
for(int i=0;i<=n;i++){
printf("fibbonaci[%d]=%d\n",i,fibonnaci(i));
}
}*/
  // Prime number check
/*int main ()
{
int n=7;

int is_prime=1;
 if(n<2){
    is_prime=0;
 }
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        is_prime=0;
    }
}
if (is_prime){
    printf("Is prime\n");
}
}*/
/*#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    do {
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("%.2f deposited successfully!\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("%.2f withdrawn successfully!\n", amount);
                } else {
                    printf("Invalid or insufficient funds!\n");
                }
                break;
            case 4:
                printf("Exiting ATM...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count++;
        num /= 10;
    }

    printf("Number of digits: %d\n", count);
    return 0;
}*/
/*void sortarray(int arr[],int n){
int temp;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
int main(){
int n;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
sortarray(arr,n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}*/
/*#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}*/

/*int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    char names[n][50];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", &names[i]);
    }

    sortNames(names, n);

    printf("Sorted Names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}*/
/*int countduplicates(int arr[],int n){
int count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            printf("The duplicate element is:%d\n",arr[i]);
            break;
        }
    }
}
return count;
}
int main () {
int n,d;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
d=countduplicates(arr,n);
printf("The number of duplicate elements is:%d\n",d);
}*/
/*#include <stdio.h>
#include <string.h>

void reverseSubstring(char str[], int n1, int n2) {
    while (n1 < n2) {
        char temp = str[n1];
        str[n1] = str[n2];
        str[n2] = temp;
        n1++;
        n2--;
    }
}

int main() {
    char str[100];
    int n1, n2;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter indices (n1, n2): ");
    scanf("%d %d", &n1, &n2);

    reverseSubstring(str, n1, n2);

    printf("Modified string: %s\n", str);
    return 0;
}
*/
/*#include <stdio.h>

// Define a structure for complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

// Function to add two complex numbers using pointers
void addComplexPtr(const Complex *a, const Complex *b, Complex *result) {
    result->real = a->real + b->real;
    result->imag = a->imag + b->imag;
}

int main() {
    Complex num1 = {3.0, 4.0};
    Complex num2 = {1.5, 2.5};
    Complex sum;

    // Call function using pointers
    addComplexPtr(&num1, &num2, &sum);

    printf("Sum (using pointers): %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}*/
/*#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

int main() {
    Complex numbers[3] = { {1.0, 2.0}, {3.0, 4.0}, {5.0, 6.0} };

    for (int i = 0; i < 3; i++) {
        printf("Complex Number %d: %.2f + %.2fi\n", i+1, numbers[i].real, numbers[i].imag);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

void sortemployeenames(struct employee emp[], int n) {
    struct employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {  // Corrected
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

int main() {
    struct employee emp[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter ID, Name, and Salary of Employee %d: ", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);  // Corrected
    }

    sortemployeenames(emp, 5);  // Corrected function call

    printf("\nSorted Employee List:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <string.h>

// Recursive function to check if a string is a palindrome
int isPalindrome(char str[], int start, int end) {
    if (start >= end) return 1;  // Base case
    if (str[start] != str[end]) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}*/
#include <stdio.h>

// Function to add two matrices
/*void addMatrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = a[i][j] + b[i][j];
}

// Function to calculate diagonal sum
int diagonalSum(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += matrix[i][i];
    return sum;
}

int main() {
    int a[3][3], b[3][3], result[3][3];

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    addMatrices(a, b, result);

    printf("\nMatrix Addition Result:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    printf("\nDiagonal Sum of First Matrix: %d\n", diagonalSum(a));

}*/
/*#include <stdio.h>

int main() {
     // Example array
    int sum = 0;
int n;
int arr[n];
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter the element of array:\n");
    scanf("%d",&arr[i]);
}

    // Loop to calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the result
    printf("Sum of array elements: %d\n", sum);
if(sum%2==0){
    printf("NO\n");
}
else{
    printf("YES\n");
}
}*/
/*void sortname(char names[][50],int n){
char temp[50];
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(strcmp(names[i],names[j])>0){
            strcpy(temp,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],temp);
        }
    }
}
}
int main() {
int n;
printf("Enter the number of students:\n");
scanf("%d",&n);
char names[n][50];
for(int i=0;i<n;i++){
    printf("Enter the name of student %d\n",i+1);
    scanf("%s",&names[i]);
}
sortname(names,n);
for(int i=0;i<n;i++){
    printf("%d %s\n",i+1,names[i]);
}
}*/
/*#include <stdio.h>

int main()
{
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>

#define SALESMEN 5
#define PRODUCTS 5

#include <stdio.h>

#define SALESMEN 5
#define PRODUCTS 5

int main() {
    int sales[SALESMEN][PRODUCTS], totalSalesBySalesman[SALESMEN] = {0}, totalSalesByProduct[PRODUCTS] = {0};

    // Input sales data
    printf("Enter sales data:\n");
    for (int i = 0; i < SALESMEN; i++) {
        for (int j = 0; j < PRODUCTS; j++) {
            scanf("%d", &sales[i][j]);
            totalSalesBySalesman[i] += sales[i][j];
            totalSalesByProduct[j] += sales[i][j];
        }
    }

    // Display total sales per salesman
    printf("\nTotal sales by each salesman:\n");
    for (int i = 0; i < SALESMEN; i++) {
        printf("Salesman %d: %d\n", i + 1, totalSalesBySalesman[i]);
    }

    // Display total sales per product
    printf("\nTotal sales of each product:\n");
    for (int j = 0; j < PRODUCTS; j++) {
        printf("Product %d: %d\n", j + 1, totalSalesByProduct[j]);
    }

    return 0;
}*/
/*int main () {
int arr[5][5];
 int totalSalesBySalesman[5] = {0}, totalSalesByProduct[5] = {0};
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter salesmen %d and sales of product %d\n",i+1,j+1);
            scanf("%d", &arr[i][j]);
            totalSalesBySalesman[i] += arr[i][j];  // Row-wise total
            totalSalesByProduct[j] += arr[i][j];
        }
    }
for(int i=0; i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",arr[i][j]);
    }
printf("\n");
}
 printf("\nTotal sales by each salesman:\n");
    for (int i = 0; i < 5; i++) {
        printf("Salesman %d: %d\n", i + 1, totalSalesBySalesman[i]);
    }

    // Display total sales of each product
    printf("\nTotal sales of each product:\n");
    for (int j = 0; j < 5; j++) {
        printf("Product %d: %d\n", j + 1, totalSalesByProduct[j]);
    }
}*/
/*int findktheven(int arr[],int k,int n){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
    count++
    if(count==k){
        return arr[i];
    }
}
}
int main() {
int n;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
int arr[n];
int k;
printf("Enter the value of k:");
scanf("%d",&k);
for(int i=0;i<n;i++){
    printf("Enter the elements of the array:");
    scanf("%d",&arr[i]);
}
findktheven(arr[n],k);
}*/
/*#include <stdio.h>

int findKthEven(int arr[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if number is even
            count++;
            if (count == k) {
                return arr[i]; // Return the k-th even number
            }
        }
    }

    return -1; // Return -1 if there are not enough even numbers
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = findKthEven(arr, n, k);

    if (result == -1) {
        printf("There are less than %d even numbers in the array.\n", k);
    } else {
        printf("The %d-th even number is: %d\n", k, result);
    }

    return 0;
}*/
/*#include <stdio.h>
int findmax(int arr[],int n){
int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }

}
return max;
}
int findmin(int arr[],int n){
int min=arr[0];
for(int i=0;i<n;i++){
if(arr[i]<min){
    min=arr[i];
}
}
return min;
}

int main() {
int n;
printf("Enter the number of elements:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter the element at %d in the array:",i+1);
    scanf("%d",&arr[i]);
}
int result1=findmax(arr,n);
int result2=findmin(arr,n);
if(n!=0){
printf("Maximum and minimum number is %d and %d respectively",result1,result2);
}
else{
    printf("%d",-1);
}
}*/
/*#include<string.h>
struct Appliance{
char deviceID[20];
char deviceType[30];
int warranty;
int price;
char model[50];
};
void sortbyprice(struct Appliance appliances[],int n){
struct Appliance temp;
for(int i=0;i<n;i++){
    for(int j=0;i<n-i-1;j++){
        if (appliance[j].price>appliance[j+1].price){
            temp=appliance[j];
            appliance[j]=appliance[j+1];
            appliance[j+1]=temp;
        }
    }
}
}
int main() {
    int n;

    // Take input for the number of appliances
    printf("Enter number of appliances: ");
    scanf("%d", &n);

    struct Appliance appliances[n]; // Array to store appliances

    // Collect input from the user
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Appliance %d:\n", i + 1);
        printf("Enter Device Name: ");
        scanf(" %[^\n]s", appliances[i].deviceType);
        printf("Enter Device ID: ");
        scanf(" %s", appliances[i].deviceID);
        printf("Enter warranty in years: ");
        scanf("%d", &appliances[i].warranty);
        printf("Enter Price: ");
        scanf("%d", &appliances[i].price);
        printf("Enter Model: ");
        scanf(" %[^\n]s", appliances[i].model);
    }

    // Sort appliances by price
    sortByPrice(appliances, n);

    // Display sorted list
    displayAppliances(appliances, n);

    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
struct Stock{
char stock_id[20];
int quantity;
int price;
char stock_name[50];
};
void sortedbyquantity(struct Stock stocks[],int n){
struct Stock temp;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(stocks[j].quantity>stocks[j+1].quantity){
            temp=stocks[j];
            stocks[j]=stocks[j+1];
            stocks[j+1]=temp;
        }
    }
}
}
int main() {
int n;
struct Stock stocks[n];
printf("Enter the number of stocks:\n");
scanf("%d",&n);void displayStocks(struct Stock stocks[], int n) {
    printf("\nStocks Sorted by Quantity (Descending):\n");
    printf("--------------------------------------------\n");
    printf("ID            Name                 Price     Qty\n");
    printf("--------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-12s %-20s %-8.2f %d\n",
               stocks[i].stock_id, stocks[i].stock_name,
               stocks[i].price, stocks[i].quantity);
    }
    printf("--------------------------------------------\n");
}
for(int i=0;i<n;i++){
printf("Enter the details of the stock\n");
printf("Enter stock id:\n");
scanf("%s",stocks[i].stock_id);
printf("Enter the stock quantity:\n");
scanf("%d",stocks[i].quantity);
printf("Enter the stock price:\n");
scanf("%d",stocks[i].price);
printf("Enter the stock name:\n");
scanf("%s",stocks[i].name);
}
sortedbyquantity(stocks,n);
}*/
/*#include<stdio.h>
int main() {
int amt;
printf("Enter the amount:\n");
scanf("%d",&amt);
int hun=amt/100;
int remainder_hun=amt%100;
int fif=remainder_hun/50;
int remainder_fif=remainder_hun%50;
int ten=remainder_fif/10;
printf("The number of 100 notes is %d 50 notes is %d and 10 notes is %d",hun,fif,ten);
}*/




