#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"randomword.h"

typedef struct rand
{
    char word[15];
    char hint[100];
}ran;

int random (void)
{
    int i ;
    char guess[15];
    char randomHint ;
    char *randomWord ;
    srand(time(0));

    ran w[100] ; 
    strcpy(w[0].word,"ELEPHANT");
    strcpy(w[0].hint,"A BIG LIVING TRUCK");
    strcpy(w[1].word,"APPLE");
    strcpy(w[1].hint,"ONE THIS KEEP SOMETHING AWAY");
    strcpy(w[2].word,"MUSIC");
    strcpy(w[2].hint,"FEEL YOU GOOD AND SAD WHEN YOU LISTEN");
    strcpy(w[3].word,"DSA");
    strcpy(w[3].hint,"NIGHTMARE FOR CODER'S");
    strcpy(w[4].word,"LION");
    strcpy(w[4].hint,"KING");
    strcpy(w[5].word,"FISH");
    strcpy(w[5].hint,"LIVE IN WATER");
    strcpy(w[6].word,"DOCTER");
    strcpy(w[6].hint,"SAVE YOU");
    strcpy(w[7].word,"GOD");
    strcpy(w[7].hint,"BELIEVE IN ME , HAVE FAITH IN ME");
    strcpy(w[8].word,"MONEY");
    strcpy(w[8].hint,"FATHER OF THIS CENTURY");
    strcpy(w[9].word,"WISDOM");
    strcpy(w[9].hint,"ONLY WISE PEOPLE HAVE THIS");
    strcpy(w[10].word,"DELHI");
    strcpy(w[10].hint,"CAPITAL OF INDIA");
    strcpy(w[11].word,"MUMBAI");
    strcpy(w[11].hint,"CITY OF DREAMS");
    strcpy(w[12].word,"LAPTOP");
    strcpy(w[12].hint,"BASIC NEED OF A OFFICE PERSON");
    strcpy(w[13].word,"MESSAGE");
    strcpy(w[13].hint,"WRITTEN FORM OF LETTER BUT ONLINE");
    strcpy(w[14].word,"SUN");
    strcpy(w[14].hint,"GIVE US LIFE");
    strcpy(w[15].word,"PIZZA");
    strcpy(w[15].hint,"A POPULAR ITALIAN DISH");
    strcpy(w[16].word,"GUITAR");
    strcpy(w[16].hint,"THIS IS A MUSICAL INSTRUMENT WITH STRINGS THAT YOU STRUM OR PLUCK");
    strcpy(w[17].word,"COMPUTER");
    strcpy(w[17].hint,"THIS IS AN ELECTRONIC DEVICE USED FOR COMPUTING TASKS AND IS OFTEN USED TO BROWSE THE INTERNET");
    strcpy(w[18].word,"OCEAN");
    strcpy(w[18].hint,"THIS IS A VAST BODY OF SALTWATER THAT COVERS MOST OF THE EARTH'S SURFACE");
    strcpy(w[19].word,"MOUNTAIN");
    strcpy(w[19].hint,"ME WHO TOUCH THE SKY BUT DON'T LEAVE THE EARTH");
    strcpy(w[20].word,"SUMMER");
    strcpy(w[20].hint,"THE HOTTEST BOY IN YEAR");
    strcpy(w[21].word,"BIKE");
    strcpy(w[21].hint,"NOT ALIVE BUT STILL RUN");
    strcpy(w[22].word,"CLOTHES");
    strcpy(w[22].hint,"GET DIRTY BUT CAN BE CLEAN");
    strcpy(w[23].word,"FATHER");
    strcpy(w[23].hint,"REAL HERO");
    strcpy(w[24].word,"MOTHER");
    strcpy(w[24].hint,"WORK WITHOUT SALARY ALL YEAR");
    strcpy(w[25].word,"LIBRARY");
    strcpy(w[25].hint,"THIS IS A PLACE WHERE YOU CAN BORROW BOOKS AND OTHER MEDIA");
    strcpy(w[26].word,"MOON");
    strcpy(w[26].hint,"I DON'T GLOW ON MY OWN");
    strcpy(w[27].word,"BLUB");
    strcpy(w[27].hint,"HELP IN YOUR HOUSES TO LIGHT UP ROOM");
    strcpy(w[28].word,"EYES");
    strcpy(w[28].hint,"YOU CAN'T SEE ME BUT WITH THE HELP OF ME YOU CAN SEE");
    strcpy(w[29].word,"TABLE");
    strcpy(w[29].hint,"I HAVE 4 LEGS BUT I'M NOT ALIVE");
    strcpy(w[30].word,"PHONE");
    strcpy(w[30].hint,"YOU CAN LIVE WITHOUT ME BUT YOU DON'T");
    strcpy(w[31].word,"SMILE");
    strcpy(w[31].hint,"MAKES EVERYONE HAPPY");
    strcpy(w[32].word,"NEET");
    strcpy(w[32].hint,"YOU HAVE TO SCORE HIGHER THEN 720 TO GET AIIMS");
    strcpy(w[33].word,"JEE");
    strcpy(w[33].hint,"EVERYBODY WANT TO CRACK ME FOR B.tech EVEN THERE ARE BETTER COLLAGE OUT THERE");
    strcpy(w[34].word,"FAILURE");
    strcpy(w[34].hint,"EVERYONE IS AFRAID OF ME BUT INTELLIGENT PEOPLE NEVER");
    strcpy(w[35].word,"RECURSION");
    strcpy(w[35].hint,"I'M NOT A LOOP BUT CODERS & PROGRAMMER KNOWN ME");
    strcpy(w[36].word,"MOUSE");
    strcpy(w[36].hint,"I'M RAT");
    strcpy(w[37].word,"WALLET");
    strcpy(w[37].hint,"STORE MONEY & PORTABLE ALSO");
    strcpy(w[38].word,"MAKEUP");
    strcpy(w[38].hint,"GIRL'S LOVE ME");
    strcpy(w[39].word,"SPEED");
    strcpy(w[39].hint,"YOU KNOWN ME I'M IN PHYSICS BOOKS & ALSO BOYS LIKE ME IN CARS");
    strcpy(w[40].word,"BEST");
    strcpy(w[40].hint,"ICSE STUDENT ARE");
    strcpy(w[41].word,"ARRAY");
    strcpy(w[41].hint,"TYPE OF DATA STRUCTURE MOST BEGIN WITH A");
    strcpy(w[42].word,"YOURSELF");
    strcpy(w[42].hint,"YOU CAN ACHIEVE EVERYTHING YES , JUST BELIEVE IN");
    strcpy(w[43].word,"CAP");
    strcpy(w[43].hint,"PROTECT YOUR HEAD FROM SUN");
    strcpy(w[44].word,"TOOLKIT");
    strcpy(w[44].hint,"CONTAIN EVERY TOOL");
    strcpy(w[45].word,"HOT");
    strcpy(w[45].hint,"THE PERSON MADE THIS GAME IS");
    strcpy(w[46].word,"PERFUME");
    strcpy(w[46].hint,"YOU USE ME TO HIDE YOUR DIRTY SMELL");
    strcpy(w[47].word,"GIRLFRIEND");
    strcpy(w[47].hint,"WHAT YOU GUYS DON'T HAVE");
    strcpy(w[48].word,"BEASTBOYSHUB");
    strcpy(w[48].hint,"FATHER OF INDIAN GAMER COMMUNTITY");
    strcpy(w[49].word,"GLASS");
    strcpy(w[49].hint,"YOU KISS ME & DRINK WHATEVER INSIDE ME");
    strcpy(w[50].word,"NOTEBOOK");
    strcpy(w[50].hint,"YOU NOTE IMPORTANT THING IN ME");
    strcpy(w[51].word,"FRIENDS");
    strcpy(w[51].hint,"GO CRAZY WIHT THEM");
    strcpy(w[52].word,"ANIME");
    strcpy(w[52].hint,"2D ANIMATION BUT MADE IN JAPAN");
    strcpy(w[53].word,"AIRPLANE");
    strcpy(w[53].hint,"THIS IS A VEHICLE THAT FLIES IN THE SKY AND IS USED FOR LONG-DISTANCE TRAVEL");
    strcpy(w[54].word,"MOTEL");
    strcpy(w[54].hint,"I'M NOT A HOTEL BUT JUST LIKE THAT");
    strcpy(w[55].word,"GRADE");
    strcpy(w[55].hint,"I'M BETTER THEN TOPPER BUT WHAT SOCITY WANT");
    strcpy(w[56].word,"GUN");
    strcpy(w[56].hint,"MOSTLY ARMY & TERRIST USE ME");
    strcpy(w[57].word,"TWINTOWER");
    strcpy(w[57].hint,"IN 9/11 A PLANE JUST HIT ME");
    strcpy(w[58].word,"TEACHER");
    strcpy(w[58].hint,"I HAVE LOW SALARY BUT I MAKE BILLIONER'S");
    strcpy(w[59].word,"FAMILY");
    strcpy(w[59].hint,"THEY ARE ALWAY WITH YOU");
    strcpy(w[60].word,"END");
    strcpy(w[60].hint,"EVERY THING WILL BE BETTER IN THE");

    randomHint = rand () % 61 ;
    int points = 0;

    randomWord = w[randomHint].word ;
    printf("\t\t\tGUESS THE WORD\n");
    printf("HINT :%s\n" , w[randomHint].hint); 

    for (i=1;i<=3;i++)
    {
        printf("ENTER WORD\n");
        scanf("%s", guess);

        if(strcmp(randomWord , guess) == 0)
        {
            printf("\t\t\tCONGRATULATION\n");
            printf("\t\t\tYOU GOT IT\n");
            printf("WORLD IS %s\n" , randomWord);
            points = points + 10 ;
            break;
        }
        else 
        {
            printf("\t\t\tNO YOU ARE AN IDIOT\n");
            printf("ATTEMPT LEFT :%d\n", 3-i );
            points = points - 5 ;
        }
        printf("\n");
    }

    if(points<0)
    {
        int g;
        printf("\t\t\tDO YOU WANT TO SEE THE WORD\n");
        printf("\t\t\tENTER '1' FOR YES OR '0' FOR NO\n");
        scanf("%d", &g);

        if(g==1)
        {
            printf("WORLD IS %s\n" , randomWord);
        }
    }
    
    printf("POINTS : ");

    return points ;
}