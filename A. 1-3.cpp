#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

struct pembeli{
	string kode_pbl, nama_pembeli, status ;
	};

struct barang{
	string kode_brng[10], nama_brng;
	int harga[50], jum_beli, jumlah[50];
   struct pmbayaran;
	};

struct pembayaran {
    int jumlah_Bayar; //harga setelah dikurang diskon
    int subtotal, total_pembelian, kembalian, diskon, jmlh_brng;
};

pembeli pbl;
barang brng; 
pembayaran byr;

int main (){
	int sub_tot [50];
	int diskon;
	float tot;
	int total_bayar, bayar, total_harga[50];
	
	cout << "========================================= \n";
	cout << "\t    PROGRAM KASIR - STRUCT \t" << endl;
	cout << "      Selamat Datang di Toko Indo April \t" << endl;
	cout << "========================================= \n\n";

	cout << "Kode pembeli : ";
	cin >> pbl.kode_pbl; 
		
		if (pbl.kode_pbl  == "p001" ||pbl.kode_pbl  == "P001") {
			
			pbl.nama_pembeli = "Diana";
			cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
			pbl.status = "Member";
			cout << "Status : " << pbl.status << endl;
			
			} else if (pbl.kode_pbl == "p002" || pbl.kode_pbl == "P002") {
                
                pbl.nama_pembeli = "Rina";
				cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
				pbl.status = "Member";
				cout << "Status : " << pbl.status << endl;
				
				} else if (pbl.kode_pbl == "p003" || pbl.kode_pbl == "P003") {
					
					pbl.nama_pembeli = "Lina";
					cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
					pbl.status = "Bukan Member";
					cout << "Status : " << pbl.status << endl;

			        }  else if (pbl.kode_pbl == "p004" || pbl.kode_pbl == "P004") {
			        	
                		pbl.nama_pembeli = "Doni";
				        cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
				        pbl.status = "Bukan Member";
				        cout << "Status : " << pbl.status << endl;
				
				        } else if (pbl.kode_pbl == "p005" || pbl.kode_pbl == "P005") {
							pbl.nama_pembeli = "Dodi";
					        cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
					        pbl.status = "Member";
					        cout << "Status : " << pbl.status << endl;
			} else {
	            cout<<"data tidak ada"<<endl;
        }
        cout << "\n ==================================== \n";
     	cout << "Masukan Jumlah Barang yang dibeli : ";
		cin>>brng.jum_beli; //Pengguna memasukan jumlah beli
		
      for (int i=0; i<brng.jum_beli;i++){
      	cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
    cout << "Kode Barang \t: ";
    cin >> brng.kode_brng[i];

    if (brng.kode_brng [i]== "BRG001" || brng.kode_brng [i]== "brg001"){

		brng.nama_brng = "pensil";
        cout << "Nama Barang \t: " << brng.nama_brng << endl;
        brng.harga [i]= 2000;
        cout << "Harga barang \t: " << brng.harga [i] << endl;

        } else if (brng.kode_brng[i] == "BRG002" || brng.kode_brng [i]== "brg002"){
        	
        	brng.nama_brng = "Buku Tulis";
            cout << "Nama Barang \t: " << brng.nama_brng << endl;
            brng.harga [i]= 3500;
            cout << "Harga barang \t: " << brng.harga[i] << endl;

            } else if (brng.kode_brng [i]== "BRG003" || brng.kode_brng [i]== "brg003"){
				brng.nama_brng = "Penghapus";
                cout << "Nama Barang \t: " << brng.nama_brng << endl;
                brng.harga[i] = 1000;
                cout << "Harga barang \t: " << brng.harga[i] << endl;

                } else if (brng.kode_brng [i]== "BRG004" || brng.kode_brng [i]== "brg004"){
					brng.nama_brng = "Penggaris";
                    cout << "Nama Barang \t: " << brng.nama_brng << endl;
                    brng.harga[i] = 1500;
                    cout << "Harga barang \t: " << brng.harga[i] << endl;

                    } else if (brng.kode_brng [i]== "BRG005" || brng.kode_brng [i]== "brg005"){
						brng.nama_brng = "Ballpoint";
                        cout << "Nama Barang \t: " << brng.nama_brng << endl;
                        brng.harga[i] = 2500;
                        cout << "Harga barang \t: " << brng.harga[i] << endl;
        } else {
	            cout<<"data tidak ada"<<endl;
        }  
       
      			cout<<"Jumlah \t \t: ";
		cin>>brng.jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		total_harga [i]= brng.jumlah[i]*brng.harga[i];
		cout<<"Total Harga \t: " << total_harga [i] << endl; //Pengguna input harga disimpan pada array harga
		
		tot += total_harga[i];
		
		//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja	
			if (pbl.kode_pbl  == "p001" || pbl.kode_pbl  == "p002" || pbl.kode_pbl  == "p005"){
				diskon=0.1*tot;
				} else if (brng.jum_beli > 3){
					diskon= brng.harga[i] -= 300;
					}else {
						diskon=0;
						}
	}
	system ("cls");
		cout<<endl;
	cout << "TOKO INDO APRIL"<<endl;
	cout << "Jl. DI Panjaitan 128 Purwokerto"<<endl;
	cout << "\n \n";
	cout << "No   Barang      Jumlah      Harga       Total"<<endl;
	for (int i=0;i<brng.jum_beli;i++){
		cout << i+1<<setw(10)<<brng.kode_brng[i]<<setw(10)<<brng.jumlah[i]<<setw(12)<<brng.harga[i]<<setw(12)<<total_harga [i]<<endl; //Menampilkan semua nilai array
	}
	cout <<"========================================================="<<endl;
	
	//Menampilkan Keterangan
	cout << "Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout << "Dikon        : Rp."<<diskon<<endl; //Menampilkan diskon
	cout << "Total Bayar  : Rp."<<tot-diskon<<endl;//Menampilkan total harga yang harus dibayar
	cout << "========================================================="<<endl;
	cout << "Bayar        : Rp.";
	cin >> bayar; // Input dari user untuk jumlah yang dibayar
	cout << "Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; // Menampilkan uang kembali
    cout << "\n \n";
    cout << "Data Pembeli" << endl;
    cout << "Kode Pembeli : " << pbl.kode_pbl << endl;
    
    if (pbl.kode_pbl  == "p001" ||pbl.kode_pbl  == "P001") {
			
			pbl.nama_pembeli = "Diana";
			cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
			pbl.status = "Member";
			cout << "Status : " << pbl.status << endl;
			
			} else if (pbl.kode_pbl == "p002" || pbl.kode_pbl == "P002") {
                
                pbl.nama_pembeli = "Rina";
				cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
				pbl.status = "Member";
				cout << "Status : " << pbl.status << endl;
				
				} else if (pbl.kode_pbl == "p003" || pbl.kode_pbl == "P003") {
					
					pbl.nama_pembeli = "Lina";
					cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
					pbl.status = "Bukan Member";
					cout << "Status : " << pbl.status << endl;

			        }  else if (pbl.kode_pbl == "p004" || pbl.kode_pbl == "P004") {
			        	
                		pbl.nama_pembeli = "Doni";
				        cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
				        pbl.status = "Bukan Member";
				        cout << "Status : " << pbl.status << endl;
				
				        } else if (pbl.kode_pbl == "p005" || pbl.kode_pbl == "P005") {
							pbl.nama_pembeli = "Dodi";
					        cout << "Nama pembeli : " << pbl.nama_pembeli << endl;
					        pbl.status = "Member";
					        cout << "Status : " << pbl.status << endl;
			} else {
	            cout<<"data tidak ada"<<endl;
        }
    cin.get(); 
    return 0 ;
}	
