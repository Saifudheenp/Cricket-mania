#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
int main()
{
	int bat,ball;
	alarm(3);
	FILE *fp = fopen("bat.txt","r");
	fscanf(fp,"%d%d",&bat,&ball);
	switch(bat)
	{
		case 0 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/00.jpg");break;
				 case 1 : system("eog -f ./images/number/01.jpg");break;
				 case 2 : system("eog -f ./images/number/02.jpg");break;
				 case 3 : system("eog -f ./images/number/03.jpg");break;
				 case 4 : system("eog -f ./images/number/04.jpg");break;
				 case 5 : system("eog -f ./images/number/05.jpg");break;
				 case 6 : system("eog -f ./images/number/06.jpg");break;
			 };break;
		case 1 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/10.jpg");break;
				 case 1 : system("eog -f ./images/number/11.jpg");break;
				 case 2 : system("eog -f ./images/number/12.jpg");break;
				 case 3 : system("eog -f ./images/number/13.jpg");break;
				 case 4 : system("eog -f ./images/number/14.jpg");break;
				 case 5 : system("eog -f ./images/number/15.jpg");break;
				 case 6 : system("eog -f ./images/number/16.jpg");break;
			 };break;
		case 2 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/20.jpg");break;
				 case 1 : system("eog -f ./images/number/21.jpg");break;
				 case 2 : system("eog -f ./images/number/22.jpg");break;
				 case 3 : system("eog -f ./images/number/23.jpg");break;
				 case 4 : system("eog -f ./images/number/24.jpg");break;
				 case 5 : system("eog -f ./images/number/25.jpg");break;
				 case 6 : system("eog -f ./images/number/26.jpg");break;
			 };break;
		case 3 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/30.jpg");break;
				 case 1 : system("eog -f ./images/number/31.jpg");break;
				 case 2 : system("eog -f ./images/number/32.jpg");break;
				 case 3 : system("eog -f ./images/number/33.jpg");break;
				 case 4 : system("eog -f ./images/number/34.jpg");break;
				 case 5 : system("eog -f ./images/number/35.jpg");break;
				 case 6 : system("eog -f ./images/number/36.jpg");break;
			 };break;
		case 4 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/40.jpg");break;
				 case 1 : system("eog -f ./images/number/41.jpg");break;
				 case 2 : system("eog -f ./images/number/42.jpg");break;
				 case 3 : system("eog -f ./images/number/43.jpg");break;
				 case 4 : system("eog -f ./images/number/44.jpg");break;
				 case 5 : system("eog -f ./images/number/45.jpg");break;
				 case 6 : system("eog -f ./images/number/46.jpg");break;
			 };break;
		case 5 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/50.jpg");break;
				 case 1 : system("eog -f ./images/number/51.jpg");break;
				 case 2 : system("eog -f ./images/number/52.jpg");break;
				 case 3 : system("eog -f ./images/number/53.jpg");break;
				 case 4 : system("eog -f ./images/number/54.jpg");break;
				 case 5 : system("eog -f ./images/number/55.jpg");break;
				 case 6 : system("eog -f ./images/number/56.jpg");break;
			 };break;
		case 6 : switch(ball)
			 {
				 case 0 : system("eog -f ./images/number/60.jpg");break;
				 case 1 : system("eog -f ./images/number/61.jpg");break;
				 case 2 : system("eog -f ./images/number/62.jpg");break;
				 case 3 : system("eog -f ./images/number/63.jpg");break;
				 case 4 : system("eog -f ./images/number/64.jpg");break;
				 case 5 : system("eog -f ./images/number/65.jpg");break;
				 case 6 : system("eog -f ./images/number/66.jpg");break;
			 };break;
	}
}
