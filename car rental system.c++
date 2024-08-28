#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <iomanip>
#include <ctime>

using namespace std;

class Customer
{
    protected:
        string Customer_Name;
        int Car_Name;
        string RTO_Registered_Number;
};

class Rent : public Customer
{
    private:
        int Time_Duration;
        int Charges;
        char str[200];

    public:
        Rent();
        void welcome();
        void fileReader(char Car_Documents[20]);
        void data();
        void invoiceAmount();
        void invoiceRecord();
};

Rent :: Rent()
{
    Time_Duration = 0;
    Charges = 0;
}

void Rent :: welcome()
{
    ifstream fin("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\welcome.txt");
    if(!fin.is_open())
    {
        cout<<"Cannot Open Welcome File.";
        return;
    }
    
    char str[1000];
    while(fin)
    {
        fin.getline(str, 1000);
        if(fin)
            cout<<str<<endl;
    }

    fin.close();
	sleep(1);
	cout<<"\nStarting the program please wait....."<<endl;
	sleep(1);
	cout<<"\nloading up files....."<<endl;
	sleep(1); 
	system ("CLS");
}


void Rent :: fileReader(char Car_Documents[20])
{
	ifstream fin;
	fin.open(Car_Documents); 
	if(!fin.is_open())
    {
        cout << "Error in printing file. File not found!" << endl;
        return;
    }

	while(fin) 
    {
		fin.getline(str, 200);  
		if(fin) 
			cout << str << endl;
	}
}


void Rent :: data()
{
	cout << "\n\n\t\t\t\tEnter your Name : ";
	getline(cin, Customer_Name);
	cout<<endl;
	do{
	    cout<<"\t\t\t\t_______________________________________________________________________"<<endl;
	    cout<<"\t\t\t\tChoose a Car from the listed options. \n ";
	    cout<<"\t\t\t\tChoose a number corresponding to the car you want to Select." << endl; 
	    cout<<"\t\t\t\t_______________________________________________________________________"<<endl;
		cout<<"\t\t\t\t1. Chevrolet Equinox."<<endl;
	    cout<<"\t\t\t\t2. Ford Escape."<<endl;
	    cout<<"\t\t\t\t3. Ford F-150."<<endl;
		cout<<"\t\t\t\t4. Honda Civic."<<endl;
		cout<<"\t\t\t\t5. Honda CR-V."<<endl;
		cout<<"\t\t\t\t6. Hyundai Santro."<<endl;
		cout<<"\t\t\t\t7. Nissan Rogue."<<endl;
		cout<<"\t\t\t\t8. Tesla Model 3."<<endl;
		cout<<"\t\t\t\t9. Toyota Corolla."<<endl;
		cout<<"\t\t\t\t10. Toyota RAV4."<<endl;
	    cout<<endl;
        cout<<"\t\t\t\tPress 0 to exit."<<endl;
        cout<<endl;
	    cout<<"\t\t\t\t_______________________________________________________________________"<<endl;
	    cout<<"\n\t\t\t\tEnter your Choice : ";
	    cin>>Car_Name;
	    cout<<endl;
	 			
	 	switch(Car_Name)
        {
            case 0:
                return ;
	 		case 1:
	 			system("CLS");
	 			cout<<"You have choosed "<<endl;
	 			fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Chevrolet Equinox.txt");
				sleep(2);
				break;
			case 2:
				system("CLS");
	  			cout<<"You have choosed "<<endl;
				fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Ford Escape.txt");
		     	sleep(2);
				break;	
			case 3:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Ford F-150.txt");
		     	sleep(2);
		   		break;
			case 4:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Honda Civic.txt");
		     	sleep(2);
		   		break;
			case 5:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Honda CR-V.txt");
		     	sleep(2);
		   		break;
			case 6:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Hyundai Santro.txt");
		     	sleep(2);
		   		break;
			case 7:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Nissan Rogue.txt");
		     	sleep(2);
		   		break;
			case 8:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Tesla Model 3.txt");
		     	sleep(2);
		   		break;  			
			case 9:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Toyota Corolla.txt");
		     	sleep(2);
		   		break;
			case 10:
		     	system("CLS");
		     	cout<<"You have choosed "<<endl;
			    fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\Toyota RAV4.txt");
		     	sleep(2);
		   		break;
			default:
		     	cout<<"Invaild Car Model. Please try again!"<<endl;
                data();
		}
	}while(Car_Name < 1 && Car_Name > 10);
	
	cin.ignore();

	cout<<"________________________________________________________________________________________________"<<endl;
  	cout<<"Please provide following information:"<<endl; 

	cout<<"Please select a Car No. : ";
	getline(cin, RTO_Registered_Number);

	cout<<"Number of days you wish to rent the car : ";
	cin>>Time_Duration;

	cout<<endl;
}


