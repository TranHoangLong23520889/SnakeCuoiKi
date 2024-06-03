void drawSnake (){
	setfillstyle (1,10);
	int count = 0;
	for (int i = 0;count < snakeLength;i++){
			drawPoint(snake[i].x, snake[i].y,5);
			count++;
		}
	//delete point when snake move
	int x = getcolor();
	setfillstyle (1,BACKGROUND);
	drawPoint(snake[snakeLength-1].x0,snake[snakeLength-1].y0,5);
	setcolor (BACKGROUND);
	circle (snake[snakeLength-1].x0,snake[snakeLength-1].y0,5);
	setcolor(x);
	setfillstyle (1,5);
}
