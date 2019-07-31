#include<iostream>
#include<string>
using namespace std;
int main()
{
	char choice;
	int number ,number1;
	string name , name1;
	do
	{ 
	cout << "////////// Menu //////////"<<"\n";
	cout << "1.Register\n";
	cout << "2.Login\n";
	cout << "Q.Exit\n";
	cout << "________________________\n";
	cout<<endl;
	cout << "Enter Manu : ";
	cin >> choice ;
	cout<<endl;
	if(choice =='1')
		{
			cout << "**********Register**********\n";
			cout << "Input Username : ";
			cin >> name;
			cout << "Input password : ";
			cin >> number;
			cout<<endl;
		}
		
			if(choice == '2')
			{
				
				cout << "//////////Login//////////\n";
				do{
				cout << "Input Username : ";
				cin>>name1;
				cout << "Input Password : ";
				cin >> number1;
				cout<<endl;
				if( name1==name && number1 == number){
					cout<<"User Password correct^__^\n";}
				else if( name1!=name&&number1!=number){
					cout<<"!!!!!User or Password incorrect Please try again!!!!!\n";
					
				}
				}while( name1!=name&&number1!=number);
				cout<<endl;
			}
		
	
	}while(choice != 'Q');
	
	cout<<"Exit Program....\n";
	return(0);
}