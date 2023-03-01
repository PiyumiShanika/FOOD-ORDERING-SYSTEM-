
#include <iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
using namespace std;
class Ordering
{


public:
	void menu1()
	{
	     system("COLOR 17");
	 cout<<"\n\n     ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n                     =====START YOUR ORDER====="<<endl;
	cout<<"\n\n[1] Veggie Supreme (Rs.480)           [2] Exotica Pizza(Rs.440)\n\n";
	cout<<"[3] Chicken Sizzler (Rs.580)          [4] Chrispy Chicken (Rs.520)\n\n";
	cout<<"[5] Spaghetti (Rs.350)                [6] Country Feast (Rs.400)\n\n";
	cout<<"[7] Tetrazzini (Rs.420)               [8] Double Cheese (Rs.540)\n\n";
	cout<<"[9] Makizushi (Rs.548)                [10] Ham Burger (Rs.390)\n\n";
	cout<<"[11] Margherita Pizza(Rs.525)         [12] Fish 'n' Chips (Rs.425)\n\n";
	cout<<"[13] Fajitas (Rs.335)                 [14] Tempura (Rs.324)\n\n";
	cout<<"[15] Hot Dog (Rs.360)                 [16] EXIT"<<endl;


 }


};
class Bill: public Ordering
{
public:
    int OrderNum ,Want,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,tot=0,CCnum;
    string yaa,yee,f_name,l_name,Daddress,email;
public:
    void next()
    {
        label1:

      cout<<"\n\n    ENTER YOUR ORDER (one order at a time):   ";
      cin>>OrderNum;
      cout<<"\n\n    DO YOU WANT TO UPDATE YOUR ORDER(Y/N):";
      cin>>yaa;
      if(yaa=="Y"||yaa=="y")
      {
          goto label1;
      }

        else
  {
   switch(OrderNum)
   {
   	case 1:
   	        cout<<"YOU ORDER  Veggie Supreme : 480";
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>Want;
   		a=480;
   		tot=tot+a*Want;
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 2:
   	    cout<<"YOU ORDER  Exotica : 440";
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>Want;
        b=440;
   		tot=tot+b*Want;
   		cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 3:
        cout<<"YOU ORDER  Chicken Sizzler : 580";
        cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>Want;
   		c=580;
   		tot=tot+c*Want;
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 4:
        cout<<"YOU ORDER  Chrispy Chicken : 520";
        cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>Want;
   		d=520;
   		tot=tot+d*Want;
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 5:
   	    cout<<"YOU ORDER  Spaghetti : 350";
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>Want;
        e=350;
   		tot=tot+e*Want;
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 6:
        cout<<"YOU ORDER Country Feast : 400";
        cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>Want;
   		f=400;
   		tot=tot+f*Want;

   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 7:
        cout<<"YOU ORDER Tetrazzini : 420";
	    cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>Want;
   		g=420;
   		tot=tot+g*Want;
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 8:
        cout<<"YOU ORDER Double Cheese : 540";
		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>Want;
   		h=540;
   		tot=tot+h*Want;

   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

	case 9:
        cout<<"YOU ORDER Makizushi : 548";
        cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>Want;
		i=548;
		tot=tot+i*Want;

   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 10:
        cout<<"YOU ORDER Ham Burger : 390";
    	cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		cin>>Want;
        j=390;
   		tot=tot+j*Want;

   	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 11:
        cout<<"YOU ORDER Margherita : 525";
        cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>Want;
   		k=525;
   		tot=tot+k*Want;

   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 12:
        cout<<"YOU ORDER Fish 'n' Chips : 425";
    	cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>Want;
   		l=425;
   		tot=tot+l*Want;
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 13:
        cout<<"YOU ORDER  Fajitas  : 335";
    	cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>Want;
   		m=335;
   		tot=tot+m*Want;
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 14:
        cout<<"YOU ORDER Tempura : 324";
    	cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>Want;
        n=324;
   		tot=tot+n*Want;

   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 15:
        cout<<"YOU ORDER  Hot Dog : 360";
    	cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>Want;
   		o=360;
   		tot=tot+o*Want;

   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;

   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto label1;
   		break;
   } }
      cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>yee;
   if(yee=="yes"||yee=="YES")
   {

   	goto label1;
   }

     system("CLS");
     system("COLOR F1");

                        cout<<"\n\n             Enter Customer first Name:\n\t\t\t\t\t";        //customer info
                        cin>>f_name;
                        cout<<"\n             Enter Customer last Name:\n\t\t\t\t\t";
                        cin>>l_name;
                        cout<<"\n            Delivery Address:\n\t\t\t\t";
                        cin>>Daddress;
                        cout<<"\n             Customer Contact Number:\n\t\t\t\t\t";
                        cin>>CCnum;
                        cout<<"\n             Enter  customer email:\n\t\t\t\t\t";
                        cin>>email;
                        ofstream file1("cus_details");
                        file1<<f_name<<endl;
                        file1<<l_name<<endl;
                        file1<<Daddress<<endl;
                        file1<<CCnum<<endl;
                        file1<<email<<endl;
                        //input fille
            system("PAUSE");
            //calculate

                       system("CLS");
						cout << "\n\n              ==============================================";
						cout << "\n                        Food Ordering System             "<<endl;  //output fill
						cout << "              =============================================="<<endl;
						cout << endl;

						cout<<"\n\n                  YOUR TOTAL BILL IS Rs. "<<tot<<"/="<<endl; //out put fille
						file1<<tot<<endl;
						file1.close();


						cout << "\n\n\n                                              Bill No : CP51     \n                                                      Order : NB1353";
						cout << endl;
						cout << "\t\t\t\t\t\t\t    Cashier :  Shanika"<<endl;
						cout << endl;
                        cout <<"\t\t\tDelivery Charge Available\n\n";
                        cout <<"\t\t\t  Your Order Reserved\n\n";
                        cout <<"\t\t\t      Thank You!\n\n";
                        cout <<"\t\t\t*******Come Again!*******";
						cout << "\n             ================================================"<<endl;





  }
    void locat()
    {
        menu1();
        next();
    }

};
class Start:public Ordering,public Bill
{
public:
int ch;
    string cous,USID,Pwrd;

    void sta()
    {
         system("COLOR 80");
           tab1:
    cout<<"\n\n\t   ####### WELCOME TO OUR ONLINE ORDERING SYSTEM #######";
    cout<<"\n\n\t\t        Are you new Coustomer(Y/N):";
    cin>>cous;
    if(cous=="Y" || cous=="y")
{
cout<<"\n\n\t@@@@_ Make Sure to Remember the USERID and PASSWORD given by   \n\t\t us when you enter our system agin! _@@@@";
cout<<"\n\n\n\t\t    YOUR USERID=Newcou@21  \n \n\t\t    YOUR PASSWORD=Cos2021user\n\n\n\t  ###@- NOW YOU CAN LOGIN OUR ORDERING SYSTEM -@###\n\n\n\n\n\n\n\n";
       system("PAUSE");
        system("CLS");
         locat();
}
else
{
    cout<<"\n\n                        Enter your USERID: ";
    cin>>USID;
    cout <<"\n\n                        Enter your PASSWORD: ";
    ch=getch();
    while(ch!=13)
    {
        Pwrd.push_back(ch);
        cout<<"x";
        ch=getch();
    }
    if(USID=="Newcou@21"&&Pwrd=="Cos2021user")
       {

        cout<<"\n\n\n\t\t   @__CORRECT USEID  &  PASSWORD__@\n\n\t   ###@- NOW YOU CAN LOGIN OUR ORDERING SYSTEM -@###\n\n\n\n\n\n\n\n ";
        system("PAUSE");
        system("CLS");
        locat();
    }
    else
    {
         cout<<"\n\n\n\n \t                wrong PASSWORD or USERID \n";
         cout<< "\n\t              Check Your Password and Username";
         cout<<"\n\n\t\t            try agin leter! \n\n   \t\t\t\     Thank you!\n";
                system("PAUSE");
                system("CLS");
                goto tab1;
    }
  }
}
};
class show_details:public Bill
{
public:

