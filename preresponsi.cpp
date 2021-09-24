#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int choose, banyak;
char loop = 'y', exitinput, wronginput;
string nFile;

struct indat{
	int kode, harga, jumlah;
	string nBarang;
	string kategori;
	string pemasok;
};indat data;

void menu();
void input();
void searching();
void inputdb();
void tambahdata();
void tampildata();
void sequential();
void binary();
void wrong();

int main()
{
    system("pause");
    do
    {
        menu();
    } while (loop='y');
    return 0;
}

void menu(){
	system("cls");
        cout << "=========================";
        cout << " M E N U ";
        cout << "1. Input Data\n2. Searching\n3. Transaksi\n4. Keluar" << endl;
        cout << "=========================";
        cout << "Choose : "; cin >> choose;
        if(choose == 1){
            input();
        }else if(choose == 2){
            searching();
        }else if(choose == 3){
        	cout << "============================================================";
			cout << "                 MENU 4 EXIT - THANK YOU";
			cout << "============================================================";
            exit(0);
        }else{
            wrong();
        }
}

void input(){
	system("cls");
		cout << "=========================";
    	cout << " MENU 1 - INPUT DATA";
    	cout << "1. Input Data Baru\n2. Tambah Data\n3. Tampilkan Data" << endl;
    	cout << "=========================";
    	cout << "Choose : "; cin >> choose;
        if(choose == 1){
            inputdb();
        }else if(choose == 2){
            tambahdata();
        }else if(choose == 3){
            tampildata();
        }else{
            wrong();
        }
}

void searching(){
	system("cls");
		cout << "=========================";
    	cout << " MENU 2 - SEARCHING";
    	cout << "1. Sequential Search\n2. Binary Search" << endl;
    	cout << "=========================";
    	cout << "Choose : "; cin >> choose;
        if(choose == 1){
            sequential();
        }else if(choose == 2){
            binary();
        }else{
            wrong();
        }
}

void inputdb(){
	cout << "============================================================";
	cout << "MENU 1 INPUT DATA - SUB MENU 1 : INPUT DATA BARU";
	cout << "============================================================";
	cout << "Masukan Nama File : "; cin >> nFile;

	ofstream input;
	input.open(nFile, ios::out);
	if (input.isopen()){
		cout << "FILE BERHASIL DICIPTAKAN\nSILAHKAN INPUT DATA\nBanyaknya Data? : ";
		cin >> banyak;
		int i=0;
		while (i < banyak){
			cout << "Data Barang ke-" << i+1 << endl;
			cout << "Kode Barang : "; cin >> data.kode;
			cout << "Nama Barang : "; cin.ignore(); getline(cin,data.nBarang);
			cout << "Kategori    : "; cin >> data.kategori;
			cout << "\t\t Harga 	: "; cin >> data.harga;
			cout << "\t\t Jumlah 	: "; cin >> data.jumlah;
			cout << "\t\t Pemasok 	: "; cin >> data.pemasok;

			input << data.kode << endl;
			input << data.nBarang << endl;
			input << data.kategori << endl;
			input << data.harga << endl;
			input << data.jumlah << endl;
			input << data.pemasok << endl;
		}
	}
	input.close();
}

void tambahdata(){
	cout << "============================================================";
	cout << "MENU 1 INPUT DATA - SUB MENU 2 : TAMBAH DATA";
	cout << "============================================================";
}

void tampildata(){
	cout << "============================================================";
	cout << "MENU 1 INPUT DATA - SUB MENU 3 : TAMPIL DATA";
	cout << "============================================================";
}

void sequential(){
	cout << "============================================================";
	cout << "MENU 2 SEARCHING - SUB MENU 1 : SEQUENTIAL SEARCh";
	cout << "============================================================";
}

void binary(){
	cout << "============================================================";
	cout << "MENU 2 SEARCHING - SUB MENU 2 : BINARY SEARCh";
	cout << "============================================================";
}

void exit(){
    cout << "Are you sure? y/n : "; cin >> exitinput;
    if(exitinput == 'y'){
        exit(0);
    }else{
        return menu();
    }
}

void wrong(){
	cout << "back to menu? (y/n) :"; cin >> wronginput;
	if (wronginput == 'y'){
		return menu();
	}else {
		exit(0);
	}
}


