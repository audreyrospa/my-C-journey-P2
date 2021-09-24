//
//  main.cpp
//  Assignment 3 aka Semi-Final Project
//  Class : H
/**
Created by :
1. Rhyo Argasiwi 123200059
2. Ichvan Rachmawan 123200147
3. Audrey Rosa Paramita 123200172 
4/24/21 **/

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

struct film{
    char title[30];
    char duration[10];
    char genre[20];
};

film fl[] = {
    {"Mank", "2h11m", "Drama/Comedy"},
    {"Parasite", "2h12m", "Thriller"},
    {"Fight Club", "2h31m", "Drama"},
    {"Train to Busan", "2h1m", "Horror/Action"},
    {"John Wick", "1h48m", "Action"},
    {"Shazam", "2h12m", "Action"},
    {"Batman", "2h32m", "Action"},
    {"Avengers: Endgame", "3h2m", "Action/Sci-Fi"},
    {"Gundala", "2h3m", "Action/Sci-Fi"},
    {"Zootopia", "1h50m", "Family"}

};

char loop='y', exitinput;
int choice, x = 0, y =0, data = 0, hpinput, change;
int amount, price, plan, total, fee = 1500, paid;
bool check;
string search;

void line(string, int);
void maintitle();
void homepage();
void exit();
void wrong();
void searchfilm();
void rentfilm();
void filmlist();
void shellsort();
void payment();

int main()
{
    maintitle();
    system("pause");
    do
    {
        homepage();
    } while (loop='y');
    return 0;
}


void line(string a, int c){
    for(int b=1; b<=c ; b++){
            cout << a;
        } cout << endl;
}

void maintitle(){
    line("=", 55);
    cout <<"\t\t\tMOVIE REN+S" << endl;
    line("=", 55); 
}

void homepage(){
        system("cls");
        maintitle();
        cout << "1. List\n2. Search\n3. Rent\n4. Exit" << endl;
        cout << "Choose : "; cin >> hpinput;
        if(hpinput == 1){
            shellsort();
        }else if(hpinput == 2){
            searchfilm();
        }else if(hpinput == 3){
            rentfilm();
        }else if(hpinput == 4){
            exit();
        }else{
            wrong();
        }
}


void shellsort(){
    system("cls");
    line("=", 55);
    cout <<"\t\tLIST A-Z\n";
    line("=", 55);
    string judul[10] = {"Mank","Parasite","Fight Club","Train to Busan","John Wick",
    "Shazam","Batman","Avengers: Endgame","Gundala","Zootopia",};
    int length=10;
    string temp;
    int x;

    for (x = 1; x < length; ++x)
    { 
        temp = judul[x];
        int k;

        for (k = x-1; k >= 0 && judul[k] > temp; k--)
        {
        judul[k+1] = judul[k];
        }
        judul[k+1] = temp;
    }

    for(x=0; x < length; x++) 
        cout<< judul[x] <<"\n";
        cout<<endl;
    system("pause");
    cin.ignore();
}


void searchfilm(){
    system("cls");
    check = false;
    line("=", 55);
    cout <<"\t\tSEARCH SECTION" << endl;
    line("=", 55);
    cout <<"Search the film : "; cin.ignore(); getline(cin, search);
    for (int e = 0; e < 10; e++)
    {
        if (fl[e].title == search)
        {
            system("cls");
            maintitle();
            cout <<"Title    : " << fl[e].title << endl;
            cout <<"Duration : " << fl[e].duration << endl;
            cout <<"Genre    : " << fl[e].genre << endl;
            line("-", 55);
            check = true;
            break;
        }
        
    }

    if (!check)
    {
        system("cls");
        maintitle();
        cout <<"Sorry we can't find it!" << endl;
        line("-", 55);
    }
    system("pause");
    cin.ignore();
}

void rentfilm(){
    do{
        system("cls");
        line("=", 55);
        cout <<"\t\tRENT SECTION" << endl;
        line("=", 55);
        check = false;
        cout << "Title : "; cin.ignore(); getline(cin, search);
        for (int j = 0; j < 10; j++)
        {
            if (fl[j].title == search)
            {
                payment();
                cin.ignore();
                check = true;
                break;
            }
        }
    
        if(!check){
            cout << "Sorry, your film title is not registered!!!" << endl;
        }
        cin.ignore();
    }while(!check);       
}


void payment(){
    cout << "Plan  :\n1. 1 Week\n2. 1 Month" << endl; 
    cout << "Select Plan : "; cin >> plan;
    if(plan == 1){
        price = 25000;
    }else if(plan == 2){
        price = 95000;
    }
    do{
        system("cls");
        line("-", 55);
        if(plan == 1){
            cout << "Title         : " << search << endl;
            cout << "Plan          : 1 Week" << endl;
        }else if(plan == 2){
            cout << "Title         : " << search << endl;
            cout << "Plan          : 1 Month" << endl;
        }
        line("-", 55);
        cout << "Price         : Rp" << price << endl;
        cout << "Admin Fee     : Rp" << fee << endl;
        total = price + fee;
        cout << "Total Payment : Rp" << total << endl;
        cout << "Paid          : Rp"; cin >> paid;
        if(paid >= total){
            change = paid - total;
            line("-", 55);
            cout << "Change        : Rp" << change << endl;
            line("-", 55);
            cout << "Enjoy Your Film and Have Fun!";
        }else if(paid < total){
            line("-", 55);
            cout << "Sorry, your money is insufficient!!!" << endl;
            system("pause");
            system("cls");
        }
    }while(paid < total);


}


void exit(){
    cout << "Are you sure? y/n : "; cin >> exitinput;
    if(exitinput == 'y'){
        exit(0);
    }else{
        return homepage();
    }
}


void wrong(){
     cout << "Oops, wrong input! Please input the right menu" << endl;
    system("pause");
    return homepage();
}