#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    int Kode, Makan, Minum, Harga, JumlahMakan, JumlahMinum, Nasi, Total, Bayar, Kembali, Diskon, JumlahDIS, Nmeja;
    char A;
    string NAMA;
    int hrg=0,JMLMAKAN=0,JMLNAS=0,JMLMINUM=0,JMLDIS=0;
    cout << "===========================================================================" << endl;
    cout << "|                                CAFFE DESA                               |" << endl;
    cout << "===========================================================================" << endl;
    cout << "        NOTE : BELANJA DI ATAS 200.000, AKAN MENDAPATKAN DISKON 5%" << endl;
    cout << "===========================================================================" << endl << endl;
    cout << "NAMA PEMESAN : ";
    getline(cin, NAMA);
    cout << "NOMER MEJA   : ";
    cin >> Nmeja;
    cout << "===========================================================================" << endl;
    do {
    cout << "\nSILAHKAN PILIH MENU : " << endl;
    cout << "1. MENU MAKANAN" << endl;
    cout << "2. MENU MINUMAN" << endl;
    cout << "3. MENU NASI   " << endl << endl;
    cout << "PILIH KODE : ";
    cin >> Kode;
    if (Kode == 1)
    {
        cout << "\n===========================================================================" << endl;
        cout << "PILIH MENU MAKANAN :                                                      |" << endl;
        cout << "                                                                          |" << endl;
        cout << "1. AYAM BAKAR MADU        = Rp. 25.000 | 5. KENTANG GORENG  = Rp. 15.000  |" << endl;
        cout << "2. AYAM GORENG ASAM MANIS = Rp. 30.000 | 6. SINGKONG GORENG = Rp. 10.000  |" << endl;
        cout << "3. SUP IKAN GURAME        = Rp. 25.000 | 7. PISANG GORENG   = Rp. 10.000  |" << endl;
        cout << "4. GURAME SAUS PADANG     = Rp. 30.000 | 8. ROTI BAKAR      = Rp. 15.000  |" << endl;
        cout << "===========================================================================" << endl;
        cout << "PILIH KODE : " ;
        cin >> Makan;
        cout << "\n===========================================================================" << endl;
        switch (Makan)
        {
            case 1 :
                    {
                        cout << "                    - ANDA MEMILIH MENU AYAM BAKAR MADU -                  " << endl;
                        Harga = 25000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 2 :
                    {
                        cout << "               - ANDA MEMILIH MENU AYAM GORENG ASAM MANIS -                " << endl;
                        Harga = 30000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 3 :
                    {
                        cout << "                   - ANDA MEMILIH MENU SUP IKAN GURAME -                   " << endl;
                        Harga = 25000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 4 :
                    {
                        cout << "                  - ANDA MEMILIH MENU GURAME SAUS PADANG -                 " << endl;
                        Harga = 30000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 5 :
                    {
                        cout << "                    - ANDA MEMILIH MENU KENTANG GORENG -                   " << endl;
                        Harga = 15000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 6 :
                    {
                        cout << "                   - ANDA MEMILIH MENU SINGKONG GORENG -                   " << endl;
                        Harga = 10000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 7 :
                    {
                        cout << "                    - ANDA MEMILIH MENU PISANG GORENG -                    " << endl;
                        Harga = 10000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            case 8 :
                    {
                        cout << "                     - ANDA MEMILIH MENU ROTI BAKAR -                      " << endl;
                        Harga = 15000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MAKANAN : ";
                        cin >> JumlahMakan;
                        Total = Harga * JumlahMakan;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMAKAN = JMLMAKAN + JumlahMakan;
                        hrg = hrg + Total;
                        break;
                    }
            default : cout << "                       - KODE YANG ANDA MASUKAN SALAH -                    " << endl;
            break;
        }
    cout << "===========================================================================" << endl;
    cout << "\nMASIH ADA PESANAN MENU YANG LAIN ( Y/T ) : ";
    cin >> A;
    cout << "\n===========================================================================" << endl;
    }
    else if (Kode == 2)
    {
        cout << "\n===========================================================================" << endl;
        cout << "PILIH MENU MINUMAN :                                                      |" << endl;
        cout << "                                                                          |" << endl;
        cout << "1. JUS MANGGA  = Rp. 10.000          | 4. MILK TEA          = Rp. 10.000  |" << endl;
        cout << "2. JUS ALPUKAT = Rp. 12.000          | 5. MILK SHAKE        = Rp. 12.000  |" << endl;
        cout << "3. JUS JAMBU   = Rp. 8.000           | 6. ICE CREAM BANANA  = Rp. 15.000  |" << endl;
        cout << "===========================================================================" << endl;
        cout << "PILIH KODE : " ;
        cin >> Minum;
        cout << "\n===========================================================================" << endl;
        switch (Minum)
        {
            case 1 :
                    {
                        cout << "                    - ANDA MEMILIH MENU JUS MANGGA -                       " << endl;
                        Harga = 10000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            case 2 :
                    {
                        cout << "                   - ANDA MEMILIH MENU JUS ALPUKAT -                       " << endl;
                        Harga = 12000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            case 3 :
                    {
                        cout << "                    - ANDA MEMILIH MENU JUS JAMBU -                        " << endl;
                        Harga = 8000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            case 4 :
                    {
                        cout << "                     - ANDA MEMILIH MENU MILK TEA -                        " << endl;
                        Harga = 10000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            case 5 :
                    {
                        cout << "                    - ANDA MEMILIH MENU MILK SHAKE -                       " << endl;
                        Harga = 12000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            case 6 :
                    {
                        cout << "                  - ANDA MEMILIH MENU ICE CREAM BANANA -                   " << endl;
                        Harga = 15000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PESANAN MINUMAN : ";
                        cin >> JumlahMinum;
                        Total = Harga * JumlahMinum;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLMINUM = JMLMINUM + JumlahMinum;
                        hrg = hrg + Total;
                        break;
                    }
            default : cout << "                       - KODE YANG ANDA MASUKAN SALAH -                    " << endl;
            break;
        }
    cout << "===========================================================================" << endl;
    cout << "\nMASIH ADA PESANAN MENU YANG LAIN ( Y/T ) : ";
    cin >> A;
    cout << "\n===========================================================================" << endl;
    }
    else if (Kode == 3)
    {
        cout << "\n===========================================================================" << endl;
        cout << "PILIH MENU NASI :                                                         |" << endl;
        cout << "                                                                          |" << endl;
        cout << "1. NASI PUTIH  = Rp. 5.000                                                |" << endl;
        cout << "2. NASI UDUK   = Rp. 6.000                                                |" << endl;
        cout << "===========================================================================" << endl;
        cout << "PILIH KODE : " ;
        cin >> Nasi;
        cout << "\n===========================================================================" << endl;
        switch (Nasi)
        {
            case 1 :
                    {
                        cout << "                    - ANDA MEMILIH MENU NASI PUTIH -                       " << endl;
                        Harga = 5000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PORSI NASI : ";
                        cin >> Nasi;
                        Total = Harga * Nasi;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLNAS = JMLNAS + Nasi;
                        hrg = hrg + Total;
                        break;
                    }
            case 2 :
                    {
                        cout << "                     - ANDA MEMILIH MENU NASI UDUK -                       " << endl;
                        Harga = 6000;
                        cout << "===========================================================================" << endl;
                        cout << "                                               JUMLAH PORSI NASI : ";
                        cin >> Nasi;
                        Total = Harga * Nasi;
                        cout << "\n                                               TOTAL HARGA = Rp." << Total << endl;
                        JMLNAS = JMLNAS + Nasi;
                        hrg = hrg + Total;
                        break;
                    }
            default : cout << "                       - KODE YANG ANDA MASUKAN SALAH -                    " << endl;
            break;
       }
    cout << "===========================================================================" << endl;
    cout << "\nMASIH ADA PESANAN MENU YANG LAIN ( Y/T ) : ";
    cin >> A;
    cout << "\n===========================================================================" << endl;
    }
        else
        {
          cout << "===========================================================================" << endl;
          cout << "                       - KODE YANG ANDA MASUKAN SALAH -                    " << endl;
          cout << "===========================================================================" << endl;
          cout << "\nMASUKAN KEMBALI KODE PESANAN MENU ANDA ( Y/T ) : ";
          cin >> A;
          cout << "\n===========================================================================" << endl;
        }}
    while (A=='Y' || A=='y');
    if (hrg >= 200000)
    {
        cout << "                        = ANDA MENDAPATKAN DISKON 5% =                     " << endl;
        Diskon = hrg * 5;
        JumlahDIS = Diskon / 100;
        cout << "\n                                                  BESAR DISKON = Rp." << JumlahDIS << endl;
        JMLDIS = hrg - JumlahDIS;
        cout << "===========================================================================" << endl;
    }
    time_t waktusekarang;
    time (&waktusekarang);
        cout << " " << endl;
        cout << "                                   DATE & TIME : " << ctime(&waktusekarang);
        cout << "___________________________________________________________________________" << endl << endl;
        cout << " NOMER MEJA   : " << Nmeja << endl;
        cout << " NAMA PEMESAN : " << NAMA << endl;
        cout << "___________________________________________________________________________" << endl << endl;
        cout << " TOTAL ITEM MENU MAKANAN = " << JMLMAKAN << endl;
        cout << " TOTAL PORSI NASI        = " << JMLNAS << endl;
        cout << " TOTAL ITEM MENU MINUMAN = " << JMLMINUM << endl;
        cout << " TOTAL SEMUA HARGA       = Rp. " << hrg << endl;
        cout << " HARGA SETELAH DISKON    = Rp. " << JMLDIS << endl;
        cout << " UANG YANG DI BAYAR      = Rp. ";
        cin >> Bayar;
        if (Kembali = JMLDIS)
        {
            Kembali = Bayar - JMLDIS;
        }
        else
            {
            Kembali = Bayar - hrg;
            }
        cout << " KEMBALI                 = Rp. " << Kembali << endl;
        cout <<"\n                    - TERIMA KASIH ATAS KUNJUNGAN ANDA -" << endl;
        cout <<"\n                          - MUHAMMAD EKO ROMADHON -" << endl;
        cout << "___________________________________________________________________________" << endl;
        cout << "===========================================================================" << endl << endl;
getline(cin, NAMA);
   system ("pause");
   system("cls"); // UNTUK MEMBERSIHKAN LAYAR
   main (); // KEMBALI KE PROSES AWAL
    getch(); // UNTUK ENTER
    return 0;
}
