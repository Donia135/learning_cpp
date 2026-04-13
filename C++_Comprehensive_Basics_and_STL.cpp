#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<array> 
#include <iterator> 
using namespace std; 

/* برامج بسيطة في c++ 
الارشيف الشخصي 
*/

/* البرنامج الاول: تبديل قيمة a, b
  */

void Program_1(){
int a=2;
int b=3;

int temp=a; 
a=b; 
b=temp; 

cout <<"a: " <<a<<endl; 
cout <<"b: " <<b<<endl; 

}

/*البرنامج الثاني: حساب طول الوتر قي المثلت القائم
*/


void Program_2(){
double a=3;
double b=4;
double c= sqrt(a*a +b*b); 
cout <<c<<endl; 

}

/* البرنامج الثالث: حساب مجموع الارقام من الواحد الى n
*/


void Program_3(){
int n; 
cin>> n; 
int sum=0;
int i=1; //عداد الحلقة 
while (i<n){
sum+=i; 
i++;  //تحديث قيمة i كي لاندخل بحلقة لا نهائية 
} 
cout<<sum<<endl; 

}

/*البرنامج الرابع: قراءة عدد موجب وحساب جذره التربيعي
*/


void Program_4(){
int x; 
do{
cout <<"Enter positive number: "; 
cin>> x; 
} while (x<=0);  // كل ما أدخلت رقم سالب سيعيد طلب ادخال عدد موجب 
cout <<sqrt(x)<<endl; 

}

/*البرنامج الخامس
*/

void Program_5(){
int n=4;
int i=1;
for(int i=1; i<=n;  i++){
cout<<i <<endl; 
} 
cout <<"End of program "; 

}

/*البرنامج السادس: حساب المعدل
*/


void Program_6(){
int n; 
cout <<"Enter the number of your subject \n"; 
cin>> n; 
int i=n; 
double sum =0;
while (i> 0){
int grade; 
cout <<"Enter the grade: "; 
cin>> grade; 
if(grade>=60){
sum+=grade; 
} 
i--; 
} 
double Average =sum /n;
cout <<" Average =" <<Average <<endl; 

}

/*البرنامج السابع: قلب الرقم مثلا 48 يصبح 84
*/



void Program_7(){
int a; 
cout <<"Enter an enteger"<<endl; 
cin>> a; 

int reversed=0;
while (a> 0){
int digit =a%10;  
reversed =reversed *10+digit; 
a=a/10;
} 
cout<<"reversed number =" <<reversed <<endl; 

}

/*البرنامج الثامن: حساب العاملي 
*/



void Program_8(){
int n; 
cout <<"Enter the number " <<endl; 
cin>> n; 
long long factorial =1;
for (int i=1; i<=n;  i++){
factorial *=i; 
} 
cout <<"Factorial =" <<factorial <<endl; 

}

/*البرنامج التاسع: ادخال مجموعة ارقام وحساب اكبر قيمة، مجموع الاعداد الزوجية، عدد الاعداد الفردية، يتوقف البرنامج عند ادخال صفر
*/


void Program_9(){
int Max=0,sum=0,count=0;
while (true){
int n; 
cout <<"Enter a numer: "; 
cin>> n; 
if (n==0)
break; 
else if (n> Max){
Max=n; 
} 
else if (n%2==0){
sum +=n; 
} 
else {
count ++;
} 
} 

cout <<" Max=" << Max <<endl; 
cout <<" Sum=" << sum <<endl;
cout <<" Count " << count <<endl; 

}

/*البرنامج العاشر 
*/

void Program_10(){
int n; 
cin>> n; 
if (n%2==0){
for(int i=0; i<n*n; i++){
cout <<"*"; 
} 
} 
else {
for(int i=0; i<n*n;  i++){
cout <<"+"; 
} 
} 

}




/*البرنامج الحادي عشر: حلقات متداخلة.. طباعة احداثيات 
*/



void Program_11(){

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    
}
/*
 البرنامج 12:جدول ارقام
الخرج


1 2 3 4
1 2 3 4
1 2 3 4
الفكرة:
نطبع j فقط.*/


