//bagian login dan aplikasi
  scanf("%s", &siap.nama_film);

  //input hari mau nonton
  printf("\nPilih hari menonton\n1. Senin\t3. Rabu\t\t5. Jum'at\n2. Selasa\t4. Kamis\t6. Sabtu\n\t\t\t\t7. Minggu\nSilakan pilih hari (1-7) : ");
  scanf("%s",%siap.hari);
  //input jam nonton
  printf("\nPilih jam menonton ke(1-3): ");
  scanf("%s", %siap.jam);

  system ("cls");

  //tampilan seat
  printf("\n\tSeat Bioskop ZeroOne yang tersedia\n");
  printf("\t=============================================\n\n");

printf("\tA1\tA2\tA3\tA4\tA5\n\tB1\tB2\tB3\tB4\tB5\n\tC1\tC2\tC3\tC4\tC5\n\tD1\tD2\tD3\tD4\tD5\n\tE1\tE2\tE3\tE4\tE5\n");

  //pilih seat
  printf("\nPilih Seat (A-E) dan Nomor kursi (1-5): ");
  scanf("%s", &siap.seat);

  system("cls");

  siap.harga_tiket = 50000:
  printf("\nPEMBAYARAN TIKET BIOSKOP ZeroOne :\n\n");
  printf("=============================================\n");
  printf("NO FILM\t\tSEAT\tHARGA\n");
  printf("=============================================\n");
  printf("%c\t\t%s\t%d",siap.nama_film,siap.seat,siap.harga_tiket);
  printf("\n==============================================\n\n");

  printf("\n\nTiket Bioskop otomatis dicetak\n");

  printf("\n===================================================\n");
  printf("\t\tBIOSKOP ZeroOne\n");
  printf("===================================================\n");
  printf("Judul\t:");

    if(siap.nama_film =='1')
  {
    printf("Jurrasic Park\n");
  }
  else if (siap.nama_film == '2')
