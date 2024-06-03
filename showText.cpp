void showText(int x,int y,char *str){
	int c = getcolor();
	int color = rand() % 16 + 1;
	setcolor(color);
	outtextxy(x+3,y,str);
	setcolor(c);
	delay(50);
}
