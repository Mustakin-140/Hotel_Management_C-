#include <iostream>

using namespace std;

int main()
{
    int quantity;
    int choice;
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0,  Qshake = 0, Qchicken = 0;//Quantity
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0,  Sshake = 0, Schicken = 0;//Sold items
    int Trooms = 0, Tpasta = 0, Tburger = 0, Tnoodles = 0,  Tshake = 0, Tchicken = 0;//Total price

    cout<<"\t\t\t\t\t\t Welcome to ABC Hotel & Restaurant\t\t\t\t\t\t";
    cout<<"\n\tQuantity of items We have";
    cout<<"\nRooms Available ";
    cin>>Qrooms;
    cout<<"Quantity of Pasta ";
    cin>>Qpasta;
    cout<<"Quantity of Burger ";
    cin>>Qburger;
    cout<<"Quantity of Noodles ";
    cin>>Qnoodles;
    cout<<"Quantity of Shake ";
    cin>>Qshake;
    cout<<"Quantity of Chicken ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\tPlease Select from the Menu Options ";
    cout<<"\n\n 1)Rooms ";
    cout<<"\n 2)Pasta ";
    cout<<"\n 3)Burger ";
    cout<<"\n 4)Noodles ";
    cout<<"\n 5)Shake ";
    cout<<"\n 6)Chicken ";
    cout<<"\n 7)Information Regarding Sales and Collection ";
    cout<<"\n 8)Exit ";

    cout<<"\n\nPlease Enter your choice ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"\n\nEnter the Number of rooms you want ";
        cin>>quantity;
        if(Qrooms - Srooms >= quantity)
        {
            Srooms = Srooms + quantity;
            Trooms = Trooms + quantity * 1200;
            cout<<"\n\n\t\t "<<quantity<<" Room/Rooms have been alloted to you.";
        }
        else

            cout<<"\n\t Only"<<Qrooms-Srooms<<" Rooms remaining in the hotel: ";
            break;

    case 2:
        cout<<"\n\nEnter Pasta Quantity ";
        cin>>quantity;
        if(Qpasta - Spasta >= quantity)
        {
            Spasta = Spasta + quantity;
            Tpasta = Tpasta + quantity * 250;
            cout<<"\n\n\t\t "<<quantity<<" Pasta is ordered ";
        }
        else

            cout<<"\n\t Only"<<Qpasta-Spasta<<" Pasta remaining in the hotel: ";
            break;

    case 3:
        cout<<"\n\nEnter Burger Quantity ";
        cin>>quantity;
        if(Qburger - Sburger >= quantity)
        {
            Sburger = Sburger+ quantity;
            Tburger = Tburger + quantity * 200;
            cout<<"\n\n\t\t "<<quantity<<" Burger is ordered ";
        }
        else

            cout<<"\n\t Only"<<Qburger-Sburger<<" Burger remaining in the hotel: ";
            break;

    case 4:
        cout<<"\n\nEnter Noodles Quantity ";
        cin>>quantity;
        if(Qnoodles - Snoodles >= quantity)
        {
            Snoodles = Snoodles+ quantity;
            Tnoodles = Tnoodles + quantity * 150;
            cout<<"\n\n\t\t "<<quantity<<" Noodles is ordered ";
        }
        else

            cout<<"\n\t Only"<<Qnoodles-Snoodles<<" Noodles remaining in the hotel: ";
            break;


     case 5:
        cout<<"\n\nEnter Shake Quantity ";
        cin>>quantity;
        if(Qshake - Sshake >= quantity)
        {
            Sshake = Sshake+ quantity;
            Tshake = Tshake + quantity * 120;
            cout<<"\n\n\t\t "<<quantity<<" Shake is ordered ";
        }
        else

            cout<<"\n\t Only"<<Qshake-Sshake<<" Shake remaining in the hotel: ";
            break;

     case 6:
        cout<<"\n\nEnter Chicken Quantity ";
        cin>>quantity;
        if(Qchicken - Schicken >= quantity)
        {
            Schicken = Schicken+ quantity;
            Tchicken = Tchicken + quantity * 100;
            cout<<"\n\n\t\t "<<quantity<<" Chicken is ordered ";
        }
        else

            cout<<"\n\t Only"<<Qchicken-Schicken<<" Chicken remaining in the hotel: ";
            break;


     case 7:
        cout<<"\n\t\t Details about Sales and Collection ";

        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we have given for rent: "<<Srooms;
        cout<<"\n\n Number of rooms available: "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day: "<<Trooms;

        cout<<"\n\n Number of pasta we had: "<<Qpasta;
        cout<<"\n\n Number of pasta we have sold: "<<Spasta;
        cout<<"\n\n Number of pasta available: "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day: "<<Tpasta;


        cout<<"\n\n Number of burgers we had: "<<Qburger;
        cout<<"\n\n Number of burgers we have sold: "<<Sburger;
        cout<<"\n\n Number of burgers available: "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day: "<<Tburger;

        cout<<"\n\n Number of noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of noodles we have sold: "<<Snoodles;
        cout<<"\n\n Number of noodles available: "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day: "<<Tnoodles;

        cout<<"\n\n Number of shake we had: "<<Qshake;
        cout<<"\n\n Number of shake we have sold: "<<Sshake;
        cout<<"\n\n Number of shakes available: "<<Qshake-Sshake;
        cout<<"\n\n Total shakes collection for the day: "<<Tshake;

        cout<<"\n\n Number of chicken we had: "<<Qchicken;
        cout<<"\n\n Number of chicken we have sold: "<<Schicken;
        cout<<"\n\n Number of chicken available: "<<Qchicken-Schicken;
        cout<<"\n\n Total chicken collection for the day: "<<Tchicken;

     case 8:
        exit(0);
     default:
        cout<<"\n\n Please enter any number mentioned above!!";

}
goto m;



    return 0;
}