void Rent :: invoiceAmount()
{
	sleep(1);
	system ("CLS");
	cout<<"Calculating rent. Please wait......"<<endl;
	sleep(2);
	switch (Car_Name)
	{
		case 1:
			Charges = Time_Duration * 1000;
			break;
		case 2:
			Charges = Time_Duration * 2000;
			break;
		case 3:
			Charges = Time_Duration * 3000;
			break;
		case 4:
			Charges = Time_Duration * 3000;
			break;
		case 5:
			Charges = Time_Duration * 4000;
			break;
		case 6:
			Charges = Time_Duration * 6000;
			break;
		case 7:
			Charges = Time_Duration * 7000;
			break;
		case 8:
			Charges = Time_Duration * 8000;
			break;
		case 9:
			Charges = Time_Duration * 9000;
			break;
		case 10:
			Charges = Time_Duration * 10000;
			break;
		default:
			Charges = 0;	
			cout<<"Invalid Car Name!"<<endl;
			break;
	}
}


void Rent :: invoiceRecord()
{
	time_t now  = time(0);		//getting local time 
	char *date = ctime(&now); 	//Converting toa string 
	cout<<setw(80) << date << endl;
	cout<<"\n\t\t                       CAR RENTAL - CUSTOMER INVOICE                  "<<endl;
	cout<<"\t\t	##################################################################" << endl;
	cout<<"\t\t	##################################################################" << endl;
	cout<<"\t\t	| Invoice No.  "<<"					|"<< setw(15) <<rand()<<" |"<<endl;  
	cout<<"\t\t	| Customer Name "<<"				|"<< setw(15) <<Customer_Name<<" |"<<endl;
	cout<<"\t\t	| Car Model  "<<"					|"<< setw(15) <<Car_Name<<" |"<<endl; 
	cout<<"\t\t	| Car No.  "<<"					|"<< setw(15) <<RTO_Registered_Number<<" |"<<endl;
	cout<<"\t\t	| Number of days  "<<"				|"<< setw(15) <<Time_Duration<<" |"<<endl;
	cout<<"\t\t	| Rental Amount  "<<"				|"<< setw(15) <<Charges<<" |"<<endl;
	cout<<"\t\t	| Caution Money  "<<"				|"<< setw(15) <<"0"<<" |"<<endl;    
	cout<<"\t\t	| Advanced  "<<"					|"<< setw(15) <<"0"<<" |"<<endl;
	cout<<"\t\t	|________________________________________________________________|"<<endl;
	cout<<"\t\t	| Total Rental Amount    "<<"			|"<<setw(9)<<"R " << Charges<<" |"<<endl;
	cout<<"\t\t	##################################################################" << endl;
	cout<<"\t\t	##################################################################" << endl;
	cout<<"\t\t	 NOTE: This is a computer generated invoce. "<<endl;
	cout<<"\t\t	       It does not require an authorised signture."<<endl;
	cout<<"\t\t	""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" << endl;
	cout<<"\t\t	You are advised to pay up the amount before due date."<<endl;
	cout<<"\t\t	Otherwise penelty fee will be applied"<<endl;
	cout<<"\t\t	****************************************************************" << endl;

	system("PAUSE");
	system ("CLS");
	fileReader("C:\\Users\\kusha\\OneDrive\\Desktop\\C++ DSA\\Rent Car\\thanks.txt");
}


int main()
{
	Rent rent; 
	rent.welcome();
	rent.data();
	rent.invoiceAmount();
	rent.invoiceRecord();
	return 0;
}