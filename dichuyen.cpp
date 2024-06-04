void changeDirecton (int x){
	switch(x){
                case 72:
                    if (direction.y != DIRECTION) {
                    	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
            			direction.y = -DIRECTION; direction.x = 0;
        			}
                    break;
                case 80:
                	if (direction.y != -DIRECTION) {
                		PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
            			direction.y = DIRECTION; direction.x = 0;
        			}
                   break;
                case 77:
                    if (direction.x != -DIRECTION) {
                    	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
            			direction.x = DIRECTION; direction.y = 0;
        			}
                    break;
                case 75:
                    if (direction.x != DIRECTION) {
                    	PlaySound(TEXT("beep.wav"), NULL, SND_ASYNC);
            			direction.x = -DIRECTION; direction.y = 0;
        			}
                    break;
                case 27:
                	endGame = true;
					break;
            }
}
