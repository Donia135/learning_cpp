#include<iostream>
#include<string>

using namespace std;

struct stAddress {
	string city;
	string country;
	string phone;
	};
	
	struct stEmployee{
		string Fullname;
		int Age;
		int monthlysalary ;
		int yearlysalary;
		char gender ;
		bool married;
		stAddress Address;
		};
		
		void ReadInfo (stEmployee & Info){
			cout <<" Name :";
			getline (cin,Info.Fullname);
			cout <<" Age :";
			cin >> Info.Age ;
			cout <<" City : ";
			cin >>Info.Address.city;
			cout<<"Country : ";
			cin>>Info.Address.country;
			cout <<" enter your phone number :";
			cin>>Info.Address.phone;
			cout << "The gender :";
			cin >>Info.gender ;
			
			cout << "marital status :";
			cin >>Info.married;
			cout <<" monthly salary  ";
			cin>>Info.monthlysalary;
			cout<<" yearly salary: ";
			cin>>Info.yearlysalary;
			}
  
  void printInfo(stEmployee Info ){
  	cout <<"*    *    *   *     *     *    *      *   \n";
  	cout <<"Name :" << Info.Fullname<<endl;
  	cout<<"Age :"<<Info.Age<<endl;
  	cout <<"City:"<<Info.Address.city <<endl;
  	cout <<"Country :"<< Info.Address.country <<endl;
  	cout <<"Phone :" <<Info.Address.phone <<endl ;
  	cout <<"Gender :"<< Info.gender <<endl;
  	cout <<"Marital status :" << Info.married <<endl;      cout <<"Monthly salary : " <<Info.monthlysalary <<endl;  
  	    cout <<"Yearly salary :" <<Info.yearlysalary <<endl;
  	}
int main(){
		stEmployee  person1 ;
		ReadInfo(person1);
		printInfo(person1);
		return 0;
}
