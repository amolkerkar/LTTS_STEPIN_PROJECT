/**
 * @file edit_score.c
 * @author amol (amolkerkar2@gmail.com)
 * @brief this function edits scores in the quiz
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


void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%19s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
