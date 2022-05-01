#include<iostream>
using namespace std;
void message(void){
}
response(char resp){
}
	int main(){
	
	// INITIALIZATION
	double totalamountdue, change, subtotal;
	int cash, quantity, x=1;
	char reply;
	
	// ITEM CODES
	int Sweet_n_Ripe_Grapes = 100;
	int Crunchy_Apples = 101;
	int Green_Peas = 109;
	
	
	// PRICES
	double item_1 = 125.35; //Sweet ‘n Ripe Grapes
	double item_2 = 52.20; //Crunchy Apples
	double item_3 = 25.75; //Green Peas

		
		cout<<"		Welcome to CS126 Mart!" <<endl;
	cout<<""<<endl;
	cout<<"Item Codes		Description		Price\n\n"	 <<endl;
	cout<<""<<Sweet_n_Ripe_Grapes<<"			Sweet n Ripe Grapes		"<<item_1<<"	" <<endl;	
	cout<<""<<Crunchy_Apples<<"			Crunchy Apples			"<<item_2<<"	" <<endl;
	cout<<""<<Green_Peas<<"			Green Peas			"<<item_3<<"	" <<endl;
	cout<<""<<endl;	
	
	int item_code;
	cout<< "Enter Code: ";
	cin>> item_code;
	
	do
	{
		while (item_code!=100 && item_code != 101 && item_code != 109 && item_code != 0)
		{
			cout<<"Invalid code. Please enter a valid one. "<<endl;
			cout<< "Enter Code: ";
			cin>>item_code;
		}
		
		while (item_code != 0) {
			if (item_code==100){
				cout<<"		Sweet n Ripe Grapes 		"<<item_1<<"";
				cout<<""<<endl;
				cout<<"			Quantity 		";
				cin>>quantity; 
				while (quantity <=0){
					cout<<"Invalid quantity. please enter again."<<endl;
					cout<<"			Quantity 		";
					cin>>quantity;
				}
				subtotal = item_1 * quantity;
				cout<<"			Subtotal		" <<subtotal;
				totalamountdue += subtotal;
			}
					
			else if (item_code==101){
				cout<<"			Crunchy Apples		"<<item_2<<"";
				cout<<""<<endl;
				cout<<"			Quantity 		";
				cin>>quantity; 
				while (quantity <=0){
					cout<<"Invalid quantity. Please enter again.";
					cout<<"			Quantity 		";
					cin>>quantity; 
				}
				subtotal = item_2 * quantity;
				cout<<"			Subtotal		" <<subtotal;
				totalamountdue += subtotal;
			}
			else if (item_code==109){
				cout<<"			Green Peas			"<<item_3<<"";
				cout<<""<<endl;
				cout<<"			Quantity 		";
				cin>>quantity; 
				while (quantity <=0){
					cout<<"Invalid quantity. Please enter again.";
					cout<<"			Quantity 		";
					cin>>quantity; 
				}
				subtotal = item_3 * quantity;
				cout<<"			Subtotal		" <<subtotal;
				totalamountdue += subtotal;
			}
			cout<<"\nEnter another code: ";
			cin>>item_code;
		}
	
	
		cout<<"			Total Amount Due: 	"<<totalamountdue<<endl;
		cout<<"			Cash:  ";
		cin>>cash;
		while (cash<totalamountdue)
		{
			cout<<"Insufficient cash!   ";
			cout<<""<<endl;
			cout<<"			Cash:  ";
			cin>>cash;
		}
		change = cash - totalamountdue;
		cout<<"			Change  		"<<change<<"" <<endl;
		cout<<""<<endl;
		
		int whole;
		whole = (int)change;

		int change_1000 = whole / 1000;
		whole = whole % 1000;
		int change_500 = whole / 500;
		whole = whole % 500;
		int change_200 = whole / 200;
		whole = whole % 200;
		int change_100 = whole / 100;
		whole = whole % 100;
		int change_50 = whole / 50;
		whole = whole % 50;
		int change_20 = whole / 20;
		whole = whole % 20;
		int change_10 = whole / 10;
		whole = whole % 10;
		int change_5 = whole / 5;
		whole = whole % 5;
		int change_1 = whole / 1;
		whole = whole % 1;

		int change_twentyfivecents = whole / 0.25;
		int change_tencents = whole / 0.10;
		int change_fivecents = whole / 0.05;
		
		cout<<"=============== CHANGE BREAKDOWN ==============="<<endl;
		cout<<"\n1000\t\t\t"<<change_1000; cout<<"\t\t\t"<<change_1000*1000;
		cout<<"\n500\t\t\t"<<change_500; cout<<"\t\t\t"<<change_500*500;
		cout<<"\n200\t\t\t"<<change_200; cout<<"\t\t\t"<<change_200*200;
		cout<<"\n100\t\t\t"<<change_100; cout<<"\t\t\t"<<change_100*100;
		cout<<"\n50\t\t\t"<<change_50; cout<<"\t\t\t"<<change_50*50;
		cout<<"\n20\t\t\t"<<change_20; cout<<"\t\t\t"<<change_20*20;
		cout<<"\n10\t\t\t"<<change_10; cout<<"\t\t\t"<<change_10*10;
		cout<<"\n5\t\t\t"<<change_5; cout<<"\t\t\t"<<change_5*5;
		cout<<"\n1\t\t\t"<<change_1; cout<<"\t\t\t"<<change_1*1;


		cout<<"\n0.25\t\t\t"<<change_twentyfivecents; cout<<"\t\t\t"<<change_twentyfivecents*.25;
		cout<<"\n0.10\t\t\t"<<change_tencents; cout<<"\t\t\t"<<change_tencents*.10;
		cout<<"\n0.05\t\t\t"<<change_fivecents; cout<<"\t\t\t"<<change_fivecents*.05<<endl;
		cout<<""<<endl;
		
	} while (tolower(reply) == 'y');

	cout<<"	Do you want another transaction? <y/n>n";	
	

	return 0;
	}
