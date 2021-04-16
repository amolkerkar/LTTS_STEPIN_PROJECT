/**
 * @file reset_score.c
 * @author amol(amolkerkar2@gmail.com)
 * @brief this function is used to reset scores
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

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}
