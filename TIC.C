#include <stdio.h>
#include <stdlib.h>
#include<time.h>
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void first ( int mark) {
switch(mark) {
case 1: square[5]='O';break;
case 2: square[5]='O';break;
case 3: square[5]='O';break;
case 4: square[5]='O';break;
case 5: square[9]='O';break;
case 6: square[5]='O';break;
case 7: square[5]='O';break;
case 8: square[5]='O';break;
case 9: square[5]='O';break;
}
}
void compmove() {
    time_t t;
   srand((unsigned) time(&t));

if(square[1]=='O'&&square[2]=='O'&&square[3]!='O')
	square[3]='O';
else if(square[1]=='O'&&square[3]=='O'&&(square[2]!='O'&&square[2]!='X'))
	square[2]='O';
else if(square[2]=='O'&&square[3]=='O'&&(square[1]!='O'&&square[1]!='X'))
	square[1]='O';
else if(square[4]=='O'&&square[6]=='O'&&(square[5]!='O'&&square[5]!='X'))
	square[5]='O';
else if(square[5]=='O'&&square[6]=='O'&&(square[4]!='O'&&square[4]!='X'))
	square[4]='O';
else if(square[4]=='O'&&square[5]=='O'&&(square[6]!='O'&&square[6]!='X'))
	square[6]='O';
else if(square[7]=='O'&&square[8]=='O'&&(square[9]!='O'&&square[9]!='X'))
	square[9]='O';
else if(square[7]=='O'&&square[9]=='O'&&(square[8]!='O'&&square[8]!='X'))
	square[8]='O';
else if(square[8]=='O'&&square[9]=='O'&&(square[7]!='O'&&square[7]!='X'))
	square[7]='O';
else if(square[1]=='O'&&square[4]=='O'&&(square[7]!='O'&&square[7]!='X'))
	square[7]='O';
else if(square[1]=='O'&&square[7]=='O'&&(square[4]!='O'&&square[4]!='X'))
	square[4]='O';
else if(square[4]=='O'&&square[7]=='O'&&(square[1]!='O'&&square[1]!='X'))
	square[1]='O';
else if(square[2]=='O'&&square[5]=='O'&&(square[8]!='O'&&square[8]!='X'))
	square[8]='O';
else if(square[2]=='O'&&square[8]=='O'&&(square[5]!='O'&&square[5]!='X'))
	square[5]='O';
else if(square[5]=='O'&&square[8]=='O'&&(square[2]!='O'&&square[2]!='X'))
	square[2]='O';

else if(square[3]=='O'&&square[6]=='O'&&(square[9]!='O'&&square[9]!='X'))
	square[9]='O';
else if(square[3]=='O'&&square[9]=='O'&&(square[6]!='O'&&square[6]!='X'))
	square[6]='O';
else if(square[6]=='O'&&square[9]=='O'&&(square[3]!='O'&&square[3]!='X'))
	square[3]='O';
else if(square[1]=='O'&&square[5]=='O'&&(square[9]!='O'&&square[9]!='X'))
	square[9]='O';
else if(square[1]=='O'&&square[9]=='O'&&(square[5]!='O'&&square[5]!='X'))
	square[5]='O';
else if(square[5]=='O'&&square[9]=='O'&&(square[1]!='O'&&square[1]!='X'))
	square[1]='O';
else if(square[3]=='O'&&square[5]=='O'&&(square[7]!='O'&&square[7]!='X'))
	square[7]='O';
else if(square[3]=='O'&&square[7]=='O'&&(square[5]!='O'&&square[5]!='X'))
	square[5]='O';
else if(square[5]=='O'&&square[7]=='O'&&(square[3]!='O'&&square[3]!='X'))
	square[3]='O';

else if(square[1]=='X'&&square[2]=='X'&&(square[3]!='X'&&square[3]!='O'))
	square[3]='O';
else if(square[1]=='X'&&square[3]=='X'&&(square[2]!='X'&&square[2]!='O'))
	square[2]='O';
else if(square[2]=='X'&&square[3]=='X'&&(square[1]!='X'&&square[1]!='O'))
	square[1]='O';
else if(square[4]=='X'&&square[6]=='X'&&(square[5]!='X'&&square[5]!='O'))
	square[5]='O';
else if(square[5]=='X'&&square[6]=='X'&&(square[4]!='X'&&square[4]!='O'))
	square[4]='O';
else if(square[4]=='X'&&square[5]=='X'&&(square[6]!='X'&&square[6]!='O'))
	square[6]='O';
else if(square[7]=='X'&&square[8]=='X'&&(square[9]!='X'&&square[9]!='O'))
	square[9]='O';
else if(square[7]=='X'&&square[9]=='X'&&(square[8]!='X'&&square[8]!='O'))
	square[8]='O';
else if(square[8]=='X'&&square[9]=='X'&&(square[7]!='X'&&square[7]!='O'))
	square[7]='O';
else if(square[1]=='X'&&square[4]=='X'&&(square[7]!='X'&&square[7]!='O'))
	square[7]='O';
else if(square[1]=='X'&&square[7]=='X'&&(square[4]!='X'&&square[4]!='O'))
	square[4]='O';
else if(square[4]=='X'&&square[7]=='X'&&(square[1]!='X'&&square[1]!='O'))
	square[1]='O';
else if(square[2]=='X'&&square[5]=='X'&&(square[8]!='X'&&square[8]!='O'))
	square[8]='O';
else if(square[2]=='X'&&square[8]=='X'&&(square[5]!='X'&&square[5]!='O'))
	square[5]='O';
else if(square[5]=='X'&&square[8]=='X'&&(square[2]!='X'&&square[2]!='O'))
	square[2]='O';

 else if(square[3]=='X'&&square[6]=='X'&&(square[9]!='X'&&square[9]!='O'))
	square[9]='O';
else if(square[3]=='X'&&square[9]=='X'&&(square[6]!='X'&&square[6]!='O'))
	square[6]='O';
else if(square[6]=='X'&&square[9]=='X'&&(square[3]!='X'&&square[3]!='O'))
	square[3]='O';
else if(square[1]=='X'&&square[5]=='X'&&(square[9]!='X'&&square[9]!='O'))
	square[9]='O';
else if(square[1]=='X'&&square[9]=='X'&&(square[5]!='X'&&square[5]!='O'))
	square[5]='O';
else if(square[5]=='X'&&square[9]=='X'&&(square[1]!='X'&&square[1]!='O'))
	square[1]='O';
else if(square[3]=='X'&&square[5]=='X'&&(square[7]!='X'&&square[7]!='O'))
	square[7]='O';
else if(square[3]=='X'&&square[7]=='X'&&(square[5]!='X'&&square[5]!='O'))
	square[5]='O';
else if(square[5]=='X'&&square[7]=='X'&&(square[3]!='X'&&square[3]!='O'))
	square[3]='O';

else {int r=-1;
        while(r<=9) {
            r=(rand()%9)+1;
            if((int)square[r] == r+48) {
                    square[ r ]='O';break;}
            else continue;
        }
    }
}

