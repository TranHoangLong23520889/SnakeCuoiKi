bool isEmpty()
{
	FILE *fp;
	long size;
	fp = fopen("highscore.txt","r");
	if(fp){
		fseek (fp, 0, SEEK_END);
        size = ftell(fp);
		fclose(fp);
	}
	return(size == 0);
}
