void classic(){
    for (int i = 0; i < snakeLength; i++) {
        if (i == 0) {
            snake[0].x0 = snake[0].x;snake[0].y0 = snake[0].y;
			snake[0].x += direction.x;
			snake[0].y += direction.y;
        }else{
            snake[i].x0 = snake[i].x;snake[i].y0 = snake[i].y;
			snake[i].x = snake[i-1].x0;snake[i].y = snake[i-1].y0;
        }

        if (snake[i].x >= MAXX) snake[i].x = MINX + 10;
        if (snake[i].x <= MINX) snake[i].x = MAXX - 10;
        if (snake[i].y >= MAXY) snake[i].y = MINY + 10;
        if (snake[i].y <= MINY) snake[i].y = MAXY - 10;

        if (i != 0 && (snake[0].x == snake[i].x && snake[0].y == snake[i].y)) endGame = true;
    }
    if (snake[0].x == food.x && snake[0].y == food.y){
		snake[snakeLength].x = snake[snakeLength-1].x0;snake[snakeLength].y = snake[snakeLength-1].y0;
		snakeLength++;
		PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
		//Random again food if sanke ate food
		srand ( time(NULL));
        do{
        	food.x = (rand() % (39) + 3)*10;
    		food.y = (rand() % (19) + 3)*10;
		}while (checkPoint() == false);
	}
}

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

