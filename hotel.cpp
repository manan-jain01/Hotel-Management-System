#include<bits/stdc++.h>
using namespace std;
int main(){
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshakes=0 ,Qpizza=0;
    // food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshakes=0, Spizza=0;
    //Total price of items
    int Total_room=0,Total_pasta=0, Total_burger=0,Total_noodles=0, Total_shakes=0, Total_pizza=0;



    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms avaliable :";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shakes :";
    cin>>Qshakes;
    cout<<"\n Quantity of pizza :";
    cin>>Qpizza;


    m:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) noodles";
    cout<<"\n5) shakes";
    cout<<"\n6) pizza";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if(Qrooms-Srooms >= quant){
            Srooms=Srooms+quant;
            Total_room= Total_room + (quant*1200);
            cout<<"\n\n\t"<<quant<<"room/rooms have been alloted to you";
        }else{
            cout<<"\n\t Only"<< Qrooms-Srooms<<"Rooms reamining in hotel";
            break;
        }
        case 2:
        cout<<"\n\n Enter pasta quantity : ";

        cin>>quant;
        if(Qpasta-Spasta >= quant){
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta + (quant*250);
            cout<<"\n\n\t"<<quant<<"Pasta is the order !";
        }else{
            cout<<"\n\t Only"<< Qpasta-Spasta<<"Pasta reamining in hotel";
            break;
        }
        case 3:
        cout<<"\n\n Enter Burger quantity : ";

        cin>>quant;
        if(Qburger-Sburger >= quant){
            Sburger=Sburger+quant;
            Total_burger= Total_burger + (quant*120);
            cout<<"\n\n\t"<<quant<<"Burger is the order !";
        }else{
            cout<<"\n\t Only"<< Qburger-Sburger<<"Burger reamining in hotel";
            break;
        }
        case 4:
        cout<<"\n\n Enter noodles quantity : ";

        cin>>quant;
        if(Qnoodles-Snoodles >= quant){
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles + (quant*140);
            cout<<"\n\n\t"<<quant<<"Noodles is the order !";
        }else{
            cout<<"\n\t Only"<< Qnoodles-Snoodles<<"Noodles reamining in hotel";
            break;
        }
        case 5:
        cout<<"\n\n Enter shakes quantity : ";

        cin>>quant;
        if(Qshakes-Sshakes >= quant){
            Sshakes=Sshakes+quant;
            Total_shakes= Total_shakes + (quant*100);
            cout<<"\n\n\t"<<quant<<"shakes is the order !";
        }else{
            cout<<"\n\t Only"<< Qshakes-Sshakes<<"shakes reamining in hotel";
            break;
        }
        case 6:
        cout<<"\n\n Enter pizza quantity : ";

        cin>>quant;
        if(Qpizza-Spizza >= quant){
            Spizza=Spizza+quant;
            Total_pizza= Total_pizza + (quant*150);
            cout<<"\n\n\t"<<quant<<"Pizza is the order !";
        }else{
            cout<<"\n\t Only"<< Qpizza-Spizza<<"Pizza reamining in hotel";
            break;
        }
        case 7:

        cout<<"\n\t\t Details of sales and collection ";
        cout<<"\n\n Numbers of room we had:" <<Qrooms;
        cout<<"\n\n Numbers of room we gave for rent"<<Srooms;
        cout<<"\n\n Remaining rooms:"<< Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day :"<<Total_room;

        cout<<"\n\n Numbers of Pasta's we had:" <<Qpasta;
        cout<<"\n\n Numbers of Pasta's we had sold"<<Spasta;
        cout<<"\n\n Remaining Pasta's:"<< Qpasta-Spasta;
        cout<<"\n\n Total Pasta's collection for the day :"<<Total_pasta;
        
        cout<<"\n\n Numbers of burger we had:" <<Qburger;
        cout<<"\n\n Numbers of burger we had sold"<<Sburger;
        cout<<"\n\n Remaining burger:"<< Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day :"<<Total_burger;

        cout<<"\n\n Numbers of noodles we had:" <<Qnoodles;
        cout<<"\n\n Numbers of noodles we had sold"<<Snoodles;
        cout<<"\n\n Remaining noodles:"<< Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day :"<<Total_noodles;

        cout<<"\n\n Numbers of shakes we had:" <<Qshakes;
        cout<<"\n\n Numbers of shakes we had sold"<<Sshakes;
        cout<<"\n\n Remaining shakes:"<< Qshakes-Sshakes;
        cout<<"\n\n Total shakes collection for the day :"<<Total_shakes;

        cout<<"\n\n Numbers of pizza we had:" <<Qpizza;
        cout<<"\n\n Numbers of pizza we had sold"<<Spizza;
        cout<<"\n\n Remaining pizza:"<<Qpizza-Spizza;
        cout<<"\n\n Total pizza collection for the day :"<<Total_pizza;

        case 8:
        exit(0);

        default:
        cout<<"\n Please select the numbers mentioned above! ";
    
    }
    goto m;

}