int checkwin() {
    if (square[1] == square[2] && square[2] == square[3]&&square[1]=='O')
	return 1;
    else if (square[4] == square[5] && square[5] == square[6]&&square[4]=='O')
	return 1;
    else if (square[7] == square[8] && square[8] == square[9]&&square[7]=='O')
	return 1;
    else if (square[1] == square[4] && square[4] == square[7]&&square[1]=='O')
	return 1;
    else if (square[2] == square[5] && square[5] == square[8]&&square[2]=='O')
	return 1;
    else if (square[3] == square[6] && square[6] == square[9]&&square[3]=='O')
	return 1;
    else if (square[1] == square[5] && square[5] == square[9]&&square[1]=='O')
	return 1;
    else if (square[3] == square[5] && square[5] == square[7]&&square[3]=='O')
	return 1;

    else if (square[1] == square[2] && square[2] == square[3]&&square[1]=='X')
	return 2;
    else if (square[4] == square[5] && square[5] == square[6]&&square[4]=='X')
	return 2;
    else if (square[7] == square[8] && square[8] == square[9]&&square[7]=='X')
	return 2;
    else if (square[1] == square[4] && square[4] == square[7]&&square[1]=='X')
	return 2;
    else if (square[2] == square[5] && square[5] == square[8]&&square[2]=='X')
	return 2;
    else if (square[3] == square[6] && square[6] == square[9]&&square[3]=='X')
	return 2;
    else if (square[1] == square[5] && square[5] == square[9]&&square[1]=='X')
	return 2;
    else if (square[3] == square[5] && square[5] == square[7]&&square[3]=='X')
	return 2;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
	square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
	!= '7' && square[8] != '8' && square[9] != '9')
    return 0;
    else
	return - 1;
}

void board() {
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player (X)  -  Computer (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

int main() {
    int i,j,c=0;
    i=0;int  choice=0;
    char mark;
    int g;
    board();
    while(choice!=100) {
	printf("Player  enter a number:  ");
	scanf("%d", &choice);
	if(choice==100)
	    break;
		mark='X';

	if (choice == 1 && square[1] == '1')
	    square[1] = mark;

	else if (choice == 2 && square[2] == '2')
	    square[2] = mark;

	else if (choice == 3 && square[3] == '3')
	    square[3] = mark;

	else if (choice == 4 && square[4] == '4')
	    square[4] = mark;

	else if (choice == 5 && square[5] == '5')
	    square[5] = mark;

	else if (choice == 6 && square[6] == '6')
	    square[6] = mark;

	else if (choice == 7 && square[7] == '7')
	    square[7] = mark;

	else if (choice == 8 && square[8] == '8')
	    square[8] = mark;

	else if (choice == 9 && square[9] == '9')
	    square[9] = mark;

	else {
	    printf("Invalid move ");
        continue;
	}
	int h=checkwin();
		i++;
		if(i==5) {
                board();
                printf("draw");
                break;
        }
        if(i==1)
		first(choice);
		else
        compmove();

    if(h==2) {
            printf("player wins");board();break;}
	else if(h==1){
	    printf("computer wins");board();break;}
	else if(h==0){
	    printf("draw");board();break;}
	else if(h==-1){
        board();
        continue;
	}
}
return 0;
}


