#include <stdio.h>
#include <stdlib.h>     // for rand() and srand() and exit()
#include <time.h>       // for time()
#include <conio.h>      // for getch()
#include <windows.h>    // for system()
 
void init(void);      // ??????????????????? 
void draw(void);      // ??4 * 4??? 
void play(void);      // ??????
void to_up(void);     // ???? 
void to_down(void);  // ???? 
void to_left(void);   // ???? 
void to_right(void);  // ???? 
void add_number(void);  // ???? 

int a[4][4];
int empty;

int
main(void) {    
    printf("****************************\n"); 
    printf("            2048            \n\n"); 
    printf("Control by:\n"
            " w/s/a/d or W/S/A/D\n"); 
    printf("press q or Q quit game!\n");
    printf("****************************\n"); 
    printf("Press any key to continue . . .\n"); 
    getch();
    system("cls"); 
    
    init();
    draw();
    while(1)
        play();


    return 0;
} 

void                 
init(void) {
    int i, j;
    
    for(i = 0; i < 4; ++i)
        for(j = 0; j < 4; ++j)
            a[i][j] = 0;
    srand(time(0));
    i = rand() % 4;
    j = rand() % 4;        
    a[i][j] = 2;
    empty = 15;
}

void              
draw(void) {
    int i, j;

    for(i = 0; i < 4; ++i) {          // ??????????? 
        for(j = 0; j < 4; ++j)     // ????? ???????5?? 
            printf("|    ");
        printf("|\n");
        
        for(j = 0; j < 4; ++j) {   // ???????? 
            if(a[i][j] == 0)
                printf("|    ");
            else
                printf("|%4d", a[i][j]);
        } 
        printf("|\n"); 
        
        for(j = 0; j < 4; ++j)     // ???????? 
            printf("|____");
        printf("|\n");
    }
} 

void
play(void) {
    int ch;
    
    ch = getch();
    switch(ch) {
        case 'w':    // ???? 
        case 'W':
            to_up(); 
            system("cls");
            add_number(); 
            draw();
            break;
        case 's':    // ???? 
        case 'S':
            to_down();
            system("cls");
            add_number(); 
            draw(); 
            break;
        case 'a':    // ???? 
        case 'A':
            to_left();
            system("cls");
            add_number(); 
            draw();
            break;
        case 'd':     // ???? 
        case 'D':
            to_right();
            system("cls");
            add_number(); 
            draw();
            break;
        case 'q':   // ???? 
        case 'Q':
            exit(0);
            break; 
        default:
            printf("\nwrong type!!!\n\n");
            printf("please type :\n");
            printf("w/s/a/d or W/S/A/D\n");
            break;
    }
}

void
to_up(void) {
    int x, y, i;
    
    for(y = 0; y < 4; ++y) {     // ??????????? 
        for(x = 0; x < 4; ++x) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = x + 1; i < 4; ++i) {
                    if(a[i][y] == 0)
                        ;
                    else if(a[x][y] == a[i][y]) {
                        a[x][y] += a[i][y];
                        a[i][y] = 0;
                        ++empty;
                        x = i;
                        break;
                    }
                    else {
                        //x = i - 1;
                        break;
                    }
                } 
            }
        }
    }

    for(y = 0; y < 4; ++y)    // ??????
        for(x = 0; x < 4; ++x) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = x; (i > 0) && (a[i - 1][y] == 0); --i) {
                    a[i - 1][y] = a[i][y];
                    a[i][y] = 0;
                }
            }
        }
}

void
to_down(void) {
    int x, y, i;
    
    for(y = 0; y < 4; ++y)  // ????????? 
        for(x = 3; x >= 0; --x) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = x - 1; i >= 0; --i) {
                    if(a[i][y] == 0)
                        ;
                    else if(a[x][y] == a[i][y]) {
                        a[x][y] += a[i][y];
                        a[i][y] = 0;
                        ++empty;
                        x = i;
                        break;
                    }
                    else
                        break;
                }
            }
        }
        
    for(y = 0; y < 4; ++y)  // ?????? 
        for(x = 3; x >= 0; --x) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = x; (i < 3) && (a[i + 1][y] == 0); ++i) {
                    a[i + 1][y] = a[i][y];
                    a[i][y] = 0;
                }
            }
        }        
}

void
to_left(void) {
    int x, y, i;
    
    for(x = 0; x < 4; ++x)   // ????????? 
        for(y = 0; y < 4; ++y) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = y + 1; i < 4; ++i) {
                    if(a[x][i] == 0)
                        ;
                    else if(a[x][y] == a[x][i]) {
                        a[x][y] += a[x][i];
                        a[x][i] = 0;
                        ++empty;
                        y = i;
                        break;
                    }
                    else
                        break;
                }
            }
        }
        
    for(x = 0; x < 4; ++x)  // ?????? 
        for(y = 0; y < 4; ++y) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = y; (i > 0) && (a[x][i - 1] == 0); --i) {
                    a[x][i - 1] = a[x][i];
                    a[x][i] = 0;
                }
            }
        }
}

void
to_right(void) {
    int x, y, i;
    
    for(x = 0; x < 4; ++x)  // ????????? 
        for(y = 3; y >= 0; --y) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = y - 1; i >= 0; --i) {
                    if(a[x][i] == 0)
                        ;
                    else if(a[x][y] == a[x][i]) {
                        a[x][y] += a[x][i];
                        a[x][i] = 0;
                        ++empty;
                        y = i;
                        break;
                    }
                    else
                        break;
                }
            }
        } 
        
    for(x = 0; x < 4; ++x)   // ?????? 
        for(y = 3; y >= 0; --y) {
            if(a[x][y] == 0)
                ;
            else {
                for(i = y; (i < 3) && (a[x][i + 1] == 0); ++i) {
                    a[x][i + 1] = a[x][i];
                    a[x][i] = 0;
                }
            }
        }
}

void 
add_number(void) {
    int temp, number;
    int x, y;
    
    if(empty > 0) {     // ???? 
        srand(time(0));
        do {
            x = rand() % 4;
            y = rand() % 4;
        } while(a[x][y] != 0);
        
        number = rand();
        temp = number % 2;
    
        if(temp == 1) {  // ???????2,????4
            a[x][y] = 2;
            --empty;
        } 
        if(temp == 0) {
            a[x][y] = 4;
            --empty;
        }
    }

}
