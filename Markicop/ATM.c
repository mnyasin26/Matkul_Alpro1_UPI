void main()

{

    int pilihan=1, saldo=1000000, tarik, pin,nominal,transfer, isi_pulsa, salah=0;

start:      

printf("-------------SELAMAT DATANG DI ATM BANK KW----------");

printf("\n\n(Versi Simulasi) by : LAODE MUHAMAD FIIL MUDAWAT & JULIAN BHARA ANDIKA");

printf("\n\n================MASUKKAN ATM ANDA================");

printf("\n\n==============INSERT YOUR ATM CARD===============");

getch();





depan:

    system("cls");

    printf("\n------------- SELAMAT DATANG DI ATM BANK KW-----------");

    printf("\n\nPILIH BAHASA");

    printf("\n\nCHOOSE LANGUAGE");



    printf("\n\n1. Indonesia");

    printf("\n\n2. English");

    printf("\n\n= ");

    scanf("%d", &pilihan);

        if(pilihan==1) goto indonesia;

        else if(pilihan==2) goto english;

        else

            goto depan;

indonesia:

    system("cls");

    printf("------------- SELAMAT DATANG DI ATM BANK KW-----------");   

pin:

    printf("\n\nMasukkan PIN anda = ");

    scanf("%d", &pin);

    system("cls");

    if(pin==112233) {

            printf("Pin Cocok !");

            printf("\nSilahkan dilanjutkan\n"); 

            system("cls");

    }    else {

            printf("Silahkan masukkan pin yang benar !\n");

            salah+=1;

            if (salah==3) {

                printf ("ATM Diblokir Karena Anda 3x Salah Memasukkan PIN\n\n"); goto end; }

                else 

                    goto pin;

    }

menu:

        system("cls");

        printf("\n------------- SELAMAT DATANG DI ATM BANK KW-----------");

        printf("\n\n======================Menu Utama========================");

        printf("\n\n1. Penarikan Tunai");

        printf("\n\n2. Transfer");

        printf("\n\n3. Isi pulsa");

        printf("\n\n4. Cek Saldo");

        printf("\n\n5. Keluar");

        printf("\n\nMasukan pilihan anda: ");

        scanf("%d", &pilihan);

       

        if (pilihan==1) goto tarik;

        else if (pilihan==2) goto transfer;

        else if (pilihan==3) goto isi_pulsa;

        else if (pilihan==4) goto saldo;

        else if (pilihan==5) goto end;

        else

            printf("Masukan pilihan yang benar");



tarik:

        system("cls");

         printf("\n\n======================PILIH NOMINAL YANG AKAN DIAMBIL========================");

        printf("\n\n1. 100000");

        printf("\n\n2. 200000");

        printf("\n\n3. 300000");

        printf("\n\n4. Pilih jumlah nominal lain");

        printf("\n\n5. Keluar");

        printf("\n\nMasukan pilihan anda: ");

        scanf("%d", &pilihan);

        if(pilihan==1){

        	if(saldo>=100000){

        	printf("Nominal yang akan anda tarik adalah : Rp. 100000");

        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-100000);

        	}

        	else if(saldo<100000){

        	printf("Saldo anda kurang!");

			}      	

		}

		else if(pilihan==2){

      		  if(saldo>=200000){

        		printf("Nominal yang akan anda tarik adalah : Rp. 200000");

        		printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-200000);

        	}

        	else if(saldo<200000){

        	printf("Saldo anda kurang!");

			}      	

		}

		else if(pilihan==3){

        	if(saldo>=300000){

        	printf("Nominal yang akan anda tarik adalah : Rp. 300000");

        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-300000);

        	}

        	else if(saldo<300000){

        	printf("Saldo anda kurang!");

			}      	

		}

		else if(pilihan==4){

			printf("Masukkan nominal yang akan anda tarik = ");

        	scanf("%d", &nominal);

        

        if(saldo>=nominal){

      	printf("Apakah anda akan menarik uang sebesar Rp. %d ?", nominal);

        printf("\n\n1. Ya  2. Tidak\n\n");

        printf("Masukkan pilihan anda = ");

        

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaksi Berhasil");

              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaksi Dibatalkan");

        					}

							}

        	else if(saldo<nominal){

        	printf("Saldo anda kurang!");

       }

   }

        else

        printf("Masukan pilihan yang benar");

         goto transaksi;



isi_pulsa:

        system("cls");

        printf("Silahkan masukkan nomer HP tujuan anda = ");

        scanf("%d", &isi_pulsa);

        

        printf("\nMasukkan nominal yang akan anda isi = ");

        scanf("%d", &nominal);

        	if(saldo>=nominal){

      			printf("Apakah anda akan mengisi pulsa sebesar %d ke %d ?", nominal, isi_pulsa);

        		printf("\n\n1. Ya  2. Tidak");

        		printf("\n\nMasukkan pilihan anda = ");

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaksi Berhasil");

              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaksi Dibatalkan");

        					}

							}

        	else if(saldo<nominal){

        	printf("Saldo anda kurang!");

			}      	

       

        goto transaksi;



transfer:

        system("cls");

        printf("Silahkan masukkan nomer rekening tujuan anda = ");

        scanf("%d", &transfer);

        printf("Masukkan nominal yang akan anda transfer = ");

        scanf("%d", &nominal);

        

        if(saldo>=nominal){

      	printf("Apakah anda akan mentransfer %d ke %d ?", nominal, transfer);

        printf("\n\n1. Ya  2. Tidak\n\n");

        printf("Masukkan pilihan anda = ");

        

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaksi Berhasil");

              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaksi Dibatalkan");

        					}

							}

        	else if(saldo<nominal){

        	printf("Saldo anda kurang!");

			}      	

       

        goto transaksi;



