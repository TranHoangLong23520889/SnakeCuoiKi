void getHighScore (){
	FILE *f;
	f = fopen("highscore.txt", "w");
	for (int i = 0;i < 5;i++){
		fputs(highscore[i].name,f);
		fputs(" ",f);
		fprintf(f,"%d",highscore[i].score);
		fputs("\n",f);
	}
	fclose(f);
}