                             //paytm project
                             // Admin section > id:virus and password:covid19

#include<iostream>
#include<string.h>
short count = 0,count1;
using namespace std;
void help(void);
void user(void);
void done(void);
class Paytm{
	private:
	long long int phone;
	int amount;
	short disper;
    char customerid[10],cpncode[10];
    string state;
	char adminid[10]="virus",password[10]="covid19";
	public:
       	   /******************************************************************
	                       Phone> Prepaid function
		   *******************************************************************/
    	void prepaid()
		{   
			cout<<"\n                 Mobile :"<<"+91";
			cin>>phone;
			cout<<"                 JIO Himachal Pradesh"<<endl;
			helpl:
			cout<<"\nBrowse Plans _________"<<endl;
			cout<<"1. Recommended\n2. SmartPhone\n3. JIO Cricket\n4. Data Add On\n";
			cout<<"\nEnter your Choice (1-4) = ";
			int choice4;
			cin>>choice4;
			system("cls");
			cout<<"                __________Select Your Plan__________\n\n";
			switch(choice4)
			{  
				case 1: cout<<"1>  199    Valdity 28 Days\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n2>  149    Valdity 24 Days\n    1 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n3>  399    Valdity 56 Days\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            break;
			    case 2:   cout<<"\n\n1>  249    Valdity 28 Days\n    2 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n2>  555    Valdity 84 Days\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n3>  2,599    Valdity 365 Days\n    2 GB/Day+ 10GB\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n4>  199    Valdity 28 Days\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n5>  149    Valdity 24 Days\n    1 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
			            cout<<"\n\n6>  399    Valdity 56 Days\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
		                break;	    
				case 3: cout<<"\n\n1>  499    Valdity 56 Days\n    Disney+Hotstar VIP Annual Subcription\n    1.5 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
						cout<<"\n\n2>  401    Valdity 28 Days\n    Disney+Hotstar VIP Annual Subcription\n    3 GB/Day + 6GB\n    unlimited calls(jio to non jio FUP)     ";
						cout<<"\n\n3>  598    Valdity 56 Days\n    Disney+Hotstar VIP Annual Subcription\n    2 GB/Day\n    unlimited calls(jio to non jio FUP)     ";
						cout<<"\n\n4>  777    Valdity 84 Days\n    Disney+Hotstar VIP Annual Subcription\n    3 GB/Day + 5GB\n    unlimited calls(jio to non jio FUP)     ";
				        break;
				case 4: cout<<"\n\n1>  21    Valdity: Existing Plan\n    3GB\n    jio to non jio - 200 minutes     ";
						cout<<"\n\n2>  51    Valdity: Existing Plan\n    6GB\n    jio to non jio - 500 minutes     ";
						cout<<"\n\n3>  151    Valdity 30 Days\n    30GB\n    jio to non jio - 1500 minutes     ";
						cout<<"\n\n4>  251    Valdity 30 Days\n    50GB\n    jio to non jio - 2000 minutes     ";
						break;
				default:cout<<"                                       Please Enter correct Option\n\n";
				goto helpl;
				break;          		
		    }			

			cout<<"\n\n Enter your Plan Number (From Above Plan List) = ";
			int choice5;
			cin>>choice5;
			}
	        	/******************************************************************\
	                                Phone>Postpaid   function
                *******************************************************************/
	void postpaid()
	{
		cout<<"\n                 Mobile :"<<"+91";
		cin>>phone;
		cout<<"                 JIO Himachal Pradesh"<<endl;
        cout<<"\n\nCoustomer Details -              Name - Aditya Mandiyal\n                                 Mobile Number -"<<phone<<endl<<"                                 operator - Jio"<<endl;  
	    cout<<"\nBill Details -                   Period - 3 Months\n                                 Calling Charge - 2400 Rupees\n                                 Data Charges - 5000 Rupees\n                                 Total Amount - 7400 Rupees\n\n"; 
		
	}
	          	/******************************************************************\
	                       DTH function
                *******************************************************************/
	void dth()
	{cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	                    cout<<"                 ------DTH------       \n"; 				        
	                    cout<<"Customer Id :";
				        	       cin>>customerid;
				        	       cout<<"Amount :";
				        	       cin>>amount;
								   coupon2();	       
	}
		/******************************************************************
	                      Broadband function
        *******************************************************************/
	void broad()
	{                              cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	                                 cout<<"        ------Broadband/Landline------       \n\n"; 				        
	                               cout<<"Customer Id :";
				        	       cin>>customerid;
				        	       cout<<"Amount :";
				        	       cin>>amount;
					               coupon2();
	}
		/******************************************************************\
	                      Admin function
        *******************************************************************/
		void admin()
	{  	char id[10],pass[10];	int choicea1;
	    cout<<"\n                      ...........................................................\n";
        cout<<"                                               >>>>> ADMIN <<<<<";	
       label:
		cout<<"\n\n                      ADMIN ID - ";
		cin>>id;
		cout<<"                      Password - ";
		cin>>pass;
		do{	
		if( ( (strcmp(id,adminid) )==0 ) && ( (strcmp(pass,password) )==0) ) 
		{   system("cls");
		    lab:
			cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			cout<<"               ------ADMIN SECTION------       \n"; 
		    cout<<"\n1. Add Coupon\n2. Block user Section\n3. Unblock user Section\n4. Logout From Admin Section\n5. Exit";
			cout<<"\n\nEnter your choice (1-5) = ";
			cin>>choicea1;				       
		}
		else 
		{cout<<"\n            Sorry You Enter Wrong Details Try Again !!!!!!!!!!!";
		goto label;
		}
	switch(choicea1)
		{
			case 1:
				cout<<"\nenter Coupon details____________"<<endl;
				cout<<"Coupon code :";
				cin>>cpncode;
				cout<<"Discount Percentage:";
				cin>>disper;
				cout<<"          "<<cpncode<<"  "<<disper<<"% OFF"<<endl<<endl;
				cout<<"1. Done\n2. Cancel\n\n";
				cout<<"Enter your choice = ";
				int choicecpn;
				cin>>choicecpn;
				if(choicecpn==2)
				goto lab;
				break;
			case 2:
				if(count==1)
			cout<<"                          User Section Already Blocked For User\n                                         **_Thanks_**\n";
			else
			{count++;
			cout<<"               You Successfully Block User Section :( \n";	
			}
			break;
			case 3:	if(count==0)
			cout<<"                          User Section Already Open For User\n                                     **_Thanks_**";
			else
			{
			count--;
			cout<<"               You Successfully Unblock User Section :) ";	
			}
			break;
			case 4: cout<<"\n_______________________________You Successfully Log Out from Admin Section__________________________________\n";
			       break;
		
			case 5:system("cls");
	        cout<<"\n\n\n\n\n\n                    *****************___Thanks For Using Paytm___*******************";
	        cout<<endl<<"\n                                             GooD Bye :)";
			exit(0);
			break;
		}
	    }while(choicea1!=4);
		
		
		}
	   /******************************************************************\
	                      Apply Coupon function
        *******************************************************************/
		void coupon()
	{   count1=0;  
	    int count2=1;
	    while(count2<5)
	    {
	    cpnl:
	    cout<<"Coupon code - ";
	    char cpn[10];
	    cin>>cpn;
	    if((strcmp(cpn,cpncode))==0)
	    {
	    cout<<"\n              CONGRACULATIONS YOU GOT "<<disper<<"% OFF ON YOUR AMOUNT OF PAYMENT)";
        cout<<"\n\n1. Make Payment (With "<<disper<<" % OFF )";
		cout<<"\n2. cancel\n";
		cout<<"enter your choice = ";
		int choiceelec;
		cin>>choiceelec;
		if(choiceelec==1)
		{ done();
		  count1++;  
		}	
		break;    
	    }
	    else
	   { cout<<"_________________________You Enter wrong Code________________\n___________________________Try Again !_______________\n";
	    count2++;
		}
	}
	}
			/******************************************************************\
	                      Apply Coupon2 function
            *******************************************************************/
	void coupon2()
	{
		               userlabel:
					   cout<<"1. Apply Coupon (If any)"<<endl;
					   cout<<"2. Make Payment "<<endl;
					   cout<<"3. Cancel"<<endl<<endl;
					   int choicecpn1;
					   cout<<"Enter your choice (1-3) = ";
					   cin>>choicecpn1;
					   if(choicecpn1==1)
					   { coupon(); }
					   
					   else if(choicecpn1==2)
					    {  count1=1;
					       done();
						}
					   if(count1!=1)
					  {goto userlabel;
					  } 
	}
		/******************************************************************\
	                      Elecricity Bill function
        *******************************************************************/
	void electricity()
	{  
	cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"          ------Electricity Bill------       \n\n"; 				        
	  fflush(stdin);
		cout<<"Enter Some Details__\n";
		cout<<"State:";
		getline(cin,state);
		cout<<"Coustomer ID:";
		cin>>customerid;
		cout<<"\n\nCoustomer Details -              Name - Aditya Mandiyal\n                                 Coustomer ID -"<<customerid<<endl<<"                                 State - "<<state<<endl<<"                                 Broad - "<<state<<" State Electricity Board Ltd"<<endl;  
	    cout<<"\nBill Details -                   Period - 3 Months\n                                 Electricity Charge - 5000 Rupees\n                                 Tax Charges - 2400 Rupees\n                                 Total Amount - 7400 Rupees\n\n "; 
		coupon2();                              
	}
	
};
Paytm p1;
     	/******************************************************************\
	                      Main() function
        *******************************************************************/ 
