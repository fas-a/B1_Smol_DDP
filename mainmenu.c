#include "mainmenu.h"

/*
Deskripsi	: Modul untuk mengembalikan nilai opsi dari pilihan yang dipilih sesuai dengan tampilan panah berada. 
Ex, panah ada disebelah "Play", pemain menekan tombol enter, modul mengembalikan nilai 1
*/
int PilihMenu(){
  int position = 1;
    int keypress = 0;
    
    while(keypress != 13){
        gotoxy(30,10); arrowhere(1, position); printf(" Play \n");
        gotoxy(30,11); arrowhere(2, position); printf(" How To Play \n");
        gotoxy(30,12); arrowhere(3, position); printf(" Highscore \n");
        gotoxy(30,13); arrowhere(4, position); printf(" Exit \n");
        keypress = getch();
        fflush(stdin);
        if(keypress == 80){
            if(position == 4) position = 1;
            else position++;
        }
        else if (keypress == 72){
            if(position == 1) position = 4;
            else position--;
        }
    }
    return position;
}

/*
Deskripsi	: Modul untuk menentukan letak panah berada.
I.S	: Panah tidak tampil
F.S	: Panah tampil sesuai dengan data
*/
void arrowhere(int realPosition, int arrowPosition){
    if(realPosition == arrowPosition) printf("  ---->> ");
    else printf("        ");
}

/*
Deskripsi	: Modul untuk menghentikan program selama ms dengan satuan milisecond.
I.S	: Program berjalan normal
F.S	: Program berhenti selama ms satuan milisecond
*/
void delay(int ms)
{
  Sleep(ms);
}

/*
Deskripsi	: Modul untuk menampilkan title Knights Tour dengan animasi.
I.S	: title belum tampil
F.S	: title sudah tampil
*/
void renderLogo()
{
//  _   _      _        _     _   _       _____ 
// | | / /    (_)      | |   | | ( )     |_   _|
// | |/ / _ _   _  __ _| |__ | |_|/ ___    | | ___  _   _ _ __ 
// |    \| '_ \| |/ _` | '_ \| __| / __|   | |/ _ \| | | | '__|
// | |\  \ | | | | (_| | | | | |_  \__ \   | | (_) | |_| | |
// \_| \_/_| |_|_|\__, |_| |_|\__| |___/   \_/\___/ \__,_|_|
//                 __/ |
//                |___/
 char titletext[][80] = {"             _   _      _        _     _   _       _____                    ",
                         "            | | / /    (_)      | |   | | ( )     |_   _|                   ",
                         "            | |/ / _ _   _  __ _| |__ | |_|/ ___    | | ___  _   _ _ __     ",
                         "            |    \\| '_ \\| |/ _` | '_ \\| __| / __|   | |/ _ \\| | | | '__|    ",
                         "            | |\\  \\ | | | | (_| | | | | |_  \\__ \\   | | (_) | |_| | |       ",
                         "            \\_| \\_/_| |_|_|\\__, |_| |_|\\__| |___/   \\_/\\___/ \\__,_|_|       ",
                         "                            __/ |                                           ",
                         "                           |___/                                            "};
 for (int i = 0; i <= 76; i++)
 {
   gotoxy(0, 0);
   for (int j = 0; j < 8; j++)
   {
    for(int k = 0; k <= i; k++){
        printf("%c", titletext[j][k]);
    }
    printf("\n");
   }
   delay(5);
 }

}

/*
Deskripsi	: Modul untuk menampilkan title Knights Tour.
I.S	: title belum tampil
F.S	: title sudah tampil
*/
void TampilLogo(){
   char titletext[][80] = {"             _   _      _        _     _   _       _____                    ",
                         "            | | / /    (_)      | |   | | ( )     |_   _|                   ",
                         "            | |/ / _ _   _  __ _| |__ | |_|/ ___    | | ___  _   _ _ __     ",
                         "            |    \\| '_ \\| |/ _` | '_ \\| __| / __|   | |/ _ \\| | | | '__|    ",
                         "            | |\\  \\ | | | | (_| | | | | |_  \\__ \\   | | (_) | |_| | |       ",
                         "            \\_| \\_/_| |_|_|\\__, |_| |_|\\__| |___/   \\_/\\___/ \\__,_|_|       ",
                         "                            __/ |                                           ",
                         "                           |___/                                            "};

   gotoxy(0, 0);
   for (int j = 0; j < 8; j++)
   {
    for(int k = 0; k <= 76; k++){
        printf("%c", titletext[j][k]);
    }
    printf("\n");
 }
}

/*
Deskripsi	: Modul untuk menyembunyikan kursor.
I.S	: Kursor tampil pada layar
F.S	: Kursor tidak tampil pada layar
*/
void hideCursor()
{
  HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO info;
  info.dwSize = 100;
  info.bVisible = FALSE;
  SetConsoleCursorInfo(consoleHandle, &info);
}
