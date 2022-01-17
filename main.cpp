#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

//UNTUK CASE 5 SORTING
void insertion_sort1(string arr1[], int length){
    int i, j;
    string temp;
    
    for(i=0; i<length; i++){
        j=1;
        
        while(j>0 && arr1[j-1] > arr1[j]){
            temp = arr1[j];
            arr1[j] = arr1[j-1];
            arr1[j-1] = temp;
            j--;
        }
    }
}

void bubble_sort1(string arr1[], int length){
    bool not_sorted = true;
    int i, j = 0;
    string temp;

    while(not_sorted){
        not_sorted = false;
        j++;
        
        for(i=0; i<length-1; i++){
            if(arr1[i] < arr1[i+1]){
                temp = arr1[i];
                arr1[i] = arr1[i+1];
                arr1[i+1] = temp;
                not_sorted = true;
            }
        }
    }
}

void print_array1(string arr1[], int length){
    for(int i=0; i<length; i++){
        cout << arr1[i] << "  ";
    }
    cout << endl;
}

void insertion_sort2(double arr2[], int length){
    int i, j;
    double temp;

    for(i=1; i<length; i++){
        j=i;

        while(j>0 && arr2[j-1] > arr2[j]){
            temp = arr2[j];
            arr2[j] = arr2[j-1];
            arr2[j-1] = temp;
            j--;
        }
    }
}

void selection_sort2(double arr2[], int length){
    int pos;
    double temp;
    for(int i=0; i<length-1; i++){
        pos = i;
        for(int j=i+1; j<length; j++){
            if(arr2[j] > arr2[pos])
                pos = j;
        }
        if(pos != i){
            temp = arr2[i];
            arr2[i] = arr2[pos];
            arr2[pos] = temp;
        }
    }
}

void print_array2(double arr2[], int length){
    for(int i=0; i<length; i++){
        cout << arr2[i] << "  ";
    }
    cout << endl;
}

