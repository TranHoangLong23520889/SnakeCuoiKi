void drawFood (){
	int x = getcolor();
	int c = rand() % 14 + 1;
		setcolor(c);setfillstyle (SOLID_FILL, c);
		drawPoint(food.x, food.y,5);
	setcolor(x);setfillstyle (1,BACKGROUND);
}
