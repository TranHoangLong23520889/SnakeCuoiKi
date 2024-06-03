
		showText (220,200,"NEW GAME");
		showText (220,270,"HIGH SCORE");
		showText (220,340,"QUIT GAME");
		showText (220,410,"ABOUT");
	}
	clearmouseclick(WM_LBUTTONDOWN);
	if (mousey() <= 255){
		showTextBackground(220,200,"NEW GAME",15);
		x2:
		setbkcolor(0);
		cleardevice();
		int nameFunction;
		clearmouseclick(WM_LBUTTONDOWN);
		while (!ismouseclick(WM_LBUTTONDOWN) || mousex() < 290 || mousex() > 520 || mousey() < 240 || mousey() > 400){
			settextstyle(1,0,6);setcolor(10);
			outtextxy (150,150,"GAME TYPE");
			setcolor(15);settextstyle(1,0,4);
			showTextBackground(250,250,"CLASSIC",0);
			showTextBackground (250,350,"MODERN",0);
		}
		if (ismouseclick(WM_LBUTTONDOWN) && mousex() >= 290 && mousex() <= 520 && mousey() >= 240 && mousey() <= 400){
			if(mousey() <= 300) nameFunction = 1;
			else nameFunction = 2;
		}
		setbkcolor(0);
		cleardevice();
		setcolor(4);settextstyle(4,0,3);
		outtextxy(10,310,"YOUR CHOICE :");
		settextstyle (4,0,6);
		setcolor (10);
		outtextxy (150,200,"LEVEL 1 - 5");
		setcolor(4);settextstyle(4,0,3);
		outtextxy(10,310,"YOUR CHOICE :");
		int xx = 330;
		char str1[2];
		clearmouseclick(WM_LBUTTONDOWN);
		while (!ismouseclick(WM_LBUTTONDOWN) || mousex() < 300 || mousex() > 790 || mousey() < 280 || mousey() > 350)
		for(int i = 1;i <= 5;i++){
			sprintf(str1,"%d",i);
			settextstyle(4,0,4);
			showTextBackground(xx,300,str1,0);
			xx+= 100;
		}
		if (ismouseclick(WM_LBUTTONDOWN) && mousex() >= 300 && mousex() <= 790 && mousey() >= 280 && mousey() <= 350){
			if(mousex() <= 390) level = 1;
			else if(mousex() <= 490) level = 2;
			else if(mousex() <= 590) level = 3;
			else if(mousex() <= 690) level = 4;
			else level = 5;
		}
		PlaySound(TEXT("start.wav"), NULL , SND_ASYNC);
		initGame();
		while (!endGame){
			//Change delay folow level
		delay (250 - (level-1)*40);
		(nameFunction == 1) ? mainLoop(classic):mainLoop(modern);
		drawGame();
	}
		PlaySound(TEXT("endGame.wav"), NULL , SND_ASYNC);
		settextstyle (1,0,4);
		setcolor (0);
		outtextxy (100,110,"GAME OVER!");
		setcolor (8);
		settextstyle (1,0,2);
		outtextxy (100,160,"Your Score : ");
		setcolor(10);
		outtextxy (300,160,score_str);
		//Here is check high score
		checkHighScore(snakeLength*level*10-level*30);
		setcolor(10);settextstyle(4,0,5);
		outtextxy (100,200,"Play Again ?");
		settextstyle(4,0,3);
		setcolor(1);
		clearmouseclick(WM_LBUTTONDOWN);
		while (!ismouseclick(WM_LBUTTONDOWN)){
			showTextBackground(150,270,"YES",12);showTextBackground(300,270,"NO",7);
		}
		if(ismouseclick(WM_LBUTTONDOWN)){
			if (mousex() >= 140 && mousex() <= 230 && mousey() >= 260 && mousey() <= 310){
				showTextBackground(150,270,"YES",7);
				delay(100);
				goto x2;
			}
			else if(mousex() >= 290 && mousex() <= 360 && mousey() >= 260 && mousey() <= 310){
				showTextBackground(300,270,"NO",12);
				delay(100);
				goto x1;
			}
        	}
    	}else if (mousey() <= 325){
			showTextBackground(220,270,"HIGH SCORE",15);
			cleardevice();
			showHighScore();
			while (!ismouseclick(WM_LBUTTONDOWN)){
				delay(0);
			}
			goto x1;
		}else if(mousey() <= 395){
			showTextBackground (220,340,"QUIT GAME",15);
			exit(0);
		}else{

		cleardevice();
		settextstyle (1,0,4);
		setcolor (15);
		int x = getcolor();
		while(!ismouseclick(WM_LBUTTONDOWN)){
			settextstyle(10,0,6);setcolor(15);
			outtextxy(320,20,"ABOUT");
			settextstyle(1,0,4);setcolor(9);
			outtextxy(350,100,"UIT");
			settextstyle(6,0,5);
			setcolor (10);
			showText(290,150,"DE TAI");
			settextstyle(4,0,2);
			showText(185,200,"TRO CHOI \"RAN SAN MOI\"");
			settextstyle(6,0,3);
			showText(200,270,"SINH VIEN THUC HIEN");
			settextstyle(4,0,2);
			showText(120,320,"NGUYEN VAN MANH HUY - 23520641");
			showText(120,350,"TRAN HOANG LONG - 23520889");
			showText(120,380,"NGUYEN CHIEN THANG - 23521423");
			settextstyle(6,0,3);
			showText(185,430,"GIANG VIEN HUONG DAN");
			settextstyle(4,0,2);
			showText(230,460,"NGUYEN VAN TOAN");
		}
		setcolor(x);
		settextstyle (1,0,2);
		setcolor (4);
		goto x1;
		}
	}
}
