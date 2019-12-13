#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void help(){
	printf("Welcome our gues mini game, you have 50 point, every wrong choose you lost 5 point, this program will help you. Good Luck.");
}

int play() {
	int number, ges, point = 50;
		ges = (rand()%100)+1;
		printf("Please enter your number: ");
	while (point > 0) {
		
		scanf("%d", &number);
		if (ges == 0)
			printf("TRY AGAIN");
        else if (ges < number) {
			printf("UP !");
			point = point - 5;
			printf("You have still %d point", &point);
		}
		else if (ges > number) {
			printf("DOWN !");
			point = point - 5;
			printf("You have still %d point", &point);
		}
		else {
			printf("game crush");
			break;
		}
	}
}

int main() {
	srand(time(NULL));
	char ch;
	printf("Lütfen ne yapmak istediðinizi belirtiniz p,h,e:  ");
	scanf("%c", &ch);
	switch(ch) {
		case 'e': exit(0);	break;
		case 'h': help(); break;
		case 'p': printf("%d\n", play()); break;
		default:
			printf("Wrong choose pls choose only p,h,p");
	}

			
			
			
			
			
			
			
			
			return 0;

	}











}