void Program_12(){

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    
}
/* .  البرنامج 13
 جدول يعتمد على الصف
الخرج:


1 1 1
2 2 2
3 3 3
الفكرة:
نطبع i.*/



void Program_13(){

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    
}
/* البرنامج 14
جدول جمع الإحداثيات
الخرج:


2 3 4
3 4 5
4 5 6
الفكرة:
القيمة المطبوعة = i + j.
*/


void Program_14(){

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i + j << " ";
        }
        cout << endl;
    }

    
}

/* نصف مثلث أرقام البرنامج 15
الخرج:


1
1 2
1 2 3
1 2 3 4
*/


void Program_15(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    
}

/*البرنامج 16
  */

void Program_16(){
vector<int > nums = {10,500,60,-20,20,20,100,20};
int val=20;
int countTimes= count (nums.begin(), nums.end(), val );
cout << "number" << val << " found " << countTimes << "times .\n";
cout << "===================================\n";
for ( int &n : nums ){  
    cout << n << "\n ";

}
cout << "===================================\n";
sort (nums.begin() , nums.end());

for ( int &n : nums ){  
    cout << n << "\n ";
}
 cout << "===================================\n";
 reverse (nums.begin(), nums .end());  //sort reversed .

  for ( int &n : nums ){  
    cout << n << "\n ";
}

}

/*البرنامج 17
  */
void Program_17(){
vector<int > nums = {10,20,30,40};
vector<int> :: iterator it ;

// loop with iterator 
for (it = nums.begin (); it < nums.end() ; it++){
    cout << *it << "\n";   
}
    cout << "=================\n";
 // ranged loop with for 
 for ( int val : nums ){
    cout << val << "\n";
 }
  // with array ??
  cout << "=================\n";
  int number[5] ={20,40,60,80,100};
  for (int mynumber : number ){
    cout << mynumber << "\n";
  }
 

}

/*البرنامج 17 
  */

void Program_18(){

    vector < int> nums ={10,20,30,40};
    vector <int > :: iterator  first = nums.begin();    //10
    vector <int >:: iterator  last = nums.end() -1;    //40 

    cout << " first element is : "<< *first << "\n";   //10
    cout << " second element is : " << first[1] <<"\n";   //20
    cout << " third element is : "<< first[2]  << "\n";   //30
     
    cout << " last elemnt is : "<< *last << "\n";   //40
   // cout << " befor last element : " << *last -1 ;    //39 
   cout << "befor last element :"<< *(last-1) << "\n";   //30 


   advance (first ,3);
   cout << " first element is : "<< *first << "\n";  //40
   advance (first ,-2);
   cout << " first element is : "<< *first << "\n"; //20

}

/*البرنامج 19*/


void Program_19(){
    vector< int > nums={10,20,30,40};
    vector <int > ::iterator it =nums.begin();
    auto ite= nums.begin() + 1; // 20

    cout << " the first element is :" << *it << "\n"; // 10
    cout << " second elements is : "<< *ite << "\n"; //20
    cout << " the first element is : " << *nums.begin() << "\n"; //10

    nums.erase(nums.begin() ,nums.begin() +2 ); // not including last element ..so first element &second element deleted.

    cout << " the first elemnt after delete is :" << *nums.begin() << "\n"; //30 
}

/*البرنامج 20*/

// syntax : vector<Type> variablename

void Program_20(){
    vector<int> numsone ={10,20,30,40};
    vector<int> numstwo  {100,200,300,400};
    vector<int> numsthree (4,50);
    for (int i=0;i< numsone.size(); i++){
        cout << numsone.at(i) << " ";

    }
    cout <<"\n =========\n";

    for (int i=0;i< numstwo.size(); i++){
        cout << numstwo.at(i) << " ";

    }
    cout <<"\n ==============\n";
    for (int i=0; i< numsthree.size() ; i++){
        cout << numsthree.at(i) << " ";

    }
    cout <<"\n ==============\n";

    cout << " number of elements is :" << numsthree.size()  << "\n";
    cout <<"\n ==============\n";

     numsthree.push_back(1000);
     for (int i=0; i< numsthree.size() ; i++){
        cout << numsthree.at(i) << " ";
    }
    cout <<"\n ==============\n";
    numsthree.at(0)=1000;
    for (int i=0; i< numsthree.size() ; i++){
        cout << numsthree.at(i) << " ";
    }

}

