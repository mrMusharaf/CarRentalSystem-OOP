// header files
#include <iostream>
#include <fstream>
using namespace std;
class customer
{
	public:
	string Name;
    string Model;
    string reason;
    string Address,CNIC,Pnum;
    char data;
};

class rent : public customer // inherited customer class
{
	public:
	int days,rentalfee=1200;// Rs 1200/day
	
	void data()
	{
	cout<<"\n\t\t\t\t KINDLY ENTER YOUR DETAILS"<<endl;
	cout<<"\t\t\t-------------------------------------------"<<endl;
	cout <<"\n\t\t\tPlease Enter Your Name: ";
    getline(cin,Name);
    cout<<"\t\t\tEnter your CNIC:";
    getline(cin,CNIC);
    cout<<"\t\t\tEnter your Phone Number:";
    getline(cin,Pnum);
    cout<<"\t\t\tEnter your Address:";
    getline(cin,Address);
    do
    {
        cout <<"\nPlease Select a Car"<<endl;
        cout<<"Enter 'A' for Mehran 2005."<<endl;
        cout<<"Enter 'B' for Toyota Corolla 2015."<<endl;
        cout<<"Enter 'C' for Mitsubishi Pajero."<<endl;
        cout<<endl;
        cout<<"Choose a Car from the above options: ";
        cin >>Model;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(Model=="A")
 {
 
		cout<<"You have choosed Mehran 2005"<<endl;
		ifstream inA("A.txt"); //displaying details of model A
        char str[200];
        while(inA)
		{
        inA.getline(str, 200);  
        if(inA) cout << str << endl;
}
  }
  if(Model=="B")
  {
		cout<<"You have choosed Toyota Corolla"<<endl;
		 ifstream inB("B.txt"); //displaying details of model B
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) 
		 cout << str << endl;
         
     }
 }
 if(Model=="C")
 {
	     cout<<"You have choosed Mitsubishi Pajero"<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) 
	{
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
    }
}  
if(Model !="A" && Model !="B" &&  Model !="C" )
     
      cout<<"Invaild Car Model. Please try again!"<<endl;
    }while(Model !="A" && Model !="B" &&  Model !="C" );
    
    // Rental Information
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 
    cout<<"Enter the reason to rent: ";
    cin >> reason;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		cout<<"Calculating rent. Please wait......"<<endl;
		if(Model == "A"||Model=="a")
        rentalfee=days*rentalfee;
        if(Model == "B" ||Model=="b")
        rentalfee=days*rentalfee;
        if(Model == "C" ||Model=="c")
        rentalfee=days*rentalfee;
    }
void showrent()
    {
    cout << "\n\t\t\t\t********Rental Bill*******"<<endl;
    cout << "\t\t-----------------------------------------------|"<<endl;
    cout<<"\t\t-------------Customer Details--------------------|"<<endl;
    cout << "\t\t|	| Customer Name:"<<"------------------------|"<<Name<<endl;
    cout << "\t\t|	| Customer CNIC :"<<"-----------------------|"<<CNIC<<endl;
    cout << "\t\t|	| Customer Ph Number :"<<"------------------|"<<Pnum<<endl;
    cout << "\t\t|	| Customer Address :"<<"--------------------|"<<Address<<endl;
    cout<<"\n\t\t---------------Car  Details----------------"<<endl;
    cout << "\t\t|	| Car Model :"<<"---------------------------|"<<Model<<endl;
    cout << "\t\t|	| Reason of Renting. :"<<"------------------|"<<reason<<endl;
    cout << "\t\t|	| Number of days :"<<"----------------------|"<<days<<endl;
    cout << "\t\t|	 ____________________"<<endl;
    cout <<"\n";
    cout << "\t\t|	| Total Rental Amount is :"<<"--------------|"<<"Rs."<<rentalfee<<endl;
    cout << "\t\t|	 ____________________"<<endl;
    cout << "\t\t|	 # This is a computer generated bill and it does not"<<endl;
    cout << "\t\t|	 require an Authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t|----------------------------------------------"<<endl;
    cout << "\t\t|	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t|	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t|----------------------------------------------"<<endl;
    int f;
    system("PAUSE");
    
	}
};
class welcome //welcome class
{
	public:
	int Start()
	{
  char str[1000];
  cout<<"\t\t\t||\t\t Welcome to ANR Rentals               ||"<<endl;
  cout<<"\t\t\t||\t Visit Us Today And Get your Choice           ||"<<endl;
  cout<<"\t\t\t|| Hamare Han Sasti Aur Mayari Gariyan Dastiyaab Hein ||"<<endl;
  cout << endl;
		cout << "\t\t**************************************************************************" << endl;
		cout << "\t\t||                                                                       ||" << endl;
		cout << "\t\t||  --------------------------------------------         _____________   ||" << endl;
		cout << "\t\t||  |                                          |    ____//__][______||   ||" << endl;
		cout << "\t\t||  | 		   THE 'A N R' RENTAL's             |   |_o _ |  -| _|   ||" << endl;
		cout << "\t\t||  |                                          |    (_)-----------(_)'   ||" << endl;
		cout << "\t\t||  --------------------------------------------                         ||" << endl;
		cout << "\t\t||                                                                       ||" << endl;
		cout << "\t\t**************************************************************************" << endl;
		cout << endl;
}

};
int main()
{
welcome obj1; //object created for welcome class
obj1.Start(); //welcome function is called
rent obj2; 
//object created for rent class and further member functions are called
obj2.data();
obj2.calculate();
obj2.showrent();
return 0; //end of the program
}

