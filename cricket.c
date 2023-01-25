/*
    ~~~~ C R I C K E T   M A N I A ~~~~ 
    Programmer : Saifudheen p
    Mob : 9400283673
*/
#include"header.c"
#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<signal.h>
#define sysclr system("clear")
#define c(n,str) case n :printf(str); break;
pthread_t t1,t2;
void* play_ipl(void *)
{
	system("play -q music/ipltheme.wav -t alsa");
}
void* intro(void *)
{
	system("play -q music/vk.mp3 -t alsa");
}
void* six(void *)
{
	system("play -q music/six.wav -t alsa");
}
void* six1(void *)
{
	system("play -q music/dhonisix.mp3 -t alsa");
}
void* stadium(void *)
{
	system("play -q music/stadium.mp3 -t alsa");
}
void* audience(void *)
{
	system("play -q music/audience.mp3 -t alsa");
}
void* ballhitting(void *)
{
	system("play -q music/ballhitting.mp3 -t alsa");
}
void* typing(void *)
{
	system("play -q music/typing.mp3 -t alsa");
}
void* out(void *)
{
	system("play -q music/out.mp3 -t alsa");
}
void space();
void title();
void cout();
void coutD();
void yout();
void youtD();
void halfcentury(int,int);
void century(int,int);
void comment(int);
void comments(int);
void num(int,int);
void runs(int,int,int);
void cruns(int,int,int);
void hand(int, int);
int main()
{
	int i,h;
	char ch,op;
	pthread_create(&t1,0,play_ipl,0);
	sysclr;
	system("mplayer -really-quiet -vo xv music/introvideo.mp4 -fs");
	sysclr;
	space(10);
        for(i=0;i<=6;i++)
	{
                switch(i)
                {
			c(1,TY"\t\t\t\t     █████╗  ██████╗  ██╗  █████╗  ██╗  ██╗ ███████╗ ████████╗\n"RS)
                        c(2,TY"\t\t\t\t    ██╔══██╗ ██╔══██╗ ██║ ██╔══██╗ ██║ ██╔╝ ██╔════╝ ╚══██╔══╝\n"RS)
                        c(3,TY"\t\t\t\t    ██║  ╚═╝ ██████╔╝ ██║ ██║  ╚═╝ █████═╝  █████╗      ██║   \n"RS)
                        c(4,TR"\t\t\t\t    ██║  ██╗ ██╔══██╗ ██║ ██║  ██╗ ██╔═██╗  ██╔══╝      ██║   \n"RS)
                        c(5,TR"\t\t\t\t    ╚█████╔╝ ██║  ██║ ██║ ╚█████╔╝ ██║ ╚██╗ ███████╗    ██║   \n"RS)
                        c(6,TR"\t\t\t\t     ╚════╝  ╚═╝  ╚═╝ ╚═╝  ╚════╝  ╚═╝  ╚═╝ ╚══════╝    ╚═╝   \n"RS)
                }
		usleep(199999);
	}
	space(1);
        for(i=0;i<=6;i++)
	{
                switch (i)
                {

                        c(1,TY"\t\t\t\t            ███╗   ███╗  █████╗  ███╗  ██╗ ██╗  █████╗       \n"RS)
                        c(2,TY"\t\t\t\t            ████╗ ████║ ██╔══██╗ ████╗ ██║ ██║ ██╔══██╗      \n"RS)
                        c(3,TY"\t\t\t\t            ██╔████╔██║ ███████║ ██╔██╗██║ ██║ ███████║      \n"RS)
                        c(4,TR"\t\t\t\t            ██║╚██╔╝██║ ██╔══██║ ██║╚████║ ██║ ██╔══██║      \n"RS)
                        c(5,TR"\t\t\t\t            ██║ ╚═╝ ██║ ██║  ██║ ██║ ╚███║ ██║ ██║  ██║      \n"RS)
                        c(6,TR"\t\t\t\t            ╚═╝     ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚══╝ ╚═╝ ╚═╝  ╚═╝      \n"RS)
                }
		usleep(199999);
	}
	space(8);
	sleep(2);
			printf(LRR"\t\t\t\t      ~~~~~~~~~~~~ 𝓟𝓻𝓮𝓼𝓼 𝓔𝓷𝓽𝓮𝓻 𝓽𝓸 𝓬𝓸𝓷𝓽𝓲𝓷𝓾𝓮  ~~~~~~~~~~~~~~~   \n"RS);        
	__fpurge(stdin);
        scanf("%c",&ch);
how:
	sysclr;
	space(10);
	printf("\t\t\t\t\t\t\t𝐇 𝐎 𝐖    𝐓 𝐎   𝐏 𝐋 𝐀 𝐘\n");
	space(5);
	printf("\t      𝟙 . 𝕀 𝕟 𝕤 𝕥 𝕣 𝕦 𝕔 𝕥 𝕚 𝕠 𝕟 𝕤            𝟚 . 𝔻 𝕖 𝕞  𝕠  𝕧 𝕚 𝕕 𝕖 𝕠            𝟛 . ℂ 𝕠 𝕟 𝕥 𝕚 𝕟 𝕦 𝕖  𝕥 𝕠  ℙ 𝕝 𝕒 𝕪 \n");
	scanf("%d",&h);
	if(h==1)
	{
		FILE *fp = fopen("instructions.c","r");
	//	pthread_create(&t2,0,typing,0);
		sysclr;
		while((ch=fgetc(fp))!=EOF){
			printf("%c",ch);
			usleep(10000);
			fflush(stdout);
		}
		printf(LWW"\t\t\t\t          ~~~~~~~~~~~~ 𝓟𝓻𝓮𝓼𝓼 𝓔𝓷𝓽𝓮𝓻 𝓽𝓸 𝓬𝓸𝓷𝓽𝓲𝓷𝓾𝓮  ~~~~~~~~~~~~~~~   \n"RS);        
		__fpurge(stdin);
        	scanf("%c",&ch);
		fclose(fp);
		sysclr;
		goto how;	
	}
	if(h==2)
	{
		sysclr;
		system("mplayer -really-quiet -vo xv music/howtoplay.mp4 -fs");
		sysclr;
		goto how;
	}

	do
	{
	int batcount=0,fieldcount=0,ctoss,toss,bat,ball=0,run=0,crun=0,cover=0,yover=0,ycentury=0,ccentury=0,over=0;
	srand((unsigned long int)&run);
	sysclr;
	space(7);
        printf("\t\t\t\t\t\t\t▀█▀ █▀█ █▀ █▀\n");
        printf("\t\t\t\t\t\t\t █  █▄█ ▄█ ▄█\n");
	space(6);

	printf(LCC"\t\t	▄█   █ █ █▀▀ ▄▀█ █▀▄  "RS" \t\t\t\t\t"LGG"    ▀█   ▀█▀ ▄▀█ █ █  \n"RS);
	printf(LCC"\t\t	 █ ▄ █▀█ ██▄ █▀█ █▄▀  "RS" \t\t\t\t\t"LGG"    █▄ ▄  █  █▀█ █ █▄▄\n"RS);
toss:
        scanf("%d",&toss);
	if((toss!=1)&&(toss!=2))
	{
		space(3);
		printf(LRR"\t\t\t\t\t\tWrong choice..!! Choose 1 or 2\n "RS);
		goto toss;
	}
        ctoss=rand()%2+1;
	sysclr;
        if(toss==ctoss)
        {
                space(14);
		printf(LWW"\t\t\t\t\t\t   𝗬 𝗢 𝗨  𝗪  𝗢 𝗡  𝗧 𝗛 𝗘  𝗧 𝗢 𝗦 𝗦\n"RS);
		sleep(1);
		space(3);
                printf("\t\t\t\t 𝟙. 𝔹 𝕒 𝕥 𝕥 𝕚 𝕟  𝕘  \t\t\t\t  𝟚. 𝔽 𝕚 𝕖 𝕝𝕕 𝕚𝕟 𝕘   \n");
bat:
		scanf("%d",&bat);
		if((bat!=1)&&(bat!=2))
		{
			space(3);
			printf(LRR"\t\t\t\t\t\tWrong choice..!! Choose 1 or 2\n "RS);
			goto bat;
		}
                if(bat==1)
		{
		sysclr;
		system("killall play");
		sysclr;
		pthread_create(&t2,0,intro,0);
		sysclr;
                        goto batting;
		}
                if(bat==2)
		{
		sysclr;
		system("killall play");
		sysclr;
		pthread_create(&t2,0,intro,0);
		sysclr;
                        goto fielding;
		}
        }
        else
        {
                sysclr;
		space(16);
		printf("\t\t\t\t\t\t 𝕐 𝕆 𝕌   𝕃 𝕆 𝕊 𝔼   𝕋 ℍ 𝔼   𝕋 𝕆 𝕊 𝕊 \n"RS);
		sleep(2); 
		sysclr;
		space(16);
                printf("\t\t\t\t\t      ℂ 𝕠 𝕞  𝕡 𝕦 𝕥𝕖𝕣 𝕔 𝕙 𝕠 𝕠 𝕤 𝕖 𝕤  𝕗𝕚𝕖 𝕝𝕕 𝕚𝕟 𝕘\n");
		sleep(2);  
		sysclr;
		sysclr;
		system("killall play");
		sysclr;
		pthread_create(&t2,0,intro,0);
		sysclr;
        }
batting:


		sysclr;
		pthread_create(&t1,0,audience,0);
		sysclr;
	over=0;
	sysclr;
	space(16);
	printf("\t\t\t\t\t\t\t𝓖𝓮𝓽 𝓡𝓮𝓪𝓭𝔂 𝓣𝓸 𝓑𝓪𝓽...\n");
	sleep(2);
	bat=1;ball=0;
	while(bat!=ball)
	{
		printf(" Hit the ball: \n");
		scanf("%d",&bat);
		if((bat>6)||(bat<0))
			bat=0;
		sleep(1);
		ball=rand()%7;
		cover++;
		if(cover>6)
		{
			cover=1;
			over++;
		}
		if(bat!=ball)
		{
			run+=bat;
			if((run>=50)&&(ycentury==0))
			{
				ycentury++;
				halfcentury(run,crun);
			}
			if((run>=100)&&(ycentury==1))
			{
				ycentury++;
				century(run,crun);
			}
			sysclr;				
			hand(bat,ball);
			sysclr;
			sysclr;
			title();
                        printf(TY"\t\t\t\t\t\t   𝓨𝓸𝓾  \t\t\t 𝓒𝓸𝓶 𝓹𝓾𝓽𝓮𝓻  \n"RS);
                        space(1);
			printf("\t\t\t\t\t\t 🄱 🄰 🅃   \t\t\t Ⓑ Ⓐ Ⓛ Ⓛ    \n");
                        space(1);
			num(bat,ball);
			space(2);
			comment(bat);
			space(1);
			runs(run,cover,over);
		}
		else
		{
			sysclr;
			sysclr;		
			hand(bat,ball);
			sysclr;
			sysclr;
			if ((cover==1)&&(run==0))
				youtD();
			else
				yout();
			batcount++;
		}
		if((fieldcount==1)&&(crun!=0))
		{
			space(1);
			printf(TY"\t\t\t\t\t\t    You have to take %d runs more to win\n"RS,crun-run+1);
		}
		if((run>crun)&&(fieldcount==1))
		{
			sysclr;
			sysclr;
			hand(bat,ball);
                        sleep(1);
			sysclr;
			sysclr;
			title();
                        printf(TY"\t\t\t\t\t\t   𝓨𝓸𝓾  \t\t\t 𝓒𝓸𝓶 𝓹𝓾𝓽𝓮𝓻  \n"RS);
                        space(1);
                        printf("\t\t\t\t\t\t 🄱 🄰 🅃  \t\t\t Ⓑ Ⓐ Ⓛ Ⓛ    \n");
                        space(1);
                        num(bat,ball);
                        sleep(1);
			break;
		}

	}
	if(fieldcount==1)
		goto decision;
	sysclr;
	sysclr;
	space(16);
	printf("\t\t\t\t\t     ~~ 𝙲𝚘𝚖𝚙𝚞𝚝𝚎𝚛 𝚗𝚎𝚎𝚍𝚜 𝚝𝚘 𝚌𝚑𝚊𝚜𝚎 %d 𝚛𝚞𝚗𝚜 𝚝𝚘 𝚠𝚒𝚗 ~~\n",run+1);
	sleep(4);
fielding:

		
		sysclr;
		pthread_create(&t1,0,audience,0);
		sysclr;
	over=0;
	space(16);
	printf("\t\t\t\t\t\t\t 𝓖𝓮𝓽 𝓡𝓮𝓪𝓭𝔂 𝓣𝓸 𝓕𝓲𝓮𝓵𝓭....\n");
	sleep(2);
	bat=1;ball=0;
	while(bat!=ball)
	{
		printf("Throw the ball:\n");
		scanf("%d",&ball);
		if((ball>6)||(ball<0))
			ball=7;
		bat=rand()%7;
		yover++;
		if(yover>6)
		{
			yover =1;
			over++;
		}
		if(ball!=bat)
		{
			crun+=bat;
			if((crun>=50)&&(ccentury==0))
			{
				ccentury++;
				halfcentury(crun,run);
			}
			if((crun>=100)&&(ccentury==1))
			{
				ccentury++;
				century(crun,run);
			}
			sysclr;
			sysclr;
			hand(bat,ball);
			sysclr;
			sysclr;
			title();
                        printf(TY"\t\t\t\t\t\t𝓒𝓸𝓶 𝓹𝓾𝓽𝓮𝓻\t\t\t   𝓨𝓸𝓾 \n"RS);
                        space(1);
		        printf("\t\t\t\t\t\t 🄱 🄰 🅃  \t\t\t Ⓑ Ⓐ Ⓛ Ⓛ    \n");
                        space(1);
			num(bat,ball);
			space(2);
			comments(bat);
			space(1);
			cruns(crun,yover,over);
		}
		else
		{
			sysclr;
			sysclr;
			hand(bat,ball);
			if((yover==1)&&(crun==0))
				coutD();
			else 
				cout();
			fieldcount=1;
		}
		if(batcount==1)
			printf(TY"\t\t\t\t\t\t     Computer need %d more runs to win\n "RS,run-crun+1);
		if((crun>run)&&(batcount==1))
		{
			sysclr;
			title();
                        printf(TY"\t\t\t\t\t\t𝓒𝓸𝓶 𝓹𝓾𝓽𝓮𝓻\t\t\t   𝓨𝓸𝓾 \n"RS);
                        space(1);
                        printf("\t\t\t\t\t\t🄱 🄰 🅃  \t\t\t Ⓑ Ⓐ Ⓛ Ⓛ    \n");
                        space(1);
                        num(bat,ball);
                        sleep(1);
			break;
		}
	}
	if(batcount==0)
	{
		sysclr;
		space(16);
		printf("\t\t\t\t\t\t ~~ 𝚈𝚘𝚞 𝚗𝚎𝚎𝚍𝚜 𝚝𝚘 𝚌𝚑𝚊𝚜𝚎 %d 𝚛𝚞𝚗𝚜 𝚝𝚘 𝚠𝚒𝚗 ~~\n",crun+1);
		sleep(4);
		goto batting;
	}
decision:
	sysclr;
	sysclr;
	space(10);
	for(i=1;i<7;i++)
		switch(i)
		{	

		c(1,TR"\t\t\t\t\t\t┏━━━┓┏━━━┓┏━━━┓┏━━┓┏━━━┓┏━━┓┏━━━┓┏━┓ ┏┓\n"RS);
		c(2,TR"\t\t\t\t\t\t┗┓┏┓┃┃┏━━┛┃┏━┓┃┗┫┣┛┃┏━┓┃┗┫┣┛┃┏━┓┃┃ ┗┓┃┃\n"RS);
		c(3,TR"\t\t\t\t\t\t ┃┃┃┃┃┗━━┓┃┃ ┗┛ ┃┃ ┃┗━━┓ ┃┃ ┃┃ ┃┃┃┏┓┗┛┃\n"RS);
		c(4,"\t\t\t\t\t\t ┃┃┃┃┃┏━━┛┃┃ ┏┓ ┃┃ ┗━━┓┃ ┃┃ ┃┃ ┃┃┃┃┗┓ ┃\n");
		c(5,"\t\t\t\t\t\t┏┛┗┛┃┃┗━━┓┃┗━┛┃┏┫┣┓┃┗━┛┃┏┫┣┓┃┗━┛┃┃┃ ┃ ┃\n");
		c(6,"\t\t\t\t\t\t┗━━━┛┗━━━┛┗━━━┛┗━━┛┗━━━┛┗━━┛┗━━━┛┗┛ ┗━┛\n");
		}
	for(i=1;i<7;i++)
		switch(i)
		{	
		c(1,"\t\t\t\t\t\t ┏━━━┓┏━━━┓┏━┓ ┏┓┏━━━┓┏━━┓┏━┓ ┏┓┏━━━┓\n");
		c(2,"\t\t\t\t\t\t ┃┏━┓┃┃┏━━┛┃ ┗┓┃┃┗┓┏┓┃┗┫┣┛┃ ┗┓┃┃┃┏━┓┃\n");
		c(3,"\t\t\t\t\t\t ┃┗━┛┃┃┗━━┓┃┏┓┗┛┃ ┃┃┃┃ ┃┃ ┃┏┓┗┛┃┃┃ ┗┛\n");
		c(4,TR"\t\t\t\t\t\t ┃┏━━┛┃┏━━┛┃┃┗┓ ┃ ┃┃┃┃ ┃┃ ┃┃┗┓ ┃┃┃┏━┓\n"RS);
		c(5,TR"\t\t\t\t\t\t ┃┃   ┃┗━━┓┃┃ ┃ ┃┏┛┗┛┃┏┫┣┓┃┃ ┃ ┃┃┗┻━┃\n"RS);
		c(6,TR"\t\t\t\t\t\t ┗┛   ┗━━━┛┗┛ ┗━┛┗━━━┛┗━━┛┗┛ ┗━┛┗━━━┛\n"RS);
		}

	sleep(3);
	sysclr;
	if(run>crun)
	{
		sysclr;
		space(13);
		printf("\t\t\t\t\t\t\t      𝓨𝓸𝓾 𝓐𝓻𝓮 𝓣𝓱𝓮");
		space(3);
		sleep(2);
		for(i=1;i<7;i++)
			switch(i)
			{
				c(1,TR"\t\t\t\t\t ██╗       ██╗ ██╗ ███╗  ██╗ ███╗  ██╗ ███████╗ ██████╗ \n"RS);
				c(2,TR"\t\t\t\t\t ██║  ██╗  ██║ ██║ ████╗ ██║ ████╗ ██║ ██╔════╝ ██╔══██╗\n"RS);
				c(3,"\t\t\t\t\t ╚██╗████╗██╔╝ ██║ ██╔██╗██║ ██╔██╗██║ █████╗   ██████╔╝\n"RS);
				c(4,"\t\t\t\t\t  ████╔═████║  ██║ ██║╚████║ ██║╚████║ ██╔══╝   ██╔══██╗\n"RS);
				c(5,TR"\t\t\t\t\t  ╚██╔╝ ╚██╔╝  ██║ ██║ ╚███║ ██║ ╚███║ ███████╗ ██║  ██║\n"RS);
				c(6,TR"\t\t\t\t\t   ╚═╝   ╚═╝   ╚═╝ ╚═╝  ╚══╝ ╚═╝  ╚══╝ ╚══════╝ ╚═╝  ╚═╝\n"RS);
			}
		sleep(3);
		sysclr;
		system("killall play");
		sysclr;
		system("mplayer -really-quiet -vo xv music/cheergirls.mp4 -fs");
		sysclr;
	}
	else if(run==crun)
	{

		system("killall play");
		sysclr;
		space(13);
		printf("\t\t\t\t\t\t\t This match ended as");
		space(3);
		sleep(2);
		for(i=1;i<7;i++)
			switch(i)
			{
				c(1,TR"\t\t\t\t\t\t ██████╗  ██████╗  █████╗   ██╗       ██╗\n"RS);
				c(2,TG"\t\t\t\t\t\t ██╔══██╗ ██╔══██╗ ██╔══██╗ ██║  ██╗  ██║\n"RS);
				c(3,TY"\t\t\t\t\t\t ██║  ██║ ██████╔╝ ███████║ ╚██╗████╗██╔╝\n"RS);
				c(4,TC"\t\t\t\t\t\t ██║  ██║ ██╔══██╗ ██╔══██║  ████╔═████║ \n"RS);
				c(5,TP"\t\t\t\t\t\t ██████╔╝ ██║  ██║ ██║  ██║   ██╔╝ ╚██╔╝ \n"RS);
				c(6,TB"\t\t\t\t\t\t ╚═════╝  ╚═╝  ╚═╝ ╚═╝  ╚═╝   ╚═╝   ╚═╝  \n"RS);
			}
		sleep(3);
		sysclr;
	}
	else
	{
		system("killall play");
		sysclr;
		space(13);
		printf("\t\t\t\t\t\t\t      𝓨𝓸𝓾 𝓐𝓻𝓮 𝓣𝓱𝓮");
		space(3);
		sleep(2);
		for(i=1;i<7;i++)
			switch(i)
			{
				c(1,TR"\t\t\t\t\t ██╗       █████╗   █████╗   ██████╗ ███████╗██████╗ \n"RS);
				c(2,TR"\t\t\t\t\t ██║      ██╔══██╗ ██╔══██╗ ██╔════╝ ██╔════╝██╔══██╗\n"RS);
				c(3,"\t\t\t\t\t ██║      ██║  ██║ ██║  ██║ ╚█████╗  █████╗  ██████╔╝\n"RS);
				c(4,"\t\t\t\t\t ██║      ██║  ██║ ██║  ██║  ╚═══██╗ ██╔══╝  ██╔══██╗\n"RS);
				c(5,TR"\t\t\t\t\t ███████╗ ╚█████╔╝ ╚█████╔╝ ██████╔╝ ███████╗██║  ██║\n"RS);
				c(6,TR"\t\t\t\t\t ╚══════╝  ╚════╝   ╚════╝  ╚═════╝  ╚══════╝╚═╝  ╚═╝\n"RS);
			}
		sleep(3);
		sysclr;
		sysclr;
		system("mplayer -really-quiet -vo xv music/gameover.mp4 -fs");
		sysclr;
		sysclr;
	}
	space(16);
	printf("\t\t\t\t\t      𝓓𝓸 𝔂𝓸𝓾 𝓦 𝓪𝓷𝓽 𝓽𝓸 𝓹𝓵𝓪𝔂 𝓸𝓷𝓮 𝓶𝓸𝓻𝓮 𝓽𝓲𝓶𝓮(𝓨/𝓝)...❓\n");
	scanf(" %c",&op);
	}
	while((op=='Y')||(op=='y'));

	system("killall play");

}
void space(int l)
{
	int i,j;
	for(i=0;i<l;i++)
		printf("\n");
}
void cout()
{

	int i;
	system("killall play");
	sysclr;
	pthread_create(&t2,0,out,0);
	sysclr;
	system("mplayer -really-quiet -vo xv music/out.mp4 -fs");
	sysclr;
	space(13);
	printf("\t\t\t\t\t\t\t   𝚈𝚊𝚑𝚘𝚘𝚘....!!  𝚒𝚝𝚜 \n");
	sleep(1);
	space(1);
	for(i=1;i<7;i++)
		switch(i)
		{
			c(1,"\t\t\t\t\t\t\t █████╗ ██╗   ██╗████████╗\n");
			c(2,"\t\t\t\t\t\t\t██╔══██╗██║   ██║╚══██╔══╝\n");
			c(3,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(4,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(5,"\t\t\t\t\t\t\t╚█████╔╝╚██████╔╝   ██║   \n");
			c(6,"\t\t\t\t\t\t\t ╚════╝  ╚═════╝    ╚═╝   \n");
		}
	sleep(2);
}
void coutD()
{

	int i;
	system("killall play");
	sysclr;
	pthread_create(&t2,0,out,0);
	sysclr;
	system("mplayer -really-quiet -vo xv music/out.mp4 -fs");
	sysclr;
	space(13);
	printf("\t\t\t\t\t\t\t   𝓗𝓮𝓱𝓮...𝓘𝓽𝓼 𝓓 𝓤 𝓒 𝓚 \n");
	sleep(1);
	space(1);
	for(i=1;i<7;i++)
		switch(i)
		{
			c(1,"\t\t\t\t\t\t\t █████╗ ██╗   ██╗████████╗\n");
			c(2,"\t\t\t\t\t\t\t██╔══██╗██║   ██║╚══██╔══╝\n");
			c(3,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(4,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(5,"\t\t\t\t\t\t\t╚█████╔╝╚██████╔╝   ██║   \n");
			c(6,"\t\t\t\t\t\t\t ╚════╝  ╚═════╝    ╚═╝   \n");
		}
	sleep(2);
}
void yout()
{

	int i;
	system("killall play");
	sysclr;
	pthread_create(&t2,0,out,0);
	sysclr;
	system("mplayer -really-quiet -vo xv music/out.mp4 -fs");
	sysclr;
	space(13);
	printf("\t\t\t\t\t\t\t   𝙾𝚘𝚘𝚙𝚜...!! 𝚈𝚘𝚞 𝚊𝚛𝚎 \n");
	sleep(1);
	space(1);
	for(i=1;i<7;i++)
		switch(i)
		{
			c(1,"\t\t\t\t\t\t\t █████╗ ██╗   ██╗████████╗\n");
			c(2,"\t\t\t\t\t\t\t██╔══██╗██║   ██║╚══██╔══╝\n");
			c(3,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(4,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(5,"\t\t\t\t\t\t\t╚█████╔╝╚██████╔╝   ██║   \n");
			c(6,"\t\t\t\t\t\t\t ╚════╝  ╚═════╝    ╚═╝   \n");
		}
	sleep(2);
}
void youtD()
{

	int i;
	system("killall play");
	sysclr;
	pthread_create(&t2,0,out,0);
	sysclr;
	system("mplayer -really-quiet -vo xv music/out.mp4 -fs");
	sysclr;
	space(13);
	printf("\t\t\t\t\t\t\t𝙾𝚘𝚘𝚙𝚜...!! 𝚈𝚘𝚞 𝚊𝚛𝚎 𝓓 𝓤 𝓒 𝓚 \n");
	sleep(1);
	space(1);
	for(i=1;i<7;i++)
		switch(i)
		{
			c(1,"\t\t\t\t\t\t\t █████╗ ██╗   ██╗████████╗\n");
			c(2,"\t\t\t\t\t\t\t██╔══██╗██║   ██║╚══██╔══╝\n");
			c(3,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(4,"\t\t\t\t\t\t\t██║  ██║██║   ██║   ██║   \n");
			c(5,"\t\t\t\t\t\t\t╚█████╔╝╚██████╔╝   ██║   \n");
			c(6,"\t\t\t\t\t\t\t ╚════╝  ╚═════╝    ╚═╝   \n");
		}
	sleep(2);
}
void runs(int run,int cover,int over)
{
	printf("\t\t\t\t\t\t      ╔═════════════════════════════╗\n");
	printf("\t\t\t\t\t\t      ║    "TP"     Score Board "RS"        ║\n");
	printf("\t\t\t\t\t\t      ║ --------------------------- ║\n");
	printf("\t\t\t\t\t\t      ║  Your TotalRuns =%3d        ║\n",run);
	printf("\t\t\t\t\t\t      ║  Over =%2d.%2d                ║\n",over,cover);
	printf("\t\t\t\t\t\t      ╚═════════════════════════════╝\n");
}
void cruns(int crun,int yover,int over)
{
	printf("\t\t\t\t\t\t      ╔═════════════════════════════╗\n");
        printf("\t\t\t\t\t\t      ║     "TP"    Score Board "RS"        ║\n");
        printf("\t\t\t\t\t\t      ║ --------------------------  ║\n");
        printf("\t\t\t\t\t\t      ║  Computer Total Runs =%3d   ║\n",crun);
        printf("\t\t\t\t\t\t      ║  Over =%2d.%2d                ║\n",over,yover);
        printf("\t\t\t\t\t\t      ╚═════════════════════════════╝\n");
}
void num(int bat,int ball)
{
	int i;
	for(i=1;i<7;i++)
	{
		switch(bat)
		{
			case 0:switch(i)
			       {
				       case 1:printf(TR"\t\t\t\t\t\t  █████╗  \t\t\t"RS);break;
				       case 2:printf(TR"\t\t\t\t\t\t ██╔══██╗ \t\t\t"RS);break;
				       case 3:printf(TR"\t\t\t\t\t\t ██║  ██║ \t\t\t"RS);break;
				       case 4:printf(TR"\t\t\t\t\t\t ██║  ██║ \t\t\t"RS);break;
				       case 5:printf(TR"\t\t\t\t\t\t ╚█████╔╝ \t\t\t"RS);break;
				       case 6:printf(TR"\t\t\t\t\t\t  ╚════╝  \t\t\t"RS);break;
			       }break;
			case 1:	switch(i)
				{
					case 1:printf(TR"\t\t\t\t\t\t   ███╗  \t\t\t"RS);break;
					case 2:printf(TR"\t\t\t\t\t\t  ████║  \t\t\t"RS);break;
					case 3:printf(TR"\t\t\t\t\t\t ██╔██║  \t\t\t"RS);break;
					case 4:printf(TR"\t\t\t\t\t\t ╚═╝██║  \t\t\t"RS);break;
					case 5:printf(TR"\t\t\t\t\t\t ███████╗\t\t\t"RS);break;
					case 6:printf(TR"\t\t\t\t\t\t ╚══════╝\t\t\t"RS);break;
				}break;
			case 2:switch(i)
				{
					case 1:printf(TR"\t\t\t\t\t\t ██████╗  \t\t\t"RS);break;
					case 2:printf(TR"\t\t\t\t\t\t ╚════██╗ \t\t\t"RS);break;
					case 3:printf(TR"\t\t\t\t\t\t   ███╔═╝ \t\t\t"RS);break;
					case 4:printf(TR"\t\t\t\t\t\t ██╔══╝   \t\t\t"RS);break;
					case 5:printf(TR"\t\t\t\t\t\t ███████╗ \t\t\t"RS);break;
					case 6:printf(TR"\t\t\t\t\t\t ╚══════╝ \t\t\t"RS);break;
				}break;
			case 3:switch(i)
			       {
				       case 1:printf(TR"\t\t\t\t\t\t ██████╗ \t\t\t"RS);break;
				       case 2:printf(TR"\t\t\t\t\t\t ╚════██╗\t\t\t"RS);break;
				       case 3:printf(TR"\t\t\t\t\t\t █████╔╝ \t\t\t"RS);break;
				       case 4:printf(TR"\t\t\t\t\t\t ╚═══██╗ \t\t\t"RS);break;
				       case 5:printf(TR"\t\t\t\t\t\t ██████╔╝\t\t\t"RS);break;
				       case 6:printf(TR"\t\t\t\t\t\t ╚═════╝ \t\t\t"RS);break;
			       }break;
			case 4:switch(i)
			       {
				       case 1:printf(TR"\t\t\t\t\t\t   ██╗██╗\t\t\t"RS);break;
				       case 2:printf(TR"\t\t\t\t\t\t  ██╔╝██║\t\t\t"RS);break;
				       case 3:printf(TR"\t\t\t\t\t\t ██╔╝ ██║\t\t\t"RS);break;
				       case 4:printf(TR"\t\t\t\t\t\t ███████║\t\t\t"RS);break;
				       case 5:printf(TR"\t\t\t\t\t\t ╚════██║\t\t\t"RS);break;
				       case 6:printf(TR"\t\t\t\t\t\t      ╚═╝\t\t\t"RS);break;
			       }break;
			case 5:switch(i)
			       {
				       case 1:printf(TR"\t\t\t\t\t\t ███████╗\t\t\t"RS);break;
				       case 2:printf(TR"\t\t\t\t\t\t ██╔════╝\t\t\t"RS);break;
				       case 3:printf(TR"\t\t\t\t\t\t ██████╗ \t\t\t"RS);break;
				       case 4:printf(TR"\t\t\t\t\t\t ╚════██╗\t\t\t"RS);break;
				       case 5:printf(TR"\t\t\t\t\t\t ██████╔╝\t\t\t"RS);break;
				       case 6:printf(TR"\t\t\t\t\t\t ╚═════╝ \t\t\t"RS);break;
			       }break;
			case 6:pthread_create(&t2,0,six,0);
			       switch(i)
			       {
				       case 1:printf(TR"\t\t\t\t\t\t  █████╗ \t\t\t"RS);break;
				       case 2:printf(TR"\t\t\t\t\t\t ██╔═══╝ \t\t\t"RS);break;
				       case 3:printf(TR"\t\t\t\t\t\t ██████╗ \t\t\t"RS);break;
				       case 4:printf(TR"\t\t\t\t\t\t ██╔══██╗\t\t\t"RS);break;
				       case 5:printf(TR"\t\t\t\t\t\t ╚█████╔╝\t\t\t"RS);break;
				       case 6:printf(TR"\t\t\t\t\t\t  ╚════╝ \t\t\t"RS);break;
			       }break;
			    
		}
		
		switch(ball)
		{
			case 0:switch(i)
			       {
				       case 1:printf(TB"  █████╗  \n"RS);break;
				       case 2:printf(TB" ██╔══██╗ \n"RS);break;
				       case 3:printf(TB" ██║  ██║ \n"RS);break;
				       case 4:printf(TB" ██║  ██║ \n"RS);break;
				       case 5:printf(TB" ╚█████╔╝ \n"RS);break;
				       case 6:printf(TB"  ╚════╝  \n"RS);break;
			       }break;
			case 1: switch(i)
				{
					case 1:printf(TB"   ███╗  \n"RS);break;
					case 2:printf(TB"  ████║  \n"RS);break;
					case 3:printf(TB" ██╔██║  \n"RS);break;
					case 4:printf(TB" ╚═╝██║  \n"RS);break;
					case 5:printf(TB" ███████╗\n"RS);break;
					case 6:printf(TB" ╚══════╝\n"RS);break;
				}break;
			case 2: switch(i)
				{
					case 1:printf(TB" ██████╗  \n"RS);break;
					case 2:printf(TB" ╚════██╗ \n"RS);break;
					case 3:printf(TB"   ███╔═╝ \n"RS);break;
					case 4:printf(TB" ██╔══╝   \n"RS);break;
					case 5:printf(TB" ███████╗ \n"RS);break;
					case 6:printf(TB" ╚══════╝ \n"RS);break;
				}break;
			case 3:switch(i)
			       {
				       case 1:printf(TB" ██████╗ \n"RS);break;
				       case 2:printf(TB" ╚════██╗\n"RS);break;
				       case 3:printf(TB" █████╔╝ \n"RS);break;
				       case 4:printf(TB" ╚═══██╗ \n"RS);break;
				       case 5:printf(TB" ██████╔╝\n"RS);break;
				       case 6:printf(TB" ╚═════╝ \n"RS);break;
			       }break;
			case 4:switch(i)
			       {
				       case 1:printf(TB"   ██╗██╗\n"RS);break;
				       case 2:printf(TB"  ██╔╝██║\n"RS);break;
				       case 3:printf(TB" ██╔╝ ██║\n"RS);break;
				       case 4:printf(TB" ███████║\n"RS);break;
				       case 5:printf(TB" ╚════██║\n"RS);break;
				       case 6:printf(TB"      ╚═╝\n"RS);break;
			       }break;
			case 5:switch(i)
			       {
				       case 1:printf(TB" ███████╗\n"RS);break;
				       case 2:printf(TB" ██╔════╝\n"RS);break;
				       case 3:printf(TB" ██████╗ \n"RS);break;
				       case 4:printf(TB" ╚════██╗\n"RS);break;
				       case 5:printf(TB" ██████╔╝\n"RS);break;
				       case 6:printf(TB" ╚═════╝ \n"RS);break;
			       }break;
			case 6:switch(i)
			       {
				       case 1:printf(TB"  █████╗ \n"RS);break;
				       case 2:printf(TB" ██╔═══╝ \n"RS);break;
				       case 3:printf(TB" ██████╗ \n"RS);break;
				       case 4:printf(TB" ██╔══██╗\n"RS);break;
				       case 5:printf(TB" ╚█████╔╝\n"RS);break;
				       case 6:printf(TB"  ╚════╝ \n"RS);break;
			       }break;
			case 7:switch(i)
                               {
                                       case 1:printf(TB"  █▄ █ █▀█    \n"RS);break;
                                       case 2:printf(TB"  █ ▀█ █▄█    \n"RS);break;
                                       case 3:printf(TB"              \n"RS);break;
                                       case 4:printf(TB"█▄▄ ▄▀█ █   █ \n"RS);break;
                                       case 5:printf(TB"█▄█ █▀█ █▄▄ █▄\n"RS);break;
                                       case 6:printf(TB"              \n"RS);break;
                               }break;
		}
	}
}
void comment(int bat)
{	
	switch(bat)
	{
		case 0: printf("\t\t\t\t\t\t      Thats a fast ball, You missed that");break;
		case 1: printf("\t\t\t\t\t\t                 Nice short ..!");break;
		case 2: printf("\t\t\t\t\t\t     Fast runner. You have  hard luck.!!!");break;
		case 3: printf("\t\t\t\t\t\t             Just missed Boundary...");break;	
		case 4: printf("\t\t\t\t\t\t      𝘎 𝘳𝘦𝘢𝘵 𝘴𝘩𝘰𝘵..𝘐𝘵𝘴 𝘢 𝘉𝘰𝘶𝘯𝘥𝘢𝘳𝘺...!!!!");break;
		case 5: printf("\t\t\t\t\t\t    Wicket keeper tired...He missed the ball");break;
		case 6: printf("\t\t\t\t\t    𝚆𝚑𝚊𝚝 𝚊 𝚂𝙸𝚇..! 𝙸𝚝𝚜 Hᴇʟɪᴄᴏᴘᴛᴇʀ sʜᴏᴛ. Ball flies %d meter.",rand()%89+65);break;
	}
}
void comments(int bat)
{	
	switch(bat)
	{
		case 0: printf("\t\t\t\t\t\t         What an awesome ball...!!");break;
		case 1: printf("\t\t\t\t\t\t            superb.. balling ..!");break;
		case 2: printf("\t\t\t\t\t\t               Nice ball..!!!");break;
		case 3: printf("\t\t\t\t\t\t             Aim on the stumps");break;	
		case 4: printf("\t\t\t\t\t\t     Just missed that catch out...keep try..");break;
		case 5: printf("\t\t\t\t\t\t        Throw on his leg...Make LBW.");break;
		case 6: printf("\t\t\t\t\t\t     Ooops... Thats six.Ball flies %d meter.",rand()%89+65);break;
	}
}
void century(int run,int crun)
{
	int i;
        sysclr;
	space(13);
	if(crun>100)
	printf("\t\t\t\t\t\t\t COMPUTER GOT \n");
	else if(run>100)
	printf("\t\t\t\t\t\t\t YOU GOT \n");
	space(1);
        for(i=1;i<7;i++)
                switch(i)
                {
                        c(1,TY"\t\t\t\t █████╗  ███████╗ ███╗  ██╗ ████████╗ ██╗   ██╗ ██████╗ ██╗   ██╗ \n"RS);
                        c(2,TR"\t\t\t\t██╔══██╗ ██╔════╝ ████  ██║ ╚══██╔══╝ ██║   ██║ ██╔══██╗╚██╗ ██╔╝\n"RS);
                        c(3,TB"\t\t\t\t██║  ╚═╝ █████╗   ██╔██╗██║    ██║    ██║   ██║ ██████╔╝ ╚████╔╝\n"RS);
                        c(4,TC"\t\t\t\t██║  ██╗ ██╔══╝   ██║╚████║    ██║    ██║   ██║ ██╔══██╗  ╚██╔╝\n"RS);
                        c(5,TG"\t\t\t\t╚█████╔╝ ███████╗ ██║ ╚███║    ██║    ╚██████╔╝ ██║  ██║   ██║\n"RS);
                        c(6,TP"\t\t\t\t ╚════╝  ╚══════╝ ╚═╝  ╚══╝    ╚═╝     ╚═════╝  ╚═╝  ╚═╝   ╚═╝\n"RS);
                }
        sleep(3);
}
void halfcentury(int run,int crun)
{
	int i;
        sysclr;
	space(10);
	printf("\t\t\t\t\t\t\t      its \n");
	space(1);
	printf("\t\t\t\t\t\t          █ █ ▄▀█ █   █▀▀\n");
	printf("\t\t\t\t\t\t          █▀█ █▀█ █▄▄ █▀\n");
	space(1);
        for(i=1;i<7;i++)
                switch(i)
                {
                        c(1,TY"\t\t\t\t █████╗  ███████╗ ███╗  ██╗ ████████╗ ██╗   ██╗ ██████╗ ██╗   ██╗ \n"RS);
                        c(2,TY"\t\t\t\t██╔══██╗ ██╔════╝ ████  ██║ ╚══██╔══╝ ██║   ██║ ██╔══██╗╚██╗ ██╔╝\n"RS);
                        c(3,TY"\t\t\t\t██║  ╚═╝ █████╗   ██╔██╗██║    ██║    ██║   ██║ ██████╔╝ ╚████╔╝\n"RS);
                        c(4,TG"\t\t\t\t██║  ██╗ ██╔══╝   ██║╚████║    ██║    ██║   ██║ ██╔══██╗  ╚██╔╝\n"RS);
                        c(5,TG"\t\t\t\t╚█████╔╝ ███████╗ ██║ ╚███║    ██║    ╚██████╔╝ ██║  ██║   ██║\n"RS);
                        c(6,TG"\t\t\t\t ╚════╝  ╚══════╝ ╚═╝  ╚══╝    ╚═╝     ╚═════╝  ╚═╝  ╚═╝   ╚═╝\n"RS);
                }
        sleep(3);
}
void title()
{
     	int i;  
	space(1);
       	for(i=1;i<7;i++)
                switch(i)
                {
                        c(1,TC"\t\t\t\t     ╭━━━╮╭━━━╮╭━━╮╭━━━╮╭╮╭━╮╭━━━╮╭━━━━╮"TG"   ╭━╮╭━╮╭━━━╮╭━╮ ╭╮╭━━╮╭━━━╮\n"RS);
                        c(2,TC"\t\t\t\t     ┃╭━╮┃┃╭━╮┃╰┫┣╯┃╭━╮┃┃┃┃╭╯┃╭━━╯┃╭╮╭╮┃"TG"   ┃┃╰╯┃┃┃╭━╮┃┃┃╰╮┃┃╰┫┣╯┃╭━╮┃\n"RS);
                        c(3,TC"\t\t\t\t     ┃┃ ╰╯┃╰━╯┃ ┃┃ ┃┃ ╰╯┃╰╯╯ ┃╰━━╮╰╯┃┃╰╯"TG"   ┃╭╮╭╮┃┃┃ ┃┃┃╭╮╰╯┃ ┃┃ ┃┃ ┃┃\n"RS);
                        c(4,TC"\t\t\t\t     ┃┃ ╭╮┃╭╮╭╯ ┃┃ ┃┃ ╭╮┃╭╮┃ ┃╭━━╯  ┃┃  "TG"   ┃┃┃┃┃┃┃╰━╯┃┃┃╰╮┃┃ ┃┃ ┃╰━╯┃\n"RS);
                        c(5,TC"\t\t\t\t     ┃╰━╯┃┃┃┃╰╮╭┫┣╮┃╰━╯┃┃┃┃╰╮┃╰━━╮  ┃┃  "TG"   ┃┃┃┃┃┃┃╭━╮┃┃┃ ┃┃┃╭┫┣╮┃╭━╮┃\n"RS);
                        c(6,TC"\t\t\t\t     ╰━━━╯╰╯╰━╯╰━━╯╰━━━╯╰╯╰━╯╰━━━╯  ╰╯  "TG"   ╰╯╰╯╰╯╰╯ ╰╯╰╯ ╰━╯╰━━╯╰╯ ╰╯\n"RS);
                }
       	space(1);
}
void hand(int bat, int ball)
{
	FILE *fp = fopen("bat.txt","w");
	fprintf(fp,"%d %d",bat,ball);
	fclose(fp);
	system("cc hand.c -o p1");
	system("./p1");
	system("clear");
	system("killall eog");
	system("clear");
}
