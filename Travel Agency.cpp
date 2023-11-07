#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<windows.h>
using namespace std;
class userdetails
{
char firstname[20],lastname[20],dob[12],mobileNo[11],user_id[20],pin[10],address[70];
public: 
	void getdata()
	{
		cout<<"\n\n\t\t\tenter first name: ";
		cin>>firstname;
		cout<<"\t\t\tenter last name: ";
		cin>>lastname;
		cout<<"\t\t\tenter date of birth (dd/mm/yyyy): ";
		cin>>dob;
		cout<<"\t\t\tenter the Address (enter $ to continue) : ";
		cin.getline(address,70,'$');
		cout<<"\t\t\tenter contact number: ";
		cin>>mobileNo;
		cout<<"\t\t\tenter user ID (eg. adhaar card number/PAN number): "; 
		cin>>user_id;
		cout<<"\t\t\tenter PIN code : ";
		cin>>pin;
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<setw(43)<<"loading";
		Sleep(1000);
		cout<<" .";
		Sleep(1400);
		cout<<" .";
		Sleep(1500);
		cout<<" .";
		system("cls");
	}
	void showdata()
	{
		cout<<"\n\tNAME : "<<firstname<<" "<<lastname;
		cout<<"\n\tDATE OF BIRTH : "<<dob<<"\t\t CONTACT NUMBER : "<<setw(10)<<mobileNo;
		cout<<"\n\tPIN code : "<<setw(10)<<pin<<"\t\t\tUSER ID : "<<user_id;	
	}
};
class holiday
{
	int dest;
	char ddate[11];
	public:
		int nod;
		void ret_ddate()
		{
			cout<<ddate;
		}
		void getinfo()
		{
			int i;
			cout<<"\n\t\t\tenter date of departure (DD/MM/YYYY) : ";
			cin>>ddate;
			cout<<"\t\t\tenter number of days : ";
			cin>>nod;
			Sleep(1200);
			system("cls");
		}
		void destination()
		{
			int choice=0,k=1;
			char x;
			while(k!=0)
			{
				system("cls");
				cout<<"\n\t\t\tselect destination\n\t\t\t1 : Srinagar, Kashmir\n\t\t\t2 : Mumbai, Maharashtra\n\t\t\t3 : Jaipur, Rajasthan\n";
				cin>>choice;
				switch(choice)
				{
					case 1:
						cout<<"\n\t\t\tyou have chosen Srinagar, Kashmir as your destination\n\n\t\tenter Y to confirm destination\t\tenter N to change destination\n";
						cin>>x;
						if(x=='Y'||x=='y')
						{
							dest=1;
							k=0;
							break;
						}
						else
							break;
					case 2:
						cout<<"\n\t\t\tyou have chosen Mumbai, Maharashtra as your destination\n\n\t\tenter Y to confirm destination\t\tenter N to change destination\n";
						cin>>x;
						if(x=='Y'||x=='y')
						{
							dest=2;
							k=0;
							break;
						}
						else
							break;
					case 3:
						cout<<"\n\t\t\tyou have chosen Jaipur, Rajasthan as your destination\n\n\t\tenter Y to confirm destination\t\tenter N to change destination\n";
						cin>>x;
						if(x=='Y'||x=='y')
						{
							dest=3;
							k=0;
							break;
						}
						else
							break;	
					default :
						cout<<"\n\t\t\terror in choice\n\t\t\tplease re-enter choice\n";
						break;
				}
			}
			Sleep(500);
			system("cls");
			cout<<"\n\n\n\n\n\n\n";
			cout<<setw(43)<<"loading";
			Sleep(1000);
			cout<<" .";
			Sleep(1400);
			cout<<" .";
			Sleep(1500);
			cout<<" .";
			system("cls");
		}
		int ret_dest()
		{
			return dest;
		}
		void calc_rdate();
};
void holiday :: calc_rdate()
{
	int z,l=0;
	int x=ddate[0]-'0';
	x*=10;
	int y=ddate[1]-'0';
	x+=y;
	int a=ddate[3]-'0';
	a*=10;
	int b=ddate[4]-'0';
	a+=b;
	int p=ddate[6]-'0';
	p*=1000;
	int q=ddate[7]-'0';
	q*=100;
	int r=ddate[8]-'0';
	r*=10;
	int s=ddate[9]-'0';
	p=p+q+r+s;
	z=x+nod;
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		if(z>31)
		{
			int w=31;
			while(z>w)
			{
				if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
				{
					z=z-31;
					if(a==12)
					{
						l=a+1;
						a=1;
					}
					else
					{
						a++;
					}
					if(a==2)
					{
						w=28;
					}
					else
					{
						if(a==8||a==1)
						{
							w=31;
						}
						else
						{
							w=30;	
						}
					}
				}
				else
				{
					if(a==4||a==6||a==9||a==11)
					{
						z=z-30;
						a++;
						w=31;
					}
					else
					{
						z=z-28;
						a++;
						w=31;
					}
				}
			}	
		}
	}
	else
	{
		if(a==4||a==6||a==9||a==11)
		{	
			int w=30;
			while(z>w)
			{
				if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
				{
					z=z-31;
					if(a==12)
					{
						l=a+1;
						a=1;
					}
					else
					{
						a++;
					}
					if(a==2)
					{
						w=28;
					}
					else
					{
						if(a==8||a==1)
						{
							w=31;
						}
						else
						{
							w=30;	
						}
					}
				}
				else
				{
					if(a==4||a==6||a==9||a==11)
					{
						z=z-30;
						a++;
						w=31;
					}
					else
					{
						z=z-28;
						a++;
						w=31;
					}
				}
			}		
		}
		else
		{
			int w=28;
			while(z>w)
			{
				if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
				{
					z=z-31;
					if(a==12)
					{
						l=a+1;
						a=1;
					}
					else
					{
						a++;
					}
					if(a==2)
					{
						w=28;
					}
					else
					{
						if(a==8||a==1)
						{
							w=31;
						}
						else
						{
							w=30;	
						}
					}
				}
				else
				{
					if(a==4||a==6||a==9||a==11)
					{
						z=z-30;
						a++;
						w=31;
					}
					else
					{
						z=z-28;
						a++;
						w=31;
					}
				}
			}	
		}
	}
	if(l>12)
	{
		while(l>12)
		{
			l=l-12;
			p++;
		}
	}
	cout<<z<<"/"<<a<<"/"<<p;
}
class hotel : virtual public holiday
{
	int hotelc,rtotal,sglprice,dblprice,rprice[20]={2700,11500,6525,3700,3850,5800,3600,3000,1125,3674,18000,11125,6500,6500,9677,5499,5000,3000};
	public:
		int singleroom=0,doubleroom=0,k=1;
		int nosgl,nodbl,sgl,dbl;
		void selecthotel()
		{
			int choice;
			char x;
			if(ret_dest()==1)
			{
				cout<<"\n\t\t\thotels available in Srinagar:\n\t\t\t1 . Opera Inn\n\t\t\t2 . Vivanta Dal View\n\t\t\t3 . Four Points by Sheraton Srinagar\n";
				while(k!=0)
				{
					cout<<"\n\tselect hotel : \n";
					cout<<"\n\tHOTEL NAME"<<setw(40)<<"RATING"<<setw(20)<<"USER RATING"<<setw(30)<<"STARTING PRICE PER NIGHT";
					cout<<"\n\t1 : Opera Inn"<<setw(38)<<"\3 \3 \3 \3"<<setw(19)<<"8.4"<<setw(30)<<"Rs.  2,700";
					cout<<"\n\t2 : Vivanta Dal View"<<setw(33)<<"\3 \3 \3 \3 \3"<<setw(17)<<"7.9"<<setw(30)<<"Rs. 11,500";
					cout<<"\n\t3 : Four Points by Sheraton Srinagar"<<setw(15)<<"\3 \3 \3 \3"<<setw(19)<<"8.7"<<setw(31)<<"Rs. 6,525\n";
					cin>>choice;
					switch(choice)
					{
						case 1:
							cout<<"\n\t\t\tyou have chosen hotel 'Opera Inn'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
							cin>>x;
							if(x=='Y'||x=='y')
							{
								hotelc=1;
								k=0;
								break;
							}
							else
							{
								system("cls");
								break;
							}
						case 2:
							cout<<"\n\t\t\tyou have chosen hotel 'Vivanta Dal View'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
							cin>>x;
							if(x=='Y'||x=='y')
							{
								hotelc=2;
								k=0;
								break;
							}
							else
							{
								system("cls");
								break;
							}
						case 3:
							cout<<"\n\t\t\tyou have chosen hotel 'Four Points by Sheraton Srinagar'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
							cin>>x;
							if(x=='Y'||x=='y')
							{
								hotelc=3;
								k=0;
								break;
							}
							else
							{
								system("cls");
								break;
							}	
						default :
							cout<<"\n\t\t\terror in choice\n\t\t\tplease re-enter choice\n";
							{
								system("cls");
								break;
							}
					}
				}
				system("cls");
			}
			else
			{
				if(ret_dest()==2)
				{
					cout<<"\n\t\t\thotels available in Mumbai:\n\t\t\t1 . Trident Nariman Point\n\t\t\t2 . Four Seasons Hotel Mumbai\n\t\t\t3 . Waterstones Hotel\n";
					while(k!=0)
					{
						cout<<"\n\tselect hotel : ";
						cout<<"\n\tHOTEL NAME"<<setw(40)<<"RATING"<<setw(20)<<"USER RATING"<<setw(30)<<"PRICE PER NIGHT";
						cout<<"\n\t1 : Trident Nariman Point"<<setw(28)<<"\3 \3 \3 \3 \3"<<setw(17)<<"9.0"<<setw(30)<<"Rs. 3,700";
						cout<<"\n\t2 : Four Seasons Hotel Mumbai"<<setw(24)<<"\3 \3 \3 \3 \3"<<setw(17)<<"8.6"<<setw(30)<<"Rs. 3,850";
						cout<<"\n\t3 : Waterstones Hotel"<<setw(30)<<"\3 \3 \3 \3"<<setw(19)<<"7.3"<<setw(31)<<"Rs. 5,800\n";
						cin>>choice;
						switch(choice)
						{
							case 1:
								cout<<"\n\t\t\tyou have chosen hotel 'Trident Nariman Point'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=4;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}
							case 2:
								cout<<"\n\t\t\tyou have chosen hotel 'Four Seasons Hotel Mumbai'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=5;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}
							case 3:
								cout<<"\n\t\t\tyou have chosen hotel 'Waterstones Hotel'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=6;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}	
							default :
								cout<<"\n\t\t\terror in choice\n\t\t\tplease re-enter choice\n";
								break;
						}
					}
					system("cls");
				}
				else
				{
					cout<<"\n\t\t\thotels available in Jaipur:\n\t\t\t1 . Umaid Bhawan - Heritage Style Hotel\n\t\t\t2 . Hilton Jaipur\n\t\t\t3 . Hotel Kalyan\n";
					while(k!=0)
					{
						cout<<"\n\tselect hotel : ";
						cout<<"\n\tHOTEL NAME"<<setw(40)<<"RATING"<<setw(20)<<"USER RATING"<<setw(30)<<"PRICE PER NIGHT";
						cout<<"\n\t1 : Umaid Bhawan"<<setw(35)<<"\3 \3 \3 \3"<<setw(19)<<"8.6"<<setw(30)<<"Rs. 3,600";
						cout<<"\n\t2 : Hilton Jaipur"<<setw(36)<<"\3 \3 \3 \3 \3"<<setw(17)<<"8.1"<<setw(30)<<"Rs. 3,000";
						cout<<"\n\t3 : Hotel Kalyan"<<setw(33)<<"\3 \3 \3"<<setw(21)<<"8.0"<<setw(31)<<"Rs. 1,125\n";
						cin>>choice;
						switch(choice)
						{
							case 1:
								cout<<"\n\t\t\tyou have chosen hotel 'Umaid Bhawan - Heritage Style Hotel'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=7;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}
							case 2:
								cout<<"\n\t\t\tyou have chosen hotel 'Hilton Jaipur'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=8;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}
							case 3:
								cout<<"\n\t\t\tyou have chosen hotel 'Hotel Kalyan'\n\n\t\tenter Y to confirm hotel\t\tenter N to select a different hotel\n";
								cin>>x;
								if(x=='Y'||x=='y')
								{
									hotelc=9;
									k=0;
									break;
								}
								else
								{
									system("cls");
									break;
								}
							default :
								cout<<"\n\t\t\terror in choice\n\t\t\tplease re-enter choice\n";
								break;
						}
					}
					system("cls");
				}
			}
		}
		int hoteltotal()
		{
			return rtotal*nod;
		}
		int ret_hotel()
		{
			return hotelc;
		}
		void bookroom()
		{
			int choice,k=1,ch,cho;
			while(k!=0)
			{
				system("cls");
				cout<<"\n\t\t\trooms available"<<setw(27)<<"rate\n\t\t\t1.single"<<setw(25)<<"rs. "<<rprice[hotelc-1]<<"\n\t\t\t2.double"<<setw(25)<<"rs. "<<rprice[hotelc+8]<<"\n\t\t\t3.proceed";
				cout<<"\n\t\t\tenter choice ";
				cin>>choice;
				switch(choice)
				{
					case 1:
						cout<<"\n\t\t\tSINGLE ROOMS\n\t\t\tenter number of rooms to be booked : ";
						cin>>sgl;
						singleroom+=sgl;
						break;
					case 2:
						cout<<"\n\t\t\tDOUBLE ROOMS\n\t\t\tenter number of rooms to be booked : ";
						cin>>dbl;
						doubleroom+=dbl;
						break;
					case 3:
						k=0;
						break;
					default : 
						cout<<"\n\t\t\tERROR in choice";
						break;
				}
				if(sgl<=0&&dbl<=0)
				{
					cout<<"\n\t\t\terror\n\t\t\tAt least one room needs to be booked";
					return ;
				}
			}
			system("cls");
			cout<<"\n\n\t\t\tRoom(s) have been booked\n";
			sglprice=rprice[hotelc-1];
			dblprice=rprice[hotelc+8];
			roomdets();
			Sleep(4000);
			system("cls");
			cout<<"\n\n\n\n\n\n\n";
			cout<<setw(43)<<"loading";
			Sleep(1000);
			cout<<" .";
			Sleep(1400);
			cout<<" .";
			Sleep(1500);
			cout<<" .";
			system("cls");
		}
		void roomdets()
		{
			cout<<"\n\t\t\tnumber of single rooms : "<<singleroom<<"\n\t\t\ttotal : \t\t"<<singleroom*rprice[hotelc-1]<<"\n\t\t\tnumber of double rooms : "<<doubleroom<<"\n\t\t\ttotal : \t\t"<<doubleroom*rprice[hotelc+8];
			rtotal=singleroom*rprice[hotelc-1]+doubleroom*rprice[hotelc+8];	
		}
		ret_sprice()
		{
			return sglprice;
		}
		ret_dprice()
		{
			return dblprice;
		}
		void cancelroom()
		{
			char rt;
			int k=1;
			system("cls");
			cout<<"\n\t\t\trooms booked\n";
			if(singleroom>0)
			{
				cout<<"\t\t\tsingle : "<<singleroom<<"\n";
			}
			if(doubleroom>0)
			{
				cout<<"\t\t\tdouble : "<<doubleroom<<"\n";
			}
			if(singleroom>0 && doubleroom>0)
			{
				while(k!=0)
				{
					cout<<"\n\t\t\tselect type of room to be canceled\n\t\t\tS : single\n\t\t\tD : double\n\t\t\tP : proceed\n";
					cin>>rt;
					switch(rt)
					{
						case 's':
							cout<<"\n\t\t\tenter number of single rooms to be canceled : ";
							cin>>nosgl;
							single(nosgl);
							break;
						case 'S':
							cout<<"\n\t\t\tenter number of single rooms to be canceled : ";
							cin>>nosgl;
							single(nosgl);
							break;
						case 'd':
							cout<<"\n\t\t\tenter number of double rooms to be canceled : ";
							cin>>nodbl;
							double_(nodbl);
							break;
						case 'D':
							cout<<"\n\t\t\tenter number of double rooms to be canceled : ";
							cin>>nodbl;
							double_(nodbl);
							break;	
						case 'p':
							k=0 ;
							break;
						case 'P':
							k=0 ;
							break;
						default :
							cout<<"\n\t\t\terror in choice";
							break;
					}
				}
				roomdets();
				Sleep(5000);
				system("cls");
			}
			else
			{
				if(singleroom>0&&doubleroom<=0)
				{
					cout<<"\n\t\t\tenter number of single rooms to be canceled : ";
					cin>>nosgl;
					single(nosgl);
					roomdets();
					Sleep(5000);
					system("cls");
				}
				else
				{
					cout<<"\n\t\t\tenter number of double rooms to be canceled : ";
					cin>>nodbl;
					double_(nodbl);
					roomdets();
					Sleep(5000);
					system("cls");
				}
			}
		}
		void double_(int nodbl)
		{
			if(nodbl>=doubleroom)
			{
				rtotal-=doubleroom*rprice[hotelc+8];
				doubleroom=0;
			}
			else
			{
				doubleroom-=nodbl;
				rtotal-=nodbl*rprice[hotelc+8];
			}
		}
		void single(int nosgl)
		{
			if(nosgl>=singleroom)
			{
				rtotal-=singleroom*rprice[hotelc-1];
				singleroom=0;
			}
			else
			{
				singleroom-=nosgl;
				rtotal-=nosgl*rprice[hotelc-1];
			}
		}
		int ret_sgl()
		{
			return singleroom;
		}
		int ret_dbl()
		{
			return doubleroom;
		}
		friend void hotelchanges(hotel &a);
};
void hotelchanges(hotel &a)
{
   	char choice;
   	int k=1;
   	while(k!=0)
   	{
    	system("cls");
    	cout<<"\n\t\t\tselect service\n\t\t\t1 : cancel room\n\t\t\t2 : book room\n\t\t\tp : Proceed\n";
    	cin>>choice;
      	switch(choice)
     	{
         	case '1':
                cout<<"\n\t\t\tCANCEL ROOM";
                a.cancelroom();
                break;
         	case '2':
                cout<<"\n\t\t\tBOOK ROOM";
                a.bookroom();
                break;
         	case 'p':
                k=0 ;
                break;
         	case 'P':
                k=0 ;
                break;
         	default :
                cout<<"\n\t\t\terror in choice";
                break;
      	}
   	}
   	system("cls");
   	cout<<"\n\n\n\n\n\n\n";
   	cout<<setw(43)<<"loading";
   	Sleep(1000);
   	cout<<" .";
   	Sleep(1400);
   	cout<<" .";
   	Sleep(1500);
   	cout<<" .";
   	system("cls");
}
class transport : virtual public holiday
{
	int transportm, pricet[10] = { 0,12000,8627,6913,2667,1720,1350,7521,4600,3350 };
    int nop;
    int total;
public:
	int k=1;
	int ret_nop()
	{
		return nop;
	}
	void choosetransport()
	{
		int choice;
		char x;
		if (ret_dest() == 1)
		{
			while (k!=0)
			{
				system("cls");
				cout<<"\n\n\t\t\tMODE OF TRANSPORT"<<setw(26)<<"PRICE\n";
				cout<<"\n\t\t\t1 : Airways"<<setw(26)<<"rs."<<setw(6)<<" 12000";
				cout<<"\n\t\t\t2 : Railways"<<setw(25)<<"rs."<<setw(6)<<" 8627";
				cout<<"\n\t\t\t3 : Bus"<<setw(30)<<"rs."<<setw(6)<<" 6913";	
				cout<<"\n\t\t\tenter your choice : ";
				cin>>choice;
				switch (choice)
				{
				case 1:
					cout << "\n\t\t\tyou have chosen to travel by flight\n\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
					cin >> x;
					if (x == 'Y' || x == 'y')
					{
						system("cls");
						cout<<"\n\t\t\tEnter the number of tickets to be booked:";
						cin>>nop;
						for(int i=0;i<nop;i++)
						{
							cout<<"\n\n\t\t\tticket : "<<i+1;
						   	bookairway();	
						}
						transportm = 1;
						k=0 ;
						break;
					}
					else
					break;
				case 2:
					cout << "\n\t\t\tyou have chosen to travel by train\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
					cin >> x;
					if (x == 'Y' || x == 'y')
					{
						system("cls");
						cout<<"\n\t\t\tEnter the number of tickets to be booked:";
						cin>>nop;
						for(int i=0;i<nop;i++)
						{
							cout<<"\n\n\t\t\tticket : "<<i+1;
						   	bookrailway();	
						}
						transportm = 2;
						k=0 ;
						break;
					}
					else
					break;
				case 3:
					cout << "\n\t\t\tyou have chosen to travel by bus\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
					cin >> x;
					if (x == 'Y' || x == 'y')
					{
						system("cls");
						cout<<"\n\t\t\tEnter the number of tickets to be booked:";
						cin>>nop;
						for(int i=0;i<nop;i++)
						{
							cout<<"\n\n\t\t\tticket : "<<i+1;
						   	bookbus();	
						}
						transportm = 3;
						k=0 ;
						break;
					}
					else
					break;
				default:
					cout << "\n\t\t\tinvalid choice\n\t\t\tplease re-enter choice\n";
					break;
				}
			}
			system("cls");
		}
		else
		{
			if (ret_dest() == 2)
			{
				while (k!=0)
				{
					system("cls");
			    	cout<<"\n\n\t\t\tMODE OF TRANSPORT"<<setw(26)<<"PRICE\n";
				    cout<<"\n\t\t\t1 : Airways"<<setw(26)<<"rs."<<setw(6)<<"2667";
					cout<<"\n\t\t\t2 : Railways"<<setw(25)<<"rs."<<setw(6)<<"1720";
					cout<<"\n\t\t\t3 : Bus"<<setw(30)<<"rs."<<setw(6)<<"1350";
					cout << "\n\t\t\tenter your choice : ";
					cin>>choice;
					switch (choice)
					{
					case 1:
						cout << "\n\t\t\tyou have chosen to travel by flight\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
							   	bookairway();	
							}
							transportm = 4;
							k=0 ;
							break;
						}
						else
						break;
					case 2:
						cout << "\n\t\t\tyou have chosen to travel by train\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
						   		bookrailway();	
							}
							transportm = 5;
							k=0 ;
							break;
						}
						else
						break;
					case 3:
						cout << "\n\t\t\tyou have chosen to travel by bus\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
						   		bookbus();	
							}
							transportm = 6;
							k=0 ;
							break;
						}
						else
						break;
					default:
						cout << "\n\t\t\tinvalid choice\n\t\t\tplease re-enter choice\n";
						break;
					}
				}
				system("cls");
			}
			else
			{
				while (k!=0)
				{
					system("cls");
					cout<<"\n\n\t\t\tMODE OF TRANSPORT"<<setw(26)<<"PRICE\n";
				    cout<<"\n\t\t\t1 : Airways"<<setw(26)<<"rs."<<setw(6)<<"7521";
					cout<<"\n\t\t\t2 : Railways"<<setw(25)<<"rs."<<setw(6)<<"4600";
					cout<<"\n\t\t\t3 : Bus"<<setw(30)<<"rs."<<setw(6)<<"3350";
					cout << "\n\t\t\tenter your choice : ";
					cin>>choice;
					switch (choice)
					{
					case 1:
						cout << "\n\t\t\tyou have chosen to travel by flight\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
						   		bookairway();	
							}
							transportm = 7;
							k=0 ;
							break;
						}
						else
						break;
					case 2:
						cout << "\n\t\t\tyou have chosen to travel by train\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
						   		bookrailway();	
							}
							transportm = 8;
							k=0 ;
							break;
						}
						else
						break;
					case 3:
						cout << "\n\t\t\tyou have chosen to travel by bus\n\t\tenter Y to confirm\t\tenter N to select another mode of transport\n";
						cin >> x;
						if (x == 'Y' || x == 'y')
						{
							system("cls");
							cout<<"\n\t\t\tEnter the number of tickets to be booked:";
							cin>>nop;
							for(int i=0;i<nop;i++)
							{
								cout<<"\n\n\t\t\tticket : "<<i+1;
						   		bookbus();	
							}
							transportm = 9;
							k=0 ;
							break;
						}
						else
						break;
					default:
						cout << "\n\t\t\tinvalid choice\n\t\t\tplease re-enter choice\n";
						break;
					}
				}
				system("cls");
			}
		}
	}
	struct node
	{
		char name[20],pno[10],coachpos[10];
		int age;
		int ticketnum,seatnum;
		struct node *next;
		struct node *prev;
	};
	struct node *heada=NULL;
	void bookrailway()
	{ 
		static int rvar=1234;
		int k=rvar,a;
	  	struct node *temp;
	  	struct node *newnode;
	  	newnode=new struct node;
	  	newnode->prev = NULL;
		newnode->next = NULL;
	  	cout<<"\n\t\t\tenter name:";
	  	cin>>newnode->name;
	  	cout<<"\t\t\tenter coach position(2A \\ 1A \\ SL):";
	  	cin>>newnode->coachpos;
	  	newnode->ticketnum=rvar;
	  	a=k%10;
	  	k=k/10;
	  	a=(k%10)*10+a;
	  	newnode->seatnum=a;
	  	rvar++;
		temp=heada;
	    if(heada==NULL)
		{
	  		heada=newnode;
		}
		else if (temp->next == NULL)
		{
	  		temp->next = newnode;
		}
		else
		{
			while(temp->next!=NULL)
		 	{
  				temp=temp->next;
  			}
  			temp->next=newnode;
  			newnode->prev=temp;
		}
	}
	struct node *headb=NULL;
	void bookairway()
	{
		static int avar=1234;
		int k=avar,a;
		struct node *temp;
  		struct node *newnode;
  		newnode=new struct node;
  		newnode->prev = NULL;
		newnode->next = NULL;
  		cout<<"\n\t\t\tenter name : ";
  		cin>>newnode->name;
  		cout<<"\t\t\tenter passport number : ";
  		cin>>newnode->pno;
  		newnode->ticketnum=avar;
	  	a=k%10;
	  	k=k/10;
	  	a=(k%10)*10+a;
	  	newnode->seatnum=a;
	  	avar++;
  		temp=headb;
   		if(headb==NULL)
		{
  			headb=newnode;
		}
		else 
		if (temp->next == NULL)
		{
  			temp->next = newnode;
		}
		else
		{
  			while(temp->next!=NULL)
  			{
  				temp=temp->next;
  			}
  			temp->next=newnode;
  			newnode->prev=temp;
		}
	}
	struct node *headc=NULL;
	void bookbus()
	{
		static int bvar=1234;
	  	struct node *temp;
	  	struct node *newnode;
	  	newnode=new struct node;
	  	newnode->prev = NULL;
		newnode->next = NULL;
	  	cout<<"\n\t\t\tEnter Name : ";
	  	cin>>newnode->name;
	  	cout<<"\t\t\tEnter Age : ";
	  	cin>>newnode->age;
	  	newnode->ticketnum=bvar;
	  	bvar++;
	 	temp=headc;
	  	if(headc==NULL)
		{
			headc=newnode;
		}
		else 
		if (temp->next == NULL)
		{
			temp->next = newnode;
		}
		else
		{
	    	while(temp->next!=NULL)
	  		{
	  			temp=temp->next;
	  		}
	  		temp->next=newnode;
	  		newnode->prev=temp;
		}
	}
	void cancelrailway()
	{
 		int del_tnum;
   		struct node *temp,*ptr;
   		ptr=heada;
   		temp=heada->next;
	    cout<<"\n\t\t\tenter the ticket number to be deleted";
	    cin>>del_tnum;
	    if(heada->ticketnum==del_tnum)
 		{
   			heada=heada->next;
   			heada->prev = NULL;
   			delete ptr;
   			return;
   		}
   		while(temp->ticketnum!=del_tnum && temp->next!=NULL)
   		{
   			temp=temp->next;
   			ptr=ptr->next;
   		}
   		if(temp->next==NULL && temp->ticketnum==del_tnum)
   		{
   			ptr->next=NULL;
   			delete temp;
   			return;
   		}
   		ptr->next=temp->next;
   		temp->next->prev=ptr;
   		delete temp;
	}
	void cancelairway()
	{
   		int del_tnum;
   		struct node *temp,*ptr;
   		ptr=headb;
   		temp=headb->next;
	   	cout<<"\n\t\t\tenter the ticket number to be deleted";
	   	cin>>del_tnum;
	   	if(headb->ticketnum==del_tnum)
	   	{
	   		headb=headb->next;
	   		headb->prev = NULL;
	   		delete ptr;
	   		return;
	   	}
	   	while(temp->ticketnum!=del_tnum && temp->next!=NULL)
	   	{
	   		temp=temp->next;
	   		ptr=ptr->next;
	   	}
	   	if(temp->next==NULL && temp->ticketnum==del_tnum)
	   	{
   			ptr->next=NULL;
   			delete temp;
   			return;
   		}
   		ptr->next=temp->next;
   		temp->next->prev=ptr;
   		delete temp;
	}
	void cancelbus()
	{
		int del_tnum;
	   	struct node *temp,*ptr;
	   	ptr=headc;
	   	temp=headc->next;
	   	cout<<"\n\t\t\tenter the ticket number to be deleted";
		cin>>del_tnum;
		if(headc->ticketnum==del_tnum)
		{
			headc=headc->next;
			headc->prev = NULL;
		   	delete ptr;
		   	return;
		}
		while(temp->ticketnum!=del_tnum && temp->next!=NULL)
		{
		   	temp=temp->next;
		   	ptr=ptr->next;
		}
		if(temp->next==NULL && temp->ticketnum==del_tnum)
		{
		   	ptr->next=NULL;
		   	delete temp;
		   	return;
		}
		ptr->next=temp->next;
		temp->next->prev=ptr;
		delete temp;
	}
	void displayrailway()
	{
		struct node *temp;
		temp=heada;
		while(temp!=NULL)
		{      
			cout<<"\n\tticket number : "<<temp->ticketnum;
			cout<<"\t\tseat number : "<<temp->seatnum;
			cout<<"\n\tname : "<<temp->name;
            cout<<"\n\tcoach position : "<<temp->coachpos;
			cout<<"\n\tboarding point : GOA";
            cout<<"\t\tdestination point : ";
            if(ret_dest()==1)
			{
				cout<<"srinagar\n";
			}
			if(ret_dest()==2)
			{
				cout<<"mumbai\n";
			}
			if(ret_dest()==3)
			{
				cout<<"jaipur\n";
			}
			cout<<"\t-------------------------------------------------";
    		temp=temp->next;
		}
	}
	void displayairway()
	{
		struct node *temp;
		temp=headb;
		while(temp!=NULL)
		{   	
			cout<<"\n\tticket number : "<<temp->ticketnum;
			cout<<"\t\tseat number : "<<temp->seatnum;
			cout<<"\n\tname : "<<temp->name;
            cout<<"\n\tpassport number : "<<temp->pno;
			cout<<"\n\tboarding point : GOA";
        	cout<<"\t\tdestination point : ";
        	if(ret_dest()==1)
			{
				cout<<"srinagar\n";
			}
			if(ret_dest()==2)
			{
				cout<<"mumbai\n";
			}
			if(ret_dest()==3)
			{
				cout<<"jaipur\n";
			}
			cout<<"\t-------------------------------------------------";
	        temp=temp->next;
		}
	}
	void displaybus()
	{
		struct node *temp;
		temp=headc;
		while(temp!=NULL)
		{   
		    cout<<"\n\tticket number : "<<temp->ticketnum;
		    cout<<"\t\tbus number : GA-12-4008";
			cout<<"\n\tname : "<<temp->name;
			cout<<"\n\tboarding point : GOA";
		    cout<<"\t\tdestination point : ";
		    if(ret_dest()==1)
			{
				cout<<"srinagar\n";
			}
			if(ret_dest()==2)
			{
				cout<<"mumbai\n";
			}
			if(ret_dest()==3)
			{
				cout<<"jaipur\n";
			}
			cout<<"\t-------------------------------------------------";
			temp=temp->next;
		}
	}
	int ret_transport()
	{
		return transportm;
	}
	int transporttotal()
	{
		int total;
		int i = ret_transport();
		total = nop*pricet[i] * 2;
		return total;
	}
	int trsimple()
	{
		int x;
		if(transportm==1||transportm==4||transportm==7)
		x=1;
		if(transportm==2||transportm==5||transportm==8)
		x=2;
		if(transportm==3||transportm==6||transportm==9)
		x=3;
		return x;
	}
	void bookticket()
	{
		int n,i;
		cout<<"\n\t\t\tenter number of tickets to be booked\n";
		cin>>n;
		for(i=0;i<n;i++)
		{
			switch(trsimple())
			{
				case 1 :
					bookairway();
					break;
				case 2 :
					bookrailway();
					break;
				case 3 :
					bookbus();
					break;
				default :
					cout<<"\n\t\t\terror";
					break;
			}
		}
		system("cls");
		nop+=n;
		cout<<"\n\n\t\t\tBOOKED TICKETS\n";
		cout<<"-------------------------------------------------";
		if(trsimple()==1)
        {
       	   	displayairway();
		}	
        if(trsimple()==2)
        {
            displayrailway();
        }
		if(trsimple()==3)  
        {  
            displaybus();
        }
        Sleep(1000);
        int co;
        cout<<"\n\t\t\tenter 1 to proceed";
        cin>>co;
	}
	void cancelticket()
	{
		int n,i,co;
		cout<<"\n\n\t\t\tBOOKED TICKETS\n";
		cout<<"\t-------------------------------------------------";
        if(trsimple()==1)
        {
       	   	displayairway();
		}	
        if(trsimple()==2)
        {
            displayrailway();
        }
		if(trsimple()==3)  
        {  
            displaybus();
        }
		cout<<"\n\t\t\tenter number of tickets to be canceled\n";
		cin>>n;
		if(n<nop)
		{
			for(i=0;i<n;i++)
			{
				switch(trsimple())
				{
					case 1 :
						cancelairway();
						break;
					case 2 :
						cancelrailway();
						break;
					case 3 :
						cancelbus();
						break;
					default :
						cout<<"\n\t\t\terror";
						break;
				}
			}
			nop-=n;
		}
		else
		{
			for(i=0;i<nop;i++)
			{
				switch(trsimple())
				{
					case 1 :
						cancelairway();
						break;
					case 2 :
						cancelrailway();
						break;
					case 3 :
						cancelbus();
						break;
					default :
						cout<<"\n\t\t\terror";
						break;
				}
			}
			nop=0;
		}
		system("cls");
		cout<<"\n\n\t\t\tBOOKED TICKETS\n";
		cout<<"\t-------------------------------------------------";
		if(trsimple()==1)
        {
       	   	displayairway();
		}	
        if(trsimple()==2)
        {
            displayrailway();
        }
		if(trsimple()==3)  
        {  
            displaybus();
        }
        Sleep(1000);
        cout<<"\n\t\t\tenter 1 to proceed";
        cin>>co;
	}
	friend void transportchanges(transport &a);
};
void transportchanges(transport &a)
{
   	char choice;
   	int k=1;
   	while(k!=0)
   	{
        system("cls");
        cout<<"\n\t\t\tselect service\n\t\t\t1 : cancel ticket\n\t\t\t2 : book ticket\n\t\t\tp : Proceed";
        cin>>choice;
        switch(choice)
        {
            case '1':
                cout<<"\n\t\t\tCANCEL TICKET";
                a.cancelticket();
                break;
            case '2':
                cout<<"\n\t\t\tBOOK TICKET";
                a.bookticket();
                break;
            case 'p':
                k=0 ;
                break;
            case 'P':
                k=0 ;
                break;
            default :
                cout<<"\n\t\t\terror in choice";
                break;
        }
   	}
   	system("cls");
   	cout<<"\n\n\n\n\n\n\n";
   	cout<<setw(43)<<"loading";
   	Sleep(1000);
   	cout<<" .";
   	Sleep(1400);
   	cout<<" .";
   	Sleep(1500);
   	cout<<" .";
   	system("cls");
}	
class bill : public hotel, public transport, public userdetails
{
	int servicecharge, totalcost, additional,choice[8] = { 0,0,0,0,0,0,0,0 },sprice[8] = { 0,2000,3500,500,500,2000,1200,1500};
public:
	int noa;
	char servicechoice;
	bill()
	{
		servicecharge = 500;
		totalcost = 0;
		additional = 0;
	}
	void addons()
	{
		int i;
		cout << "\n\t\tADDITIONAL SERVICES" << setw(69) << "PRICE\n";
		cout << "\n\t\t1. tours:" << setw(28) << "half day" << setw(57) << "rs. 2000\n\t\t2. " << setw(34) << "full day" << setw(51) << "rs. 3500";
		cout << "\n\t\t3. laundry Service" << setw(70) << "rs.  500";
		cout << "\n\t\t4. Dry Cleaning" << setw(73) << "rs.  500";
		cout << "\n\t\t5. Vehicle Rental:" << setw(14) << "Car" << setw(62) << "rs. 2000\n\t\t6. " << setw(30) << "Bike" << setw(55) << "rs. 1200";
		cout << "\n\t\t7. Shuttle Service to nearest airport/railway station/bus stops" << setw(25) << "rs. 1500";
		cout << "\n\n\t\t\tselect additional services?\n\t\t\tY : yes\t\tN : no\n";
		cin>>servicechoice;
		if(servicechoice=='y'||servicechoice=='Y')
		{
			cout << "\n\t\t\thow many additional services do you require : ";
			cin >> noa;
			cout << "\n\t\t\tenter service number(s)\n";
			for (i = 1;i <= noa;i++)
				cin >> choice[i];
			for (i = 1;i <= noa;i++)
				switch (choice[i])
				{
					case 1:
						additional += sprice[1];
						break;
					case 2:
						additional += sprice[2];
						break;
					case 3:
						additional += sprice[3];
						break;
					case 4:
						additional += sprice[4];
						break;
					case 5:
						additional += sprice[5];
						break;
					case 6:
						additional += sprice[6];
						break;
					case 7:
						additional += sprice[7];
						break;
					default:
						cout << "\n\t\t\terror in choice . no service number : " << choice[i];
						break;
				}
		}
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<setw(43)<<"loading";
		Sleep(500);
		cout<<" .";
		Sleep(600);
		cout<<" .";
		Sleep(600);
		cout<<" .";
		system("cls");
	}
	void operator +()
	{
		totalcost=servicecharge+additional;
	}
	void hotelbilling()
	{
		int i;
		system("cls");
		cout<<"\n\n\n"<<setw(46)<<"HOTEL BILL\n"<<setw(47)<<"--------------";
		cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
		cout<<"\n\n\n";
		if(ret_hotel()==1)
	   	{
	   		cout<<setw(46)<<"OPERA INN\n";
		}
		if(ret_hotel()==2)
	   	{
	   		cout<<setw(49)<<"VIVANTA DAL VIEW\n";
		}
		if(ret_hotel()==3)
	   	{
	   		cout<<setw(57)<<"FOUR POINTS BY SHERATON SRINAGAR\n";
		}
		if(ret_hotel()==4)
	   	{
	   		cout<<setw(52)<<"TRIDENT NARIMAN POINT\n";
		}
		if(ret_hotel()==5)
	   	{
	   		cout<<setw(54)<<"FOUR SEASONS HOTEL MUMBAI\n";
		}
		if(ret_hotel()==6)
	   	{
	   		cout<<setw(50)<<"WATERSTONES HOTEL\n";
		}
		if(ret_hotel()==7)
	   	{
	   		cout<<setw(47)<<"UMAID BHAWAN\n";
		}
		if(ret_hotel()==8)
	   	{
	   		cout<<setw(48)<<"HILTON JAIPUR\n";
		}
		if(ret_hotel()==9)
	   	{
	   		cout<<setw(47)<<"HOTEL KALYAN\n";
		}
		cout<<"\n"<<setw(49)<<"Customer Details\n";
	   	cout<<setw(51)<<"********************\n";
	   	showdata();
	   	cout<<"\n\n"<<setw(50)<<"Reservation Details\n";
	   	cout<<setw(52)<<"***********************\n";
	   	cout<<"\n\tcheck in date : ";
		ret_ddate();
	   	cout<<"\t\tcheck out date : ";
		calc_rdate();
		cout<<"\n\n\t\trooms booked : ";
		if(singleroom>0)
		{
			cout<<"\n\t\tsingle room : "<<setw(32)<<ret_sgl();
			cout<<"\n\t\tPrice of single room per night : "<<setw(15)<<ret_sprice();
		}
		if(doubleroom>0)
		{
			cout<<"\n\t\tdouble room : "<<setw(32)<<ret_dbl();
			cout<<"\n\t\tPrice of double room per night : "<<setw(15)<<ret_dprice();
		}
	   	cout<<"\n\n"<<setw(49)<<"Total Amount Due : "<<setw(15)<<hoteltotal();
	   	cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
		int co;
        cout<<"\n\n\n\t\t\tenter 1 to proceed";
        cin>>co;
	}
	void transportbilling()
	{
		int i;
		cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
		cout<<"\n\n\n"<<setw(48)<<"TRANSPORT BILL\n"<<setw(48)<<"----------------";
		cout<<"\n\n\n";
	   	cout << "\n\t\tdeparture Date:\t\t";
		ret_ddate();
	   	cout << "\n\t\tReturn Date:\t\t";
		calc_rdate();
	   	cout<<"\n\t\tfrom : GOA"<<"\t\tto : ";
        if(ret_dest()==1)
		{
			cout<<"srinagar\n";
		}
		if(ret_dest()==2)
		{
			cout<<"mumbai\n";
		}
		if(ret_dest()==3)
		{
			cout<<"jaipur\n";
		}
        cout<<"\n\n\t\t***Tickets Booked***\n\n";
        cout<<"\t-------------------------------------------------";
        if(trsimple()==1)
        {
       	   	displayairway();
		}	
        if(trsimple()==2)
        {
            displayrailway();
        }
		if(trsimple()==3)  
        {  
            displaybus();
        }
		cout<<"\n\n\t\t\tTotal Amount :"<<setw(7)<<transporttotal();
		cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
		int co;
        cout<<"\n\n\n\t\t\tenter 1 to proceed";
        cin>>co;
	}
	void billing()
	{
		int i;
		system("cls");
		cout<<"\n\n\n"<<setw(47)<<"AGENCY BILL\n"<<setw(47)<<"-------------";
		cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
		cout<<"\n\n\n";
		cout<<setw(47)<<"THE TRAVEL BUG"<<endl<<endl;
		cout<<"\n"<<setw(49)<<"Customer Details\n";
	   	cout<<setw(51)<<"********************\n";
		showdata();
		cout<<"\n\n\tdestination : ";
		if(ret_dest()==1)
		{
			cout<<"srinagar\n";
		}
		if(ret_dest()==2)
		{
			cout<<"mumbai\n";
		}
		if(ret_dest()==3)
		{
			cout<<"jaipur\n";
		}
		cout<<"\tfrom : ";
		ret_ddate();
		cout<<"\t\t\tto : ";
		calc_rdate();
		if(servicechoice=='y'||servicechoice=='Y')
		{
			cout<<"\n\n\tadditional services :\n";
			for(i=1;i<=noa;i++)
			{
				if(choice[i]==1)
				{
					cout << "\n\ttours:" << setw(28) << "half day" << setw(55) << "rs. 2000";
				}
				if(choice[i]==2)
				{
					cout << "\n\ttours:" << setw(28) << "full day" << setw(55) << "rs. 3500";
				}
				if(choice[i]==3)
				{
					cout << "\n\tlaundry Service:" << setw(73) << "rs.  500";
				}
				if(choice[i]==4)
				{
					cout << "\n\tDry Cleaning:" << setw(76) << "rs.  500";
				}
				if(choice[i]==5)
				{
					cout<<"\n\tVehicle Rental:" << setw(14) << "Car" << setw(60) << "rs. 2000";
				}
				if(choice[i]==6)
				{
					cout<<"\n\tVehicle Rental:" << setw(15) << "Bike" << setw(59) << "rs. 1200";
				}
				if(choice[i]==7)
				{
					cout <<"\n\tShuttle Service to nearest airport/railway station/bus stops:" << setw(28) << "rs. 1500";
				}
			}
			cout<<"\n\n\tadditional service total : "<<setw(58)<<"rs. "<<additional;
		}
		cout<<"\n\n\tservice charge : "<<setw(69)<<"rs.  "<<servicecharge;
		cout<<"\n\n"<<setw(82)<<"total : "<<setw(11)<<"rs. "<<totalcost;
		cout<<"\n\n\n";
		for(i=0;i<40;i++)
		cout<<"<";
		for(i=0;i<40;i++)
		cout<<">";
	}
	~bill()
	{
		
	}
};
int main()
{
	char choice1,choice2,choice3;
	int k=1,v=0,i=0;
	bill a;
	cout<<"\n\n\n\n";
	for(i=0;i<40;i++)
	cout<<"<";
	for(i=0;i<40;i++)
	cout<<">";
	cout<<"\n\n\n\n"<<setw(49)<<"THE TRAVEL BUG\n\n"<<setw(55)<<"Here To Get You There\n\n\n\n"<<setw(47)<<"welcome\n\n\n";
	for(i=0;i<40;i++)
	cout<<"<";
	for(i=0;i<40;i++)
	cout<<">";
	Sleep(3000);
	system("cls");
	a.getdata();
	a.getinfo();
	a.destination();
	a.selecthotel();
	a.bookroom();
	system("cls");
	cout<<"\n\n\n\t\t\tbook transport?\n\t\t\ty: yes     n: no\n";
	cin>>choice1;
	if(choice1=='y'||choice1=='Y')
	{
		a.choosetransport();
	}
	a.hotelbilling();
	if(choice1=='y'||choice1=='Y')
	{
		a.transportbilling();
	}
	cout<<"\n\n\n\t\tenter P to proceed\t\t  enter M to make changes\n";
	cin>>choice2;
	system("cls");
	if(choice2=='m'||choice2=='M')
	{
		while(k!=0)
		{
			cout<<"\n\t\t\tselect service \n\t\t\tH : hotel";
			if(choice1=='y'||choice1=='Y')
			{
				cout<<"\n\t\t\tT : transport\n\t\t\tP : Proceed\n";
			}
			else
			{
				cout<<"\n\t\t\tP : Proceed\n";
			}
			cin>>choice3;
			switch(choice3)
			{
				case 'H':
					hotelchanges(a);
					a.hotelbilling();
					break;
				case 'h':
					hotelchanges(a);
					a.hotelbilling();
					break;
				case 'T':
					transportchanges(a);
					a.transportbilling();
					break;
				case 't':
					transportchanges(a);
					a.transportbilling();
					break;
				case 'P':
					cout<<"\n\t\t\tchanges made\n";
					k=0;
					break;
				case 'p':
					cout<<"\n\t\t\tchanges made\n";
					k=0;
					break;
				default :
					cout<<"\n\t\t\terror in choice\n";
					break;
			}
			system("cls");
		}
	}
	a.addons();
	cout<<"\n\n\n\n\n";
	cout<<setw(45)<<"CHECKOUT\n";
	+a;
	cout<<"\n\n\n";
	cout<<setw(43)<<"loading";
	Sleep(1000);
	cout<<" .";
	Sleep(1400);
	cout<<" .";
	Sleep(1500);
	cout<<" .";
	system("cls");
	a.billing();
	cout<<"\n\n\t\t\tenter 1 to proceed\n";
	cin>>v;
	system("cls");
	cout<<"\n\n\n\n\n\n";
	for(i=0;i<40;i++)
	cout<<"<";
	for(i=0;i<40;i++)
	cout<<">";
	cout<<"\n\n"<<setw(67)<<"thank you for booking with us. have a lovely holiday\n\n";
	for(i=0;i<40;i++)
	cout<<"<";
	for(i=0;i<40;i++)
	cout<<">";
	getch();
	return 0;
}

