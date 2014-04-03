#define         INCL_BASE
#define         INCL_PM
#include        <os2.h>
#include        <stdio.h>
#include        <stdlib.h>
#include        <string.h>
#include	<thunker.h>
static  char str[]= "This is a dummy string\0";
static  char string[]= "This is a test of the VioWrtTTY function\r\n\0";


char  getch(void);
void    main()
{
        char    a;
        long    i;
        char    varstring[80] ;
        BYTE    bCell[2];
        ULONG	usAttribute;
	KBDINFO Kbdinfo;
        bCell[0] = 0x20;
        bCell[1] = 0x22;
	DosQFileMode("THNKTEST.C" ,&usAttribute, 0) ;
	i = DosSetFileMode("THNKTEST.C",usAttribute, 0) ;
	printf("The file set mode status was %li \n\r",i) ; 
        Kbdinfo.cb = sizeof (Kbdinfo) ;
        VioSetCurPos(5,5,0);
        VioScrollUp(0,0,0xffff,0xffff,0xffff,bCell,0);
        KbdGetStatus(&Kbdinfo,0);
        if (Kbdinfo.fsMask & KEYBOARD_ECHO_ON)
                VioWrtTTY("Echo is on\n\r", 12, 0) ;
        else
                VioWrtTTY("Echo is off\n\r", 13, 0) ; 
        a = getch() ;
        for (i = 0 ;i < 5; i++)
                printf("%c\n",a) ;
        i = strlen(string);
        VioWrtTTY(string, i, 0) ;
        printf("%i\n",strlen(string));
        sprintf(varstring,"The length of string one is %i\r\n",strlen(string));
        VioWrtTTY(varstring,strlen(varstring),0);
}

char  getch(void)
{
        KBDKEYINFO Kbci ;
        KbdCharIn( &Kbci,IO_WAIT,0);
        return Kbci.chChar;
}