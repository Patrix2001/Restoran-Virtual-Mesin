struct node {
	int id; //Nomor id
	char *name; //nama makanan
	int price; //harga
	int item; //jumlah makanan
	struct node *next;  //listnode pointer
};

void insert();
void display();
void delete();
void process(int num, char* food, int num_1);
int count();
int Id, total;

typedef struct node data;
data *head, *start, *temp = 0, *prev;

int food(char username[50], int cash, int checkUseAccount) { 
	system("cls");
	system("color 30");
	
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	system("cls");
	printf("Masukan pilihan menu: \n"
			"1. Pesan\n"
			"2. Lihat Pesanan Anda\n"
			"3. Hapus Pesanan\n"
			"4. Konfirmasi Pembayaran.\n" );
    switch (getch()) {
      case '1':
        insert();
        main();
        break;
      case '2':
        display();
        main();
        break;
      case '3':
      	delete();
      	main();
        break;
      case '4':
        count();
        char check;
        printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
		if(check!='y'){
			return total;
		}
        main();
        break;
      default:
      	main();
        break;
    }
}

void insert() {
	int choice;
	int item;

	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Liwet\t\tRp 18.000");
	printf("\n\t\t\t\t2. Mie Lethek\t\tRp 15.000");
	printf("\n\t\t\t\t3. Gethuk\t\tRp 7.000");
	printf("\n\t\t\t\t4. Gudeg\t\tRp 17.000");
	printf("\n\t\t\t\t5. Nasi Grombyong\tRp 16.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Wedang Uwuh\t\tRp 8.000");
	printf("\n\t\t\t\t7. Bir Pletok\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Dawet\t\tRp 15.000\n\n\n");
	printf("\nPesan Nomor : ");
	scanf("%d", &choice);
	
	if(choice==1) 
	{
		Id++;
		char *name_food = "Nasi Liwet";
		choice=18000;
		process(Id, name_food, choice);
		
	} else if(choice==2)
	{
		Id++;
		char *name_food = "Mie Lethek";
		choice=15000;
		process(Id, name_food, choice);
		
	} else if(choice==3)
	{
		Id++;
		char *name_food = "Gethuk";
		choice=7000;
		process(Id, name_food, choice);
				
	} else if(choice==4)
	{
		Id++;
		char *name_food = "Gudeg";
		choice=17000;
		process(Id, name_food, choice);
				
	} else if(choice==5)
	{
		Id++;
		char *name_food = "Nasi Grombyong";
		choice=16000;
		process(Id, name_food, choice);
				
	} else if(choice==6)
	{
		Id++;
		char *name_food = "Wedang Uwuh";
		choice=8000;
		process(Id, name_food, choice);
				
	} else if(choice==7)
	{
		Id++;
		char *name_food = "Bir Pletok";
		choice=10000;
		process(Id, name_food, choice);
				
	} else if(choice==8)
	{
		Id++;
		char *name_food = "Es Dawet";
		choice=15000;
		process(Id, name_food, choice);
				
	} else {
		printf("Invalid!");
		getch();
	}
	fflush(stdin);
	
}

void process(int num, char* food, int num_1) {
	int item;	
	printf("Berapa porsi: ");
	scanf("%d", &item);
	
	temp = (data*) malloc(sizeof (data));
	
	temp->id =num;
	temp->name=food;
	temp->price=num_1;
	temp->item=item;
	
	if (start == 0) {
		start = temp;
	} else {
	    head->next = temp;
	}
	temp->next = 0;
	head = temp;
	
}


void delete() {
  int countvalue, pos, i = 0;

  display();

  printf("\nMasukan ID menu : \n");
  scanf("%d", &pos);
//  if(pos>0 &&pos<=countvalue) {
//  	if(temp->id==pos){
//	  	temp = temp -> next;
//	  	start = temp;
//	  	getch();
//  }
//  else {
//  	while (temp != 0) {
//        if (i == (pos - 1)) {
//          prev->next = temp->next;
//          if(i == (countvalue - 1))
//          {
//			  head = prev;
//		  }
//          printf("\nDeleted Successfully \n\n");
//          break;
//        } else {
//          i++;
//          prev = temp;
//          temp = temp -> next;
//        }
//      }
//    }
//  } else {
//  
//    printf("\nInvalid Position \n\n");
//  	
//  
//  }
  
	
//  if (pos > 0 && pos <= countvalue) {
//    if (pos == 1) {
//      temp = temp -> next;
//      start = temp;
//      printf("\nDeleted Successfully \n\n");
//    } else {
//      while (temp != 0) {
//        if (i == (pos - 1)) {
//          prev->next = temp->next;
//          if(i == (countvalue - 1))
//          {
//			  head = prev;
//		  }
//          printf("\nDeleted Successfully \n\n");
//          break;
//        } else {
//          i++;
//          prev = temp;
//          temp = temp -> next;
//        }
//      }
//    }
//  } else
//    printf("\nInvalid Position \n\n");
}

void display() {
	fflush(stdin);
	temp = start;
	printf("\n\t\t\tPesanan Makanan : \n");
	printf("ID\tNama Makanan\t\tHarga\t\t\tPorsi\t\tJumlah\n");
	printf("");
	while (temp != 0) {
		printf("%d\t%s\t\tRp %d\t\t%d\t\tRp %d\n", temp->id, temp->name,temp->price, temp->item, temp->item*temp->price);
    	temp = temp -> next;
	}
  getch();
}

int count() {
	fflush(stdin);
	temp = start;
	while (temp != 0) {
		total+=temp->item*temp->price;
		temp = temp->next;
	}

	display();
	
	printf("\n\nHarga total: %d", total);
  	getch();
}