    int f_details()
    {    system("PAUSE");
         system("CLS");
         system("COLOR 80");
        cout<<"\nYour oder summery "<<endl;
        ifstream f1("cus_details");
        ifstream f2("bill.txt");
        char cshn[20],bnum[20],onum[20];
        f1>>f_name;
        f1>>l_name;
        f1>>Daddress;
        f1>>CCnum;
        f1>>email;
        f1>>tot;
        f2>>cshn;
        f2>>bnum;
        f2>>onum;
        cout<<"01 - Customer Full name-:   "<<f_name<<" "<<l_name<<endl;
        cout<<"02 - Customer Address-:     "<<Daddress<<endl;
        cout<<"03 - Customer Email-:       "<<email<<endl;
        cout<<"04 - Customer Mobile Number "<<CCnum<<endl;
        cout<<"05 - Total Bill-:           "<<tot<<endl;
        cout<<"06 - Oder Number            "<<onum<<endl;
        cout<<"07 - Cashier-:              "<<cshn<<endl;
        cout<<"08 - Bill number-:          "<<bnum<<endl;
    }
};



class Catering
{
public:
    int gus ;
    string Evenname,Flname,connum;
     Catering()
    {

       }
       ~Catering()
       {

       }

        void cet()
    {
         system("CLS");
            system("COLOR F1");
        cout<<"\n\n\t\t***********************************************";
        cout<<"\n\t\t####### WELECOME TO OUR CATERING SEVICE #######";
        cout<<"\n\t\t***********************************************";
        cout<<"\n\t@@ Contact us to get your lunch and dinner for your ceremonies @@";
        cout <<"\n\n\n\n     Enter the Name of the Event:\n\t\t\t\t ";
        cin>>Evenname;
        cout <<"\n\n     Enter the Customer's First and Last Name:\n\t \t \t \t\t   ";
        cin>>Flname;
        cout<<"\n\n     Enter the Customer's Contact Number:\n\t\t\t\t\t ";
        cin>>connum;
    }
     void display()
    {
        cout<<"Come again!";
    }




};
class menus :public Catering
{ public:

