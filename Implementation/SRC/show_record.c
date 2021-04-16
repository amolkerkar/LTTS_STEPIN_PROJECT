/**
 * @file show_record.c
 * @author amol(amolkerkar2@gmail.com)
 * @brief this function shows the previous records of the quiz players 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getchar();}