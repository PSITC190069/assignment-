#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string Customername;
    int customerId;
    int quantity;
    int item;
    double price;
    int total;
    string itemName;
    double amountPaid;
    double balance;
    double cost;
    char next;
    double totalCost;

    double const PRINTER_PRICE=300.00,
                 PHONE_PRICE=600.00,
                 TABLE_PRICE=50.00;

    const int printer=1,
              phone=2,
              table=3;
    //int choice;
    int vat=0.12;

    //ASK FOR NAME AND ID
   // cout<<"What is your name ?" <<endl; to
   // cin>>






    cout<<"WELCOME TO KSN SUPERMARKET"<<endl;
    cout << "Enter CustomerName" << endl;
    cin>> Customername;


   cout<<"Enter your ID number :"<<endl;
   cin>>customerId;
   cout<<"***************************************************************************"<<endl;

   do
   {

   cout<<"We have the following items in stock" <<endl;
   cout<<"1.PRINTER\n2.PHONE\n3.TABLE" <<endl;
   cout<<"Enter 1 for printer, 2 for phone and 3 for table "<<endl;
   cin>>item;

   switch(item)
   {

   case printer:
       {

       string itemName="PRINTER";
        cout<<"How many are you buying? "<<endl;
        cin>>quantity;
        price=PRINTER_PRICE*quantity;
        cout<<"The cost : GHS"<<price<<endl;
        vat=price*0.12;
        cout<<"The Vat amount : GHS" <<vat<<endl;
        total=(PRINTER_PRICE*quantity +vat);
        cout<<"The total cost : GHS"<<total<<endl;
        cout<<"Enter your total money in GHS" <<endl;
        cin>>amountPaid;

    if(amountPaid>total)
    {
        balance=amountPaid-total;
    }

    while(amountPaid<total)
    {
      cout<<"Your money is insufficient: The money should be equal to "<<total<< " or higher"<<endl;
      cin>>amountPaid;
    }

        balance=amountPaid-total;

        cout<<"******************************************************" <<endl;
        cout<<"KSN SUPERMARKET"<<endl;
        cout<<"******************************************************"<<endl;
        cout<<"RECEIPT INFORMATION" <<endl;
        cout<<"Customer's name : "<<Customername<<endl;
        cout<<"Unique ID : "<<customerId<<endl;
        cout<<"Item Bought : "<<itemName<<endl;
        cout<<"Quantity bought : "<<quantity<<endl;
        //cout<<"Cost of quantity : GHS"<<price<<endl;
        cout<<"Vat amount : GHS"<<vat<<endl;
        cout<<"Total Cost : GHS"<<total<<endl;
        cout<<"Total amount paid :GHS"<<amountPaid<<endl;
        //cout<<"Balance : GHS" <<balance<<endl;

        if (amountPaid>total)
        {
            cout<<"Balance : GHS"<<balance<<endl;
        }
    }
    break;
   //switch (item)
       case phone:
        {
        string itemName="PHONE";
        cout<<"How many are you buying? "<<endl;
        cin>>quantity;
        price=PHONE_PRICE*quantity;
        cout<<"The cost is GHS"<<price<<endl;
        vat=price*0.12;
        cout<<"The Vat amount is GHS" <<vat<<endl;
        total=(PHONE_PRICE*quantity +vat);
         cout<<"The total cost is GHS"<<total<<endl;
        cout<<"Enter your total money in GHS" <<endl;
        cin>>amountPaid;

          if (amountPaid>total)
    {balance=amountPaid-total;

    }

    if(amountPaid<total)
    {

        cout<<"Your money is insufficient: The money should be equal to "<<total<< " or higher"<<endl;
        cin>>amountPaid;
    }
        balance=amountPaid-total;




        cout<<"*******************************************************" <<endl;
        cout<<"KSN SUPERMARKET"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<"RECEIPT INFORMATION" <<endl;
        cout<<"Customer's name : "<<Customername<<endl;
        cout<<"Unique ID : "<<customerId<<endl;
        cout<<"Item Bought : "<<itemName<<endl;
        cout<<"Quantity bought : "<<quantity<<endl;
        cout<<"Vat amount : GHS"<<vat<<endl;
        cout<<"Total Cost : GHS"<<total<<endl;
        cout<<"Total amount paid :GHS"<<amountPaid<<endl;
        if(amountPaid>total)
        {
        cout<<"Balance : GHS" <<balance<<endl;
        }
    }




    break;
   // switch (item)
    case table:
        {
        string itemName="TABLE";
        cout<<"How many are you buying? "<<endl;
        cin>>quantity;
        price=TABLE_PRICE*quantity;
        cout<<"The cost is GHS"<<price<<endl;
        vat=price*0.12;
        cout<<"The Vat amount is GHS"<<vat<<endl;
        total=(TABLE_PRICE*quantity +vat);
        cout<<"The amount to be paid is GHS"<<total<<endl;
        cout<<"Enter your total money in GHS"<<endl;
        cin>>amountPaid;

    while(amountPaid<total)
    {
     cout<<"Your money is insufficient: The money should be equal to "<<total<< " or higher"<<endl;
     cin>>amountPaid;
    }

    balance=amountPaid-total;

     cout<<"*******************************************************" <<endl;
     cout<<"KSN SUPERMARKET"<<endl;
     cout<<"*******************************************************"<<endl;
        cout<<"RECEIPT INFORMATION" <<endl;
        cout<<"Customer's name : "<<Customername<<endl;
        cout<<"Unique ID: "<<customerId<<endl;
        cout<<"Item Bought : "<<itemName<<endl;
        cout<<"Quantity bought : "<<quantity<<endl;
        cout<<"Vat amount : GHS"<<vat<<endl;
        cout<<"Total Cost : GHS"<<total<<endl;
        cout<<"Total amount paid :GHS"<<amountPaid<<endl;
        if(amountPaid>total)
        {
        cout<<"Balance : GHS" <<balance<<endl;
        }

        cout<<"*******************************************************************"<<endl;
        }
   }

    cout<<"Do you want to buy any other item?"<<endl;
    cout<<"Enter 'y' or 'Y' for 'YES' or any key as 'NO' to quit"<<endl;
    cin>>next;

   }while(next=='y' || next=='Y');
    cout<<"***Thank you***"<<endl;

    return 0;
}