//UNTUK CASE 7
int factorial(int n){
    if (n > 1){
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}

int main()
{
     int pilih;
    do
    {
        cout << "================================\n";
        cout << "======== MENU MODUL C++ ========\n";
        cout << "================================\n" << endl;
        cout << "1. Input dan Output\n";
        cout << "2. Percabangan\n";
        cout << "3. Perulangan\n";
        cout << "4. Array\n";
        cout << "5. Sorting\n";
        cout << "6. Searching\n";
        cout << "7. Rekursif\n";
        cout << "8. Exit\n";
        cout << "Masukkan Pilihan Anda: "; cin >> pilih;
        system("cls");

    if(pilih==1){
        int umur;
        string nama;
            cout << "Nama Anda: "; cin >> nama;
            cout << "Umur Anda: "; cin >> umur;
            cout << "\nData yang Anda Inputkan: " << endl << nama << endl << umur << endl;
            cout << "\ntap any key to return to the menu...";
            getch();
            system("cls");
    }
    else if (pilih==2){

            //ISI
            int nilai;
            string password, grade;

            cout << "========= Login =========" << endl;
            cout << "Masukan password (kota asal ITTP) : ";
            cin >> password;

            // percabangan if/else
            if (password == "purwokerto" || "Purwokerto" || "PURWOKERTO"){
                cout << "Selamat datang!" << endl << endl;
    
                cout << "=== Program Grade Nilai ===" << endl;
                cout << "Inputkan nilai Anda : ";
                cin >> nilai;
            if (nilai >= 90) {
                grade = "A";
            } else if (nilai >= 80) {
                grade = "B+";
            } else if (nilai >= 70) { 
                grade = "B";
            } else if (nilai >= 60) { 
                grade = "C+";
            } else if (nilai >= 50) { 
                grade = "C";
            } else if (nilai >= 40) { 
                grade = "D";
            } else if (nilai >= 30) { 
                grade = "E";
            } else {
                grade = "F";
            }

            cout << "Grade anda: " << grade << endl << endl;
        
            char tips;
            cout << "Ingin tau tips mendapatkan nilai bagus? (Y/N) : \n";
            cin >> tips;
        
            //Percabangan Switch
            switch (toupper(tips)){
                case 'Y':
                    cout << "\nTipsnya adalah Belajar dan berdoa" << endl << endl;
                    break;
                case 'N':
                    cout << "Oke" << endl;
                    break;
                default:
                    cout << "Input Salah!" << endl;
            }
            } else {
                cout << "Password salah, coba lagi!"  << endl;
            }

            cout << "Terimakasih sudah menggunakan aplikasi ini!" << endl;

            cout << "\ntap any key to return to the menu...";
            getch();
            system("cls");
    }
    else if (pilih==3){

            //ISI
            int angka, pilihOperasi;

            cout << "Program ini akan melakukan penjumlahan, pengurangan, dan perkalian ^^\n";
            cout << "Program akan melakukan perhitungan dari bilangan yang diinput dengan angka 1-10 ^^\n";
            cout << "\nAyo, masukkan bilangan yang akan dihitung : ";
            cin >> angka;
            cout << "\nDaftar operasi perhitungan\n";
            cout << "1. Penjumlahan\n";
            cout << "2. Pengurangan\n";
            cout << "3. Perkalian\n";
            cout << "Pilih Operasi perhitungan : ";
            cin >> pilihOperasi;

            if (pilihOperasi==1){
                cout << "\nPENJUMLAHAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " + " << i+1 << " = " << angka+(i+1)<< endl;
                }
            }else if (pilihOperasi==2){
                cout << "\nPENGURANGAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " - " << i+1 << " = " << angka-(i+1)<< endl;
                }
            }else {
                cout << "\nPERKALIAN\n";
                for (int i = 0; i<10; i++){
                    cout << angka << " x " << i+1 << " = " << angka*(i+1)<< endl;
                }
            }
            cout << "\ntap any key to return to the menu...";
            getch();
            system("cls");
    }
    else if (pilih==4){

            //ISI
            //PROGRAM MINESWEPER
            //platform awal
            string A[5][5] ={{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "}};
            //kunci jawaban
            string B[5][5] ={{"1","1","1","_","_"},{"1","*","2","1","1"},{"1","1","3","*","2"},{"_","_","2","*","2"},{"_","_","1","1","1"}};
            string C[5][5] ={{"1","1","1","_","_"},{"1","*","2","1","1"},{"1","1","3","*","2"},{"_","_","2","*","2"},{"_","_","1","1","1"}};
            int x,y;
            int z=0;
            string a,b,c;
            //tampilan awal
            do{
                cout<<"\t *MINESWEEPER*";
                cout<<"\n===============================\n";
                for (x=0;x<=4;x++){
                    cout<<"|  ";
                    for (y=0;y<=4;y++){
                        cout<<A[x][y]<<"  |  ";
                    }
                    cout<<endl;
                    cout<<"===============================\n";
                }

                cout<<"\nMasukkan Kolom : ";
                cin>>y;
                cout<<"Masukkan Baris : ";
                cin>>x;
            //jika kondisi salah
                if(B[x-1][y-1]=="*"){
                    A[x-1][y-1]="*";

                    cout<<"\n\n\t *MINESWEEPER*";
                    cout<<"\n===============================\n";
                    for (x=0;x<=4;x++){
                        cout<<"|  ";
                        for (y=0;y<=4;y++){
                            cout<<A[x][y]<<"  |  ";
                        }
                        cout<<endl;
                        cout<<"===============================\n";
                    }
                    cout<<"\n\t  Anda kalah\n";
                    break;
            //jika kondisi benar
                }else{
                    a=A[x-1][y-1];
                    b=B[x-1][y-1];
                    c=C[x-1][y-1];

                    if(b==c && b!=a){
                        A[x-1][y-1]=B[x-1][y-1];
                        B[x-1][y-1]="";
                        z++;
                    }
                }
                cout<<"\n\n\n";
            }while(z!=22);

            if(z==22){
                cout<<"\t  Anda menang\n";
            }
        getch();
        system("cls");
    }
    else if (pilih==5){
        int length, pilihan;
        string arr1[100], karakter;
        double arr2[100], angka;
        int i;

        cout << "====== Sorting ======" << endl;
        cout << "1. Nama" << endl;
        cout << "2. Angka" << endl;
        cout << "Masukkan Pilihan : "; cin >> pilihan;
        cout << endl;

        switch(pilihan)
                {
            case 1:
                {
                cout << "1. Nama" << endl;
                cout << "   Berapa nama yang ingin di input : "; cin >> length;

                for(i=0; i<length; i++){
                    cout << "   Nama ke-" << i+1 << " : "; cin >> arr1[i];
                    arr1[length] = karakter;
                }
                cout << endl;

                cout << "   Urutan nama sebelum di sorting:" << endl;
                cout << "   ";
                print_array1(arr1, length);
                insertion_sort1(arr1, length);
                cout << endl;
                cout << "   Uruturan nama setelah ascending sort:" << endl;
                cout << "   ";
                print_array1(arr1, length);
                cout << endl;
                cout << "   Uruturan nama setelah descending sort:" << endl;
                bubble_sort1(arr1, length);
                cout << "   ";
                print_array1(arr1, length);
                cout << "\ntap any key to return to the menu...";
                getch();
                system("cls");
                break;
                }
            case 2:
                {
                cout << "2. Angka" << endl;
                cout << "   Berapa angka yang ingin di input : "; cin >> length;

                for(i=0; i<length; i++){
                    cout << "   Angka ke-" << i+1 << " : "; cin >> arr2[i];
                    arr2[length] = angka;
                }
                cout << endl;

                cout << "   Urutan angka sebelum di sorting:" << endl;
                cout << "   ";
                print_array2(arr2, length);
                insertion_sort2(arr2, length);
                cout << endl;
                cout << "   Uruturan angka setelah ascending sort:" << endl;
                cout << "   ";
                print_array2(arr2, length);
                cout << endl;
                cout << "   Uruturan angka setelah descending sort:" << endl;
                cout << "   ";
                selection_sort2(arr2, length);
                print_array2(arr2, length);
                cout << "\ntap any key to return to the menu...";
                getch();
                system("cls");
                break;
                }
            default:
                {
                cout << "Masukkan pilihan yang ada pada menu" << endl;
                cout << "\ntap any key to return to the menu...";
                getch();
                system("cls");
                break;
                }
        }
    }
    else if (pilih==6){
             cout << "Selamat Datang di Pemograman Searching" << endl;
            cout << "                              " << endl;
            //ISI
            int i;
            int cari, ketemu;
            int A[100];

            cout<<" silahkan masukan 5 buah bilangan : \n\n";
            for(i=1; i<=5; i++)
            {
                cout<<" data ke- "<<i<<" = ";
                cin>>A[i];
            }
            cout<<endl;
            cout<<"Yuk input bilangan yang kamu cari : ";cin>>cari;
            cout<<endl;

            ketemu=0;
            for(i=0; i<=5; i++)
            {
                if (A[i]==cari)
                {
                    ketemu=1;
                    cout<<"Data yang kamu cari ditemukan pada indeks ke-"<<i<<endl;
                }
            }
            if(ketemu==0)
            {
                cout<<"Yah sayang sekali data yang kamu cari tidak ditemukan"<<endl;
                cout << "                              " << endl;
            }
        }

    else if (pilih==7){
            int recursive_factorial_number;
            cout << "====== Rekursif ======\n" << endl;
            cout << "Masukkan bilangan Faktorial : ";
            cin >> recursive_factorial_number;
            cout << "Hasil Faktorial dari " << recursive_factorial_number << " adalah : " << factorial(recursive_factorial_number) << endl;
            cout << "\ntap any key to return to the menu...";
            getch();
            system("cls");
    }
    else if (pilih==8){
            cout << "\ntap any key to Exit...";
            getch();
    }
    else {
            cout << "tidak ada pilihan ke-" << pilih;
            cout << "\ntap any key to return to the menu...";
            getch();
            system("cls");
        }
    } 
    while (pilih !=8);
    return 0;
}
