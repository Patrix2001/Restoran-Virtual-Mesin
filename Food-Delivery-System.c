/*Tugas Projek*/
/*Kelompok 13 - Juan Patrick 1906355516 ; Samuel Nathaniel Halim 1906355560*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "library.h"
#define ESC 27

char username[50];
char password[50];
int cash;
char menu();
char pesan();
char pesan1();
char login();
void helpMenu();
char refillMenu();

int main(){
	fflush(stdin);
	system("cls");
	system("color F0");
	/*Sign-Up Akun User*/
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tSign-Up\n\n\n");
	printf("\t\t\t\t\tNama anda:    ");
	fgets(username, 50, stdin);
	while(username[0]=='\n'){
		printf("\n\t\t\t\t\tNama tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	printf("\t\t\t\t\tPassword anda:    ");
	fgets(password, 50, stdin);
	while(password[0]=='\n'){
		printf("\n\t\t\t\t\tPassword tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	/*Login Akun User*/
	login();
}


char menu(){
	/*Fungsi modular untuk main menu program*/
	fflush(stdin);
	system("cls");
	system("color AF");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t Program Mememesan Makanan\n\n\n");
	printf("\t\t\t\t\t\t1.Pesan Makanan!\n\n");
	printf("\t\t\t\t\t\t2.Isi Saldo\n\n");
	printf("\t\t\t\t\t\t3.Bantuan\n\n");
	printf("\t\t\t\t\t\t4.Logout\n\n");
	printf("\t\t\t\t\t\t5.Keluar\n\n");
	printf("\t\t\t\t\t Masukan angka menu Anda:\n\n\n");
	switch(getch()){
		case '1':
			pesan();
			return menu();
			break;
		case '2':
			refillMenu();
			return menu();
			break;
		case '3':
			helpMenu();
			return menu();
			break;
		case '4':
			/*Ketika logout, maka dikeluarkan dari menu dan kembali ke menu login*/
			login();
			break;
		case '5':
			system("cls");
			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tTerima kasih telah mencoba !\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(500);
			exit(0);
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return menu();
	}
}

char pesan()
{
	/*Fungsi yang menangani proses pemesanan makanan/minuman dari restoran*/
	fflush(stdin);
	size = 0;
	char restoran[100];
	int x;
	int y;
	int price;
	char alamatTujuan[50];
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
	printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Pulau Jawa\t\t\t\tB. Pulau Sumatera");
	printf("\n\t\t\t\t1. Koeno Koeni Resto\t\t\t4. Rumah Makan Simpang Raya");
	printf("\n\t\t\t\t2. Oseng Mercon Bu Narti Malioboro\t5. Nasi Kapau Uni Liis");
	printf("\n\t\t\t\t3. RM Sari Rasa\t\t\t\t6. Bundo Kanduang");
	printf("\n\n\t\t\t\tC. Pulau Kalimantan");
	printf("\n\t\t\t\t7. Kuin Abdhu Gunung Sari");
	printf("\n\t\t\t\t8. Rumah Makan Tjilik Riwut ");
	printf("\n\t\t\t\t9. Tepian Pandan Tenggarong\n\n\n");
	switch(getch()){
		case '1':
			x=1;
			price=food1(username, cash);
			break;
		case '2':
			x=1;
			price=food2(username, cash);
			break;
		case '3':
			x=1;
			price=food3(username, cash);
			break;
		case '4':
			x=2;
			price=food4(username, cash);
			break;
		case '5':
			x=2;
			price=food5(username, cash);
			break;
		case '6':
			x=2;
			price=food6(username, cash);
			break;
		case '7':
			x=3;
			price=food7(username, cash);
			break;
		case '8':
			x=3;
			price=food8(username, cash);
			break;
		case '9':
			x=3;
			price=food9(username, cash);
			break;
		case ESC:
			menu();
		case '0':
			system("cls");
			system("color 30");
			printf("\n    User: %s", username);
			printf("\n    Saldo: Rp %d", cash);
			printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\t\t\t  ");
			printf("\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
			printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
			printf("\n\n\t\t\t\tD. Pulau Sulawesi");
			printf("\n\t\t\t\t1. Coto Nusantara");
			printf("\n\t\t\t\t2. Konro Karebosi");
			printf("\n\t\t\t\t3. Pondok Raya Minahasa");
			printf("\n\n\t\t\t\tE. Pulau Papua");
			printf("\n\t\t\t\t4. Resto Apung Tomarokai");
			printf("\n\t\t\t\t5. Yougwa Danau Sentani");
			printf("\n\t\t\t\t6. Kitong Papua Resto\n\n\n");
			switch(getch()){
			case '1':
				x=4;
				price=food10(username, cash);
				break;
			case '2':
				x=4;
				price=food11(username, cash);			
				break;
			case '3':
				x=4;
				price=food12(username, cash);
				break;
			case '4':
				x=5;
				price=food13(username, cash);			
				break;
			case '5':
				x=5;
				price=food14(username, cash);			
				break;
			case '6':
				x=5;
				price=food15(username, cash);			
				break;
			case '0':
				pesan();
				break;
			case ESC:
				menu();
				break;
			default:
				printf ("Input salah !\n");
				printf ("Masukan angka menu dengan benar.\n");
				system("pause");
				return pesan();
			}
		break;
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return pesan();
	}
	
	void address() {
		system("cls");
		system("color 30");
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		/*Menentukan alamat user 1*/
		printf("\n\n\n\n\n\t\t\t\tMasukan Alamat Pulau Besar Anda!\n\t\t\t  ");
		printf("\n\t\t\t\t1. Jawa");
		printf("\n\t\t\t\t2. Sumatera");
		printf("\n\t\t\t\t3. Kalimantan");
		printf("\n\t\t\t\t4. Sulawesi");
		printf("\n\t\t\t\t5. Papua\n\n");	
		printf("\t\t\t\tMasukan pilihan Anda: ");	
		switch(getch()){
			case '1':
				y = 1;
				printf("\n\t\t\t\tPulau = Jawa");
				Sleep(1000);
				break;
			case '2':
				y = 2;
				printf("\n\t\t\t\tPulau = Sumatera");
				Sleep(1000);
				break;
			case '3':
				y = 3;
				printf("\n\t\t\t\tPulau = Kalimantan");
				Sleep(1000);
				break;
			case '4':
				y = 4;
				printf("\n\t\t\t\tPulau = Sulawesi");
				Sleep(1000);
				break;
			case '5':
				y = 5;
				printf("\n\t\t\t\tPulau = Papua");
				Sleep(1000);
				break;
			default:
				printf ("\n\t\t\t\tInput salah !\n");
				printf ("\t\t\t\tMasukan angka menu dengan benar.\n");
				printf("\t\t\t\t");
				system("pause");
				return address();
				
		}
		
	}
	address();
	Sleep(1000);
	fflush(stdin);
	printf("\n\t\t\t\tTekan tombol apapun untuk melanjutkan...");
	getch();
	/*Menentukan alamat user bagian 2*/
	printf("\n\n\t\t\t\tAlamat lokasi tujuan anda: ");
	fgets(alamatTujuan, 100, stdin);
	Sleep(500);
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\n\t\t\t\t\t    Pesanan sedang dikonfirmasi.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	char check;
	
	price+=distance(x, y);

	/*Mencetak struk pemesanan sebelum dilakukan transaksi. Jika saldo belum mencukupi, diarahkan ke menu top up saldo*/
	do {	
		struk(username, cash, alamatTujuan);
		
		printf("\n\n\t\t\t\tHarga Ongkos\t\t\tRp %d", distance(x, y));
		printf("\n\n\t\t\t\tTOTAL\t\t\t\tRp %d", price);
		printf("\n\n\t\t\t\tApakah Anda ingin melanjutkan pembayaran: (y/n) ");
		scanf(" %c", &check);
		if(cash-price<0) {
			printf("\t\t\t\tSaldo Anda Tidak Cukup !");
			printf("\n\t\t\t\tHarap isi saldo Anda: (y/n) ");
			scanf(" %c", &check);
			if(check=='y') {
				refillMenu();
			}
		}
	} while(check =='n' || cash-price<0);
	size=0;
	cash-=price;
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\n\t\t\t\t\t\tPesanan sedang dikonfirmasi.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	printf("\n\t\t\t\t\t\tPesanan sedang diantar.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\n\t\t\t\t\t\tPesanan Sampai!");
	Sleep(400);
	getch();
}


void helpMenu(){
	system("cls");
	system("color AF");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t Cara menggunakan Food Delivery System:\n\n");
	printf("\t\t\t\t 1. Pilih menu dituju dengan memasukkan angka sesuai tertera pada layar\n ");
	printf("\t\t\t\t 2. Anda dapat mengisi saldo terlebih dahulu \n");
	printf("\t\t\t\t 3. Pilih restoran yang Anda ingin pesan \n");
	printf("\t\t\t\t 4. Pesan makanan dan minuman sesuai keinginan Anda \n");
	printf("\t\t\t\t	* Total pembayaran akan muncul pada layar \n");
	printf("\t\t\t\t 	* Bila saldo kurang, maka sistem akan memberitahu kepada Anda \n");
	printf("\t\t\t\t	untuk melakukan pengisian saldo \n");
	printf("\t\t\t\t 5. Pilih lokasi Anda sesuai dengan alamat Anda ingin diantarkan \n");
	printf("\t\t\t\t 6. Akan muncul pesan konfirmasi pembayaran sebelum memesan \n");
	printf("\t\t\t\t 7. Tunggu proses pengantaran sampai selesai\n");
	printf("\t\t\t\t 8. Anda akan dapat struk pembayaran sebagai bukti bahwa pesanan Anda\n");
	printf("\t\t\t\t  	telah sampai \n\n");
	printf("\t\t\t\t   Tekan tombol apapun untuk kembali...");
	getch();
}

char login(){
	/*Fungsi untuk login user*/
	int x,y;
	int n = 1;
	char unLogin[50], pwLogin[50];
	
	do{
		fflush(stdin);
		system("cls");
		system("color F0");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tLogin \n");
		printf("\t\t\t\t\t     (space and case-sensitive!) \n\n\n");
		
		printf("\t\t\t\t\tNama:    ");
		fgets(unLogin, 50, stdin);
		printf("\t\t\t\t\tPassword:    ");
		fgets(pwLogin, 50, stdin);
		/*Pengecekkan informasi login user dengan membandingkan string login dengan string dari sign-up (yang adalah global variable)*/
		x = strcmp(unLogin, username);
		y = strcmp(pwLogin, password);
		if(x==0 && y==0){
			break;
		}
		else{
			printf("\n\t\t\t\tNama atau password tidak sesuai! ");
			printf("Coba lagi.");
			Sleep(1000);
			
		}
		
	}while(n=1);
	
	printf("\n\t\t\t\t\tSelamat datang, %s", username);
	Sleep(200);
	printf("\n\t\t\t\t\tPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	/*Setelah login berhasil, lanjut ke main menu*/
	menu();
}

char refillMenu() {
	/*Fungsi untuk menangani refill/top-up saldo user*/
	int mobileNumber = 0;
	system("cls");
	system("color AF");
	int a = 0;
	int loopCheck = 0;
	do{
		printf("\n\t\t\t\t\t\t      User: %s", username);
		printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
		printf("\n\n\n");
		/*3 Metode top-up:*/
		printf("Pilih metode top up:\n\n");
		printf("1. Mobile Credit\n");
		printf("2. Minimart Voucher\n");
		printf("3. Transfer E-money\n");
		printf("4. Kembali ke menu\n");
		printf("Masukan angka menu Anda: ");
		switch(getch()){
			case '1':
				while(mobileNumber < 100000)
				{
					system("cls");
					printf("\n\t\t\t\t\t\t      User: %s", username);
					printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
					printf("\n\n\n");
					printf("Masukkan nomor mobile anda: ");
					scanf("%d", &mobileNumber);
					if(mobileNumber<100000){
						printf("\nMasukkan nomor yang valid! (minimal 6 angka)");
					}
					Sleep(1000);
					fflush(stdin);
				} 
				mobileNumber = 0;
				;
				while(loopCheck<1)
				{
					system("cls");
					printf("\n\t\t\t\t\t\t      User: %s", username);
					printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
					printf("\n\n\n");
					printf("Masukan saldo Anda : \n");
					scanf("%d", &a);
					if(a<5000){
						printf("\nMaaf, Anda dapat mengisi saldo minimal 5000 rupiah\n\n");
						fflush(stdin);
						printf("Ketik apapun untuk mencoba lagi, atau ESC untuk mencoba metode lain");
						switch(getch()){
							case ESC:
								return refillMenu();
								break;
							default:
								system("cls");
						}
					}	
					else{
						loopCheck = 1;
					}
				}
				break;
			case '2':
				system("cls");
				printf("\n\t\t\t\t\t\t      User: %s", username);
				printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
				printf("\n\n\n");
				printf("Pilihlah voucher saldo yang ingin dibeli:\n");
				printf("1. Rp10.000,00\n");
				printf("2. Rp20.000,00\n");
				printf("3. Rp50.000,00\n");
				printf("4. Kembali\n"); 
				printf("Masukan pilihan Anda: ");
				switch(getch()){
					case '1':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 10000;
						break;
					case '2':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 20000;
						break;
					case '3':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 50000;
						break;
					case '4':
						return refillMenu();
						break;
					default:
						printf ("\n\nInput salah !\n");
						printf ("Masukan angka menu dengan benar.\n");
						system("pause");
						return refillMenu();
				}
				break;
			case '3':
				system("cls");
				printf("\n\t\t\t\t\t\t      User: %s", username);
				printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
				printf("\n\n\n");
				printf("Masukan saldo Anda : \n");
				scanf("%d", &a);
				if(a<5000)
				{
					printf("\nMaaf, Anda dapat mengisi saldo minimal 5000 rupiah\n\n");
					fflush(stdin);
					printf("Ketik apapun untuk mencoba lagi, atau ESC untuk mencoba ke metode lain");
					switch(getch()){
						case ESC:
							return refillMenu();
							break;
						default:
							system("cls");
					}
			
				}
				break;
			case '4':
				menu();
			default:
				printf ("\n\nInput salah !\n");
				printf ("Masukan angka menu dengan benar.\n");
				system("pause");
				return refillMenu();
		}
	} while(a<5000);
	cash+=a;
	Sleep(200);
	printf("\nPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	system("cls");
	printf("\n\t\t\t\t\t\t      User: %s", username);
	printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
	printf("\n\n\nTransaksi Berhasil");
	Sleep(400);
	printf("\n\nKetik apapun untuk kembali...");
	getch();
	
	
}