	int  gus,dish,sum=0,numb=0;
     void menulist()
{
    cout <<"\n\n     Enter the Number of Guests: \n\t\t\t\t";
    cin>>gus;
    system("PAUSE");
    system("CLS");
                system("COLOR F0");

    cout<<"\n\n     Select You Want menu price range: \n\n\t\t\t\t         1)Menu 1: 2500/=  \n\n\t\t\t\t         2)Menu 2: 3000/=  \n\n\t\t\t\t         3)Menu 3:3800/=\n\n\t\t\t\t         4)Menu 4:4500/= \n\n\t\t\t\t         ";
    cin>>dish;
       system("CLS");
   switch(dish)
    {
    case 1:
                    system("COLOR 17");

        cout<<" \n\n\t\t   _____MENU 1_____ ";
        cout<<"\n\n\tVegetable  Soup         Red Rice  ";
        cout<<"\n\n\tNoodles                 Vegetable Fried Rice";
        cout<<"\n\n\tDhal                    Plain Kankun";
        cout<<"\n\n\tChicken Dewal           Fish curry";
        cout<<"\n\n\tVegetable Chopsy        Cashew Nut Curry";
        cout<<"\n\n\tChilli paste            Cutlet";
        cout<<"\n\n\tPapadam";
        cout<<"\n\n\t\t   _____Dessert_____\n\n\t     Ice Cream\n\n\t     Watalappam\n\n\t     Jelly\n\n\t     Friut Salad" ;
        sum=sum+2500*gus;
        break;
    case 2:
                            system("COLOR 17");

        cout<<"\n\n\t\t   _____MENU 2_____";
        cout<<"\n\n\tChicken & Sweet Corn Soup          Red Rice";
        cout<<"\n\n\tPlain Kankun                       Fish Curry";
        cout<<"\n\n\tCashew Nut Curry                   Mix Salad";
        cout<<"\n\n\thili Garlic-Kankun                 Button Mushroom";
        cout<<"\n\n\tChilli paste                       Cutlet";
        cout<<"\n\n\tPapadam";
        cout<<"\n\n\t\t   _____Dessert_____\n\n\t     Jelly with Ice Cream\n\n\t     Watalappam\n\n\t     Caramel Pudding\n\n\t     Chocolate Pudding\n\n\t     Friut Salad" ;
        sum=sum+3000*gus;
        break;
    case 3:
                            system("COLOR 17");

        cout<<"\n\n\t\t   _____MENU 3_____";
        cout<<"\n\n\tSea Food With Vegetable Soup          Ginger Rice";
        cout<<"\n\n\tChicken Buriyani                      Fish Curry";
        cout<<"\n\n\tGarlic Beans                          Potato Curry";
        cout<<"\n\n\tPepper Style Pork                     Chilli Paste";
        cout<<"\n\n\tVegetable Chopsy                      Mixed Vegetable saled";
        cout<<"\n\n\tCutlet                                Papadam";
        cout<<"\n\n\t\t   _____Dessert_____\n\n\t     Jelly with Ice Cream\n\n\t     Watalappam\n\n\t     Caramel Pudding\n\n\t     Chocolate Pudding\n\n\t     Friut Salad\n\n\t     Biscuit Pudding" ;
        sum=sum+3800*gus;

        break;
    case 4:
                            system("COLOR 17");

        cout<<"\n\n\t\t   _____MENU 4_____";
        cout<<"\n\nSea Food hot&Sour Soup              Red Rice" ;
        cout<<"\n\n\tSteamed rice                      Nasigoreng";
        cout<<"\n\n\tMixed Noodles                     Fish Curry";
        cout<<"\n\n\tGarlic Beans                      Potato Curry";
        cout<<"\n\n\tPepper Style Pork                 Chilli Paste";
        cout<<"\n\n\tVegetable Chopsy                  Mixed Vegetable saled";
        cout<<"\n\n\tcutlet                            Papadam";
        cout<<"\n\n     _____Dessert_____\n\n     Jelly with Ice Cream\n\n     Watalappam\n\n     Caramel Pudding\n\n     Chocolate Pudding\n\n     Friut Salad\n\n     Bread Pudding\n\n     Summer Pudding\n\n     Biscuit Pudding" ;
        sum=sum+4000*gus;

        break;
    default:
        cout<<"Your Choice Is Invalid  \n\n     Try Again";

        break;
    }
      cout<<"\n\n  Your Details Saved";


    system("PAUSE");
    system("CLS");

    system("COLOR F1");

    numb=sum+10000;

    cout<<"\n\n\t----------------------CAFE RESTAURANT---------------------\n";
    cout<<"\t=========================================================\n";
    cout<<"\t----------------------CATERING SEVICE---------------------\n";
    cout<<"\n\n\n         Plate Cost   = "<<sum;
    cout<<"\n\n\n         Sevice Charge =10000";
    cout<<"\n\n\n         Total Bill Amount="<<numb;
    cout<<"\n\n\t ___To Book Your Contact Us Through The Below Mobile Number";
    cout<<"\n\t            Fro More Details Visit Our Website ___";
    cout<<"\n\n\t\t\t\t Contact US : Website- WWW.CafeRestaurant.lk \n\t\t\t\t Number-041-2235460 ";
}
 void display()
    {
     cout<<"Thank for you!";
    }

};

int main()
{
system("COLOR 71");
int no;
class show_details s1;
Start S1;
menus M1;
Catering C1;
    cout<<"\n\n          ======================CAFE RESTAURANT=====================\n\n";
    cout<<"\n\n                          1) online ordering  \n\n\n                          2) catering sevice";
    cout<< "\n\n           Enter Option:";
    cin>>no;
    switch(no)
    {
    case 1:
        system("CLS");
        S1.sta();
        getch();
        s1.f_details();
        break;
    case 2:
        C1.cet();
        M1.menulist();
        break;
    default:
        cout<<"please enter your chooese agin:";
        break;

    }


    return 0;
}