/*البرنامج 21*/


void calc(int nums[], int count ){
    int result =0;
    for (int i=0; i < count ; i++) {
        result+=nums[i];
    }
    cout << " the result is : " << result << "\n";

}


void Program_21(){
    int nums[]={10,20,30};
    cout << nums[2] <<"\n";
    //nums[3]=100;
   // cout << nums[3] << "\n"; error !!
   cout <<"===========\n";

   int Nums[4]={10,20,30};
    cout << Nums[2] <<"\n";
    Nums[3]=100;
   cout << Nums[3] << "\n";

   cout << "\n=============\n";
   
   array <int,3> numsArray ={10,20,30};
   cout << numsArray[2] << "\n";
   //numsArray[3]=100 ;
    //cout << numsArray[3] << "\n";   ERROR!! .

    cout << "================\n";

    array <int,4> NumsArray ={10,20,30};
   cout << NumsArray[2] << "\n";
   NumsArray[3]=100 ;
    cout << NumsArray[3] << "\n";  
    
    
}

/*البرنامج 22*/

void cal_c(int nums[], int count ){
    int result =0;
    for (int i=0; i < count ; i++) {
        result+=nums[i];
    }
    cout << " the result is : " << result << "\n";

}

void Program_22(){

   int nums[4]={10,20,30};
    cout << nums[2] <<"\n";
    nums[3]=100;
   cout << nums[3] << "\n";

   cout << "\n=============\n";
   

    array <int,4> numsArray ={10,20,30};
   cout << numsArray[2] << "\n";
   numsArray[3]=100 ;
    cout << numsArray[3] << "\n";  

    int arrayOfNumber[] ={10,20,30,40,100};
    int numsSize= size(arrayOfNumber);
    calc(arrayOfNumber,numsSize);
    
}

/*البرنامج 23*/

void Program_23(){
      int n ; 
      int count =0 ; // count 
      int sum = 0;
      double average =0;

      cout << " Enter a number :  ";
      cin >>n;
      count =1;
      while (n!=0)
      {
        cout << " Enter a number :  ";
        cin >>n;
        sum+=n;
        count ++;
      }

      average= sum/count ;
      cout << "Average =" << average << endl;
      cout << "sum =" << sum << endl;
      cout << "count =" << count << endl;

      
    


}

/*البرنامج 24*/

void Program_24(){
      int n ; 
      int count =0 ; // count 
      int max ;
      int min;

      cout << " Enter a number :  ";
      cin >>n;

      if (n !=0)
        {
          max = n;
          min =n;
          count=1;

      do {
        cout << " Enter a number :  ";
        cin >>n;
      if (n!=0)
      {
        if (n>max)
        max = n ;
        if (n< min )
        min = n;
        count ++;
      }
      } while (n!=0);
      
      cout << "count=" <<  count << endl;
      cout << "max =" << max << endl;
      cout << "min =" << min << endl;
  
    }
    


}
/*البرنامج 25*/


void Program_25(){
cout << "==========================\n";
cout << "App Ask To Type Number Of Kelobytes \n ";

int kelobytes;
cin >> kelobytes;
cout << kelobytes;


int The_Number_Of_Bytes = kelobytes * 1024;
int The_Number_Of_Bits = The_Number_Of_Bytes * 8;


cout << " The Number Of Bytes: " <<  The_Number_Of_Bytes ;
cout << " The Number Of Bits: " <<  The_Number_Of_Bits ;

    
}


// ---------------------------------------------------------
int main() {
    cout << "===========================================" << endl;
    cout << "   C++ BASIC TRAINING ARCHIVE - ENG. DONIA  " << endl;
    cout << "===========================================" << endl;
    cout << "This file contains various basic algorithms and exercises." << endl;
    cout << "To run any specific program, call its function in main()." << endl;
    

    return 0;
}
