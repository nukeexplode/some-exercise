#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <conio.h>
void draw(void);
// void random_initnum(void);
void move();
int up();
int down();
void addnumber(void);

int a[4][4] = {0};
int empty = 16;
int main()
{
	
	// random_initnum();
	printf("顾涛,请用WASD键控制\n");
	printf("按任意键继续\n");
	getch();
	system("cls");
	addnumber();
	draw();
	while(1){
		move();
	}
	
	system("pause");
	return 0;
}

// void random_initnum(void)
// {
	// int i,j;
	// srand((unsigned int)time(0));
	// i = rand()%4;
	// j = rand()%4;
	// a[i][j] = (rand()%2+1)*2;
// }

void draw(void)
{
	int i,j;
	for( i=0; i<4; i++ ) {
		for(j=0; j<4; j++ ) {
			printf("|       ");
		}
		printf("|\n");
		for(j=0; j<4; j++ ) {
			if( a[i][j]!=0 ) {
				printf("| %5d ", a[i][j]);
			}else{
				printf("|       ");
			}
		}
		printf("|\n");
		for(j=0; j<4; j++ ) {
			printf("|_______");
		}
		printf("|\n");
	}
}

void move()
{
	char ch;
	ch = getch();
	switch(ch){
		case 'w':
		case 'W':
			up();
			system("cls");
			addnumber();
			draw();
			break;
		case 'a':
		case 'A':
			left();
			system("cls");
			addnumber();
			draw();
			break;
		case 's':
		case 'S':
			down();
			system("cls");
			addnumber();
			draw();
			break;
		case 'd':
		case 'D':
			right();
			system("cls");
			addnumber();
			draw();
			break;
	}
}

int up()
{
	int i, j, k;
	//change the value
	for( i=0; i<4; i++ ){
		for( j=0; j<4; j++ ) {
			if(a[j][i] == 0){
				;
			}else{
				for( k=j+1; k<4; k++ ){//judge zero is exist?
					if(a[k][i]==0){
						;
					}else if( a[j][i] == a[k][i] ) {
						a[j][i] += a[k][i];
						a[k][i] = 0;
						empty++;
						break;
					}else{
						break;
					}
				}
			}
		}
	}
	// for(i=0;i<4;i++){
		// for(j=0;j<4;j++){
			// printf("%d", a[i][j]);
		// }
		// printf("\n");
	// }
	for( i=0; i<4; i++ ){//move the space 
		for( j=2; j>=0; j-- ) {
			if( a[j][i] == 0 ) {
				a[j][i] += a[j+1][i];
				a[j+1][i] = 0;
			}
		}
	}//it feels like it can get faster
	
}

int down()
{
	int i, j, k;
	//change the value
	for( i=0; i<4; i++ ){
		for( j=3; j>=0; j-- ) {
			if(a[j][i] == 0){
				;
			}else{
				for( k=j-1; k>=0; k-- ){//judge zero is exist?
				if(a[k][i] == 0){
					;
				}else if( a[j][i] == a[k][i] ) {
						a[j][i] += a[k][i];
						a[k][i] = 0;
						empty++;
						break;
					}else{
						break;
					}
				}
			}
		}
	}
	// for(i=0;i<4;i++){
		// for(j=0;j<4;j++){
			// printf("%d", a[i][j]);
		// }
		// printf("\n");
	// }
	for( i=0; i<4; i++ ){//move the space 
		for( j=1; j<4; j++ ) {
			if( a[j][i] == 0 ) {
				a[j][i] += a[j-1][i];
				a[j-1][i] = 0;
			}
		}
	}//it feels like it can get faster
	
}
	
int left()
{
	int i, j, k;
	//change the value
	for( i=0; i<4; i++ ){
		for( j=0; j<4; j++ ) {
			if(a[i][j] == 0){
				;
			}else{
				for( k=j+1; k<4; k++ ){//judge zero is exist?
				if(a[i][k]==0){
					;
				}else if( a[i][j] == a[i][k] ) {
						a[i][j] += a[i][k];
						a[i][k] = 0;
						empty++;
						break;
					}else{
						break;
					}
				}
			}
		}
	} 
	// for(i=0;i<4;i++){
		// for(j=0;j<4;j++){
			// printf("%d", a[i][j]);
		// }
		// printf("\n");
	// }
	for( i=0; i<4; i++ ){//move the space 
		for( j=2; j>=0; j-- ) {
			if( a[i][j] == 0 ) {
				a[i][j] += a[i][j+1];
				a[i][j+1] = 0;
			}
		}
	}//it feels like it can get faster
}

int right()
{
	int i, j, k;
	//change the value
	for( i=0; i<4; i++ ){
		for( j=3; j>=0; j-- ) {
			if(a[i][j] == 0){
				;
			}else{
				for( k=j-1; k>=0; k-- ){//judge zero is exist?
				if(a[i][k]==0){
					;
				}else if( a[i][j] == a[i][k] ) {
						a[i][j] += a[i][k];
						a[i][k] = 0;
						empty++;
						break;
					}else{
						break;
					}
				}
			}
		}
	}
	// for(i=0;i<4;i++){
		// for(j=0;j<4;j++){
			// printf("%d", a[i][j]);
		// }
		// printf("\n");
	// }
	for( i=0; i<4; i++ ){//move the space 
		for( j=1; j<4; j++ ) {
			if( a[i][j] == 0 ) {
				a[i][j] += a[i][j-1];
				a[i][j-1] = 0;
			}
		}
	}//it feels like it can get faster
}

void addnumber(void)//no demand where the num
{
	int i,j;
	srand((unsigned int)time(0));
	while(empty){
		i = rand()%4;
		j = rand()%4;
		if(a[i][j] == 0){
			a[i][j] = (rand()%2+1)*2;
			empty--;
			break;
		}
	}
}
