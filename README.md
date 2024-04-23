### The Purpose of The Game : The player will try to break the bricks on the OLED screen by bouncing a ball using a physical paddle control device. The paddle will be controlled with a potentiometer. The OLED display shows the players the game area. At the top are the bricks, at the bottom is the paddle controlled by the player, and a bouncing ball. The player's goal is to break the bricks at the top using the ball. The ball bounces upward using the paddle controlled by the player. When the ball hits the bricks, the brick disappears, and the player earns "1" point. This score should be displayed on a 7-segment display. When the ball hits the paddle or walls, its direction changes. The right and left sides of the screen are also considered walls. If a level ends successfully, the next level starts with the ball's speed 20% higher than its previous speed. Our overall score and number of lives are not reset in the next level. When a brick is broken, there is a 10% chance that a life object will appear inside it. If the player collects it with the paddle, the number of lives increases by 1. The game ends when our lives are exhausted by the ball falling to the bottom.

##### Electrical circuit
![Ekran görüntüsü 2024-04-23 152450](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/93c64bc4-bd6d-42b0-a65e-bd41e9cfa3d1)

##### When the game start, "Start" or "Exit" options show on the OLED screen. There are 3 buttons for the start screen. One of these buttons allows us to move to the upper option, another button allows us to move to the lower option, and the other button controls clicking on that option.
![Ekran görüntüsü 2024-04-23 134702](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/3b06681d-bd1c-4004-b41f-7865f4661f82)

##### We have a paddle at the bottom and we can controle it by shifting left or right. When the ball hits each brick, the brick disappears and the player earns 1 point. There is a 10% chance that a life object may come out of the brick. If that object can be collected with the paddle, the player's lives increase by 1. The game ends when all lives are depleted. There are 5 levels, starting from the 1st level, and each level is progressed one by one. When all bricks in a level are destroyed, a 5-second delay occurs, and the game moves to the next level, increasing the current speed of the ball by 20% each time a level is completed. The arrangement of blocks in each level is different from one another.
![Ekran görüntüsü 2024-04-23 134425](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/db58f086-53e9-4f3d-8f7a-0d7afde5bea5)
![Ekran görüntüsü 2024-04-23 134551](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/b208342a-5a8f-4c05-9972-cf7c5ca38c10)

##### When we run out of lives, it says "game over" on the screen and shows our total score for 5 seconds.
![Ekran görüntüsü 2024-04-23 143109](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/ef75c754-d66c-4104-82e1-17c0cedd4c65)
![Ekran görüntüsü 2024-04-23 134654](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/c59ffb5e-ff0d-487d-8ef6-1c6c0e726183)

##### If we press the "exit" button in the main menu, it says "thanks for your interest in our game" and the game ends.
![Ekran görüntüsü 2024-04-23 134717](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/bb32f9f5-f1f0-4196-8d29-bab8435c2fb2)
![Ekran görüntüsü 2024-04-23 134727](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/2b734c69-f605-4ffa-aa2d-4f531766ade5)


##### UML
![Ekran görüntüsü 2024-04-22 020727](https://github.com/MustafaEfeTamer/Brick-Break-Game/assets/119308432/c1851667-4f1f-4100-b057-02e484947ca9)