transaksi:

        printf("\nApakah anda ingin transaksi lagi?");

        printf("\n\n1. Ya 2. Tidak = ");

        scanf("%d", &pilihan);

        system("cls");

            if (pilihan==1) goto pin;

            if (pilihan==2) goto end;

saldo:

        system ("cls");

        printf("Saldo anda Rp. %d\n\n", saldo);

        goto transaksi;

end:

        system ("cls");

        printf("Terima Kasih\n");

        printf("Atas Kerja Sama Dengan Kami\n\n");

        getch();

        system("cls");

        goto start;

english:

        system("cls");

        printf("------------- WELCOME TO ATM BANK KW-----------");   

pin1:

    printf("\n\nInput Your PIN = ");

    scanf("%d", &pin);

    system("cls");

    if(pin==112233) {

            printf("Pin Correct !");

            printf("\nPlease Continue\n"); 

            system("cls");

    }    else {

            printf("Please Input the PIN Correctly !\n");

            salah+=1;

            if (salah==3) {

                printf("Your ATM is now Blockir\n\n"); goto end1; }

            else 

                goto pin1;

    }

menu1:

        system("cls");

        printf("------------- WELCOME TO ATM BANK KW-----------");

        printf("\n\n====Home====");

        printf("\n\n1. Take Money");

        printf("\n\n2. Transfer");

        printf("\n\n3. Charging Pulse");

        printf("\n\n4. Check Balance");

        printf("\n\n5. Exit");

        printf("\n\nInput Your Choice: ");

        scanf("%d", &pilihan);

       

        if (pilihan==1) goto tarik1;

        else if (pilihan==2) goto transfer1;

        else if (pilihan==3) goto isi_pulsa1;

        else if (pilihan==4) goto saldo1;

        else if (pilihan==5) goto end1;

        else

            printf("Input The best choice");

            

tarik1:

        system("cls");

         printf("\n\n======================SELECT NOMINALLY TO BE TAKEN========================");

        printf("\n\n1. 100000");

        printf("\n\n2. 200000");

        printf("\n\n3. 300000");

        printf("\n\n4. Input another nominal number");

        printf("\n\n5. EXIT");

        printf("\n\nInput Your Choice: ");

        scanf("%d", &pilihan);

        if(pilihan==1){

        	if(saldo>=100000){

        	printf("The Nominal You Will Draw Is : Rp. 100000");

        	printf("\n\nNow, Your Balance is= Rp. %d", saldo=saldo-100000);

        	}

        	else if(saldo<100000){

        	printf("Your Balance Is Low!");

			}      	

		}

		else if(pilihan==2){

      		  if(saldo>=200000){

        		printf("The Nominal You Will Draw Is : Rp. 200000");

        		printf("\n\nNow, Your Balance is = Rp. %d", saldo=saldo-200000);

        	}

        	else if(saldo<200000){

        	printf("Your Balance Is Low!");

			}      	

		}

		else if(pilihan==3){

        	if(saldo>=300000){

        	printf("The Nominal You Will Draw Is : Rp. 300000");

        	printf("\n\nNow, Your Balance is = Rp. %d", saldo=saldo-300000);

        	}

        	else if(saldo<300000){

        	printf("Your Balance Is Low!");

			}      	

		}

		else if(pilihan==4){

			printf("Input The Nominal You Will Take = ");

        	scanf("%d", &nominal);

        

        if(saldo>=nominal){

      	printf("Are you sure want to take money Rp. %d ?", nominal);

        printf("\n\n1. Yes  2. No\n\n");

        printf("Input Your Choice = ");

        

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaction Success");

              				printf("\n\nYour Balance is = Rp. %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaction Aborted");

        					}

							}

        	else if(saldo<nominal){

        	printf("Your Balance Is Low!");

       }

   }

        else

        printf("INPUT THE CORRECT OPTION!!!");

         goto transaksi1;            

            

isi_pulsa1:

        system("cls");

        printf("Input Your Number = ");

        scanf("%d", &isi_pulsa);

        

        printf("\nInput Nominal = ");

        scanf("%d", &nominal);

        	if(saldo>=nominal){

      			printf("Are you sure want to charging %d to %d ?", nominal, isi_pulsa);

        		printf("\n\n1. Yes  2. No");

        		printf("\n\nInput Your Choice = ");

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaction Success");

              				printf("\n\nYour Balance is  = %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaction Aborted");

        					}

							}

        	else if(saldo<nominal){

        	printf("Your Balance Is Low!");

			}      	

       

        goto transaksi1;



transfer1:

        system("cls");

        printf("Input Destination Account Number = ");

        scanf("%d", &transfer);

        printf("Input Nominal = ");

        scanf("%d", &nominal);

        

        if(saldo>=nominal){

      	printf("Are you sure want to transfer %d ke %d ?", nominal, transfer);

        printf("\n\n1. Yes  2. No\n\n");

        printf("Input Your Choice = ");

        

       			scanf("%d", &pilihan);{       

      					  if (pilihan==1){

            			    printf("\nTransaction Success");

              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }

           				 else 

              				  printf("\nTransaction Aborted");

        					}

							}

        	else if(saldo<nominal){

        	printf("Your balance is low!");

			}      	

       

        goto transaksi1;



transaksi1:

        printf("\nDo you want to transaction again ?");

        printf("\n\n1. Yes 2. No = ");

        scanf("%d", &pilihan);

        system("cls");

            if (pilihan==1) goto pin1;

            if (pilihan==2) goto end1;

saldo1:

        system ("cls");

        printf("Your Balance is RP. %d\n\n", saldo);

        goto transaksi1;

end1:

        system("cls");

        printf("Thank You\n");

        printf("Banking With Us\n\n");

        getch();

selesai:

        puts("");

} 