int main()
{ system("COLOR E0"); 
  cout<<"                                        ::          WELCOME            ::\n                                        ::          IN                 ::\n                                        ::          PAYTM              ::\n                                        ::          ONLINE             ::\n                                        ::          RECHARGE           ::\n";         
  cout<<"                                        :::::::::::::::::::::::::::::::::"<<endl;

   do{
   
 homel:  
  cout<<"\n\n...................................................................................."<<endl;
  cout<<"           >>>>> HOME <<<<<"<<endl;
  cout<<"1. User\n";
  cout<<"2. Admin \n";
  cout<<"3. Exit \n";
  cout<<"...................................................................................."<<endl;
  cout<<"\nEnter Your choice (1-3) = ";
  int choice1; 
  cin>>choice1;
  system("cls");
  switch(choice1)
{ 
    case 1: if(count==0)
	        user();
			else
			{cout<<"                                Sorry !!!!!!!!!!!!!!!!!!\n\n User Section Block By Admin"; 			  
			}break;
    case 2: p1.admin();
			break;
	case 3: system("cls");
	        cout<<"\n\n\n\n\n\n                    *****************___Thanks For Using Paytm___*******************";
	        cout<<endl<<"\n                                             GooD Bye :)";
	        exit(0);
	        break;  
	default: cout<<"\n                                     Please Enter correct choice !!!!!!!!!!!!\n";
			  goto homel; 
}


}   while(1);
}
     	/******************************************************************\
	                      Help function
        *******************************************************************/
void help()
{
		    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
             cout<<"                 >>>>> HELP <<<<<";	
             cout<<"\n\nSelect Help Topics :\n\n";
			  	        cout<<"                 1. Money deducted while doing recharge, but Payment is pending\n\n";
			  	        cout<<"                 2. Money deduction while dong rechagre, but order is taking longer than expected\n\n";
			  	        cout<<"                 3. Recharge a wrong number\n\n";
			  	        cout<<"                 4. Cylinder delivery but paid extra amount to delivery boy\n\n";
			  	        cout<<"                 5. Contact 24*7 Help(Our Executive will help for solve your problem)";
					    cout<<"\n\nEnter your choice (1-5) = ";
			  	        int choiceh1;
			  	        cin>>choiceh1;
			  	        cout<<"\nAns ----- "<<endl;
			  switch(choiceh1)
    {
			  	case 1: cout<<"This usually happens when we are not able to get payment conformation from your bank";
						break;
			  	case 2:cout<<"This is happens when we are not able to get the status of your recharge from the telecom operator"; 
			  	        break;
			 	case 3: cout<<"While we work hard to ensure recharge always remain simple and intuitive, it is your responsibility to select\nthe right number,Paytm would not be able to help out as it instantly forwards your order to the telecom operator and once successful, cannot reverse it\nfor these case, you should rech out to the telecom operator along with operator reference number(ORN) ";
			     		break;
				case 4: cout<<"In this case kindly contact your gas agency.";					 
	                    break;
	            case 5: cout<<" You Can Call our Executive On any of the Following Phone Numbers ----"<<endl;
				        cout<<"1. 01204456456\n2. 01204728728\n3. 01204606060\n4. 01204880880";
						break;        
    } 


}    	/******************************************************************\
	                      User function
        *******************************************************************/
	void user()
	{   userl:
		cout<<"\n                      ...........................................................\n";
              cout<<"                                               >>>>> USER <<<<<";	
			  cout<<"\n                                1. Phone\n                                2. DTH\n                                3. Brandband/Landline\n                                4. Electricity\n                                5. Help\n                                6. Exit";
			  cout<<"\n                    ...........................................................\n";
			  cout<<"\nEnter your choice (1-6) = ";
			  int choice2;
			  cin>>choice2;
			  system("cls");
			  switch(choice2)
			  {
			  	case 1:cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
				       cout<<"               ------PHONE------       \n"; 
				       cout<<"1. Prepaid\n2. Postpaid\n";
				       cout<<"\nEnter your choice (1-2) = ";
					   int choice3;
					   cin>>choice3;
					   if(choice3==1)
				{    
					   p1.prepaid();
					   p1.coupon2();
				}
					   else
				{
				       p1.postpaid();
				       p1.coupon2();
			    }
			    break;
				case 2: p1.dth();
						
				done();		
				break; 	
				case 3: p1.broad();
					    done();
					    break;
				case 4: p1.electricity();
					    break;
				case 5:	help();	
				        break;	  
			    case 6:system("cls");
	        cout<<"\n\n\n\n\n\n                    *****************___Thanks For Using Paytm___*******************";
	        cout<<endl<<"\n                                             GooD Bye :)";
				        exit(0);
			            break;
			    default: cout<<"\nPlease Enter correct choice !!!!!\n";
			    goto userl;        
			  }

	}
		/******************************************************************\
	                      Recharge Successfull function
        *******************************************************************/
	void done()
{   system("cls");
	cout<<"\n\n                                          PAYMENT SUCCESSFULL :)"<<endl;
	cout<<"\n                             THANKS\n                             FOR\n                             CHOOSING\n                             PAYTM\n";
}
