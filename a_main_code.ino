#include <U8g2lib.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

const byte SIZE = 16;

const byte ballSize = 3;
byte ballPositionX = 64;
byte ballPositionY = 48;
byte ballSpeedX = 2;
byte ballSpeedY = -2;

const byte paddleHeight = 3;
const byte paddleWidth = 20;
byte paddleX = 59;
byte paddleY = 54;

const byte led1 = 11;
const byte led2 = 12;
const byte led3 = 13;

byte total = 1;
byte generalTotal = 1;
byte livesNumber = 3;
byte activeLevel = 1;

struct Box {
  byte x;
  byte y;
  byte width;
  byte height;
};

Box level1[] = {
  {2, 2, 16, 3},
  {20, 2, 16, 3},
  {38, 2, 16, 3},
  {56, 2, 16, 3},
  {74, 2, 16, 3},
  {92, 2, 16, 3},
  {110, 2, 16, 3},
  {20, 7, 16, 3},
  {38, 7, 16, 3},
  {56, 7, 16, 3},
  {74, 7, 16, 3},
  {92, 7, 16, 3},
  {38, 12, 16, 3},
  {56, 12, 16, 3},
  {74, 12, 16, 3},
  {56, 17, 16, 3},
};

Box level2[] = {
  {56, 2, 16, 3},
  {38, 7, 16, 3},
  {56, 7, 16, 3},
  {74, 7, 16, 3},
  {20, 12, 16, 3},
  {38, 12, 16, 3},
  {56, 12, 16, 3},
  {74, 12, 16, 3},
  {92, 12, 16, 3},
  {2, 17, 16, 3},
  {20, 17, 16, 3},
  {38, 17, 16, 3},
  {56, 17, 16, 3},
  {74, 17, 16, 3},
  {92, 17, 16, 3},
  {110, 17, 16, 3},
};

Box level3[] = {
  {29, 2, 16, 3},
  {47, 2, 16, 3},
  {65, 2, 16, 3},
  {83, 2, 16, 3},
  {29, 7, 16, 3},
  {83, 7, 16, 3},
  {29, 12, 16, 3},
  {83, 12, 16, 3},
  {29, 17, 16, 3},
  {47, 17, 16, 3},
  {65, 17, 16, 3},
  {83, 17, 16, 3},
  {47, 22, 16, 3},
  {65, 22, 16, 3},
  {29, 27, 16, 3},
  {83, 27, 16, 3},
};

Box level4[] = {
  {29, 2, 16, 3},
  {47, 2, 16, 3},
  {65, 2, 16, 3},
  {83, 2, 16, 3},
  {11, 7, 16, 3},
  {101, 7, 16, 3},
  {11, 12, 16, 3},
  {47, 12, 16, 3},
  {65, 12, 16, 3},
  {101, 12, 16, 3},
  {11, 17, 16, 3},
  {101, 17, 16, 3},
  {29, 22, 16, 3},
  {47, 22, 16, 3},
  {65, 22, 16, 3},
  {83, 22, 16, 3},
};

Box level5[] = {
  {2, 2, 16, 3},
  {56, 2, 16, 3},
  {110, 2, 16, 3},
  {20, 7, 16, 3},
  {38, 7, 16, 3},
  {74, 7, 16, 3},
  {92, 7, 16, 3},
  {2, 12, 16, 3},
  {56, 12, 16, 3},
  {110, 12, 16, 3},
  {20, 17, 16, 3},
  {38, 17, 16, 3},
  {74, 17, 16, 3},
  {92, 17, 16, 3},
  {2, 22, 16, 3},
  {110, 22, 16, 3},
};

void zero() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(1000);
}

void one(){
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1000);
}

void two() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(1000);
}

 void three() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(1000);
  
 }

void four() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
}

void five() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
}

void six() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
}

void seven() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1000);
}

void eight() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
}

void nine() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
}


void drawLevel(Box level[]) {
  u8g2.clearBuffer();
  for (int i = 0; i < SIZE; i++) {
    u8g2.drawBox(level[i].x, level[i].y, level[i].width, level[i].height);
  }
  u8g2.sendBuffer();
}

// ledi açar
void ledAc(int led){
  digitalWrite(led, HIGH);
}

// ledi kapar
void ledKapat(int led){
  digitalWrite(led, LOW);
}

// program ilk çalıştığında ekrana top çizer
void drawBall() {
  u8g2.clearBuffer(); // Önceki çizimleri temizle
  u8g2.drawBox(ballPositionX, ballPositionY, ballSize, ballSize); // Topu çiz
  u8g2.sendBuffer(); // Çizimi ekrana gönder
}


void updateBall(Box level[]) {
  u8g2.clearBuffer();
  u8g2.drawBox(ballPositionX, ballPositionY, ballSize, ballSize); // Topu çiz
  u8g2.sendBuffer();

  ballPositionX += ballSpeedX; // Topun x konumunu güncelle
  ballPositionY += ballSpeedY; // Topun y konumunu güncelle

  // Topun ekran sınırlarına çarpmasını kontrol et
  if (ballPositionX <= 0 || ballPositionX >= 127) {
    ballSpeedX = -ballSpeedX; // X yönlü hızı tersine çevir
  }

  // top ekranın üstüne geldiğinde yönü tersine çevir fakat altına geldiğinde tersine çevirme
  if(ballPositionY <= 0){
        ballSpeedY = -ballSpeedY; // Y yönlü hızı tersine çevir
  }

  // can sayısına göre topu kaçırma işlemleri
  if(ballPositionY >= 63){
    livesNumber = livesNumber - 1;
    if(livesNumber == 2){
      digitalWrite(led3, LOW);
    ballPositionX = 64; // Topu başlangıç pozisyonuna geri döndür
    ballPositionY = 48; // Topu başlangıç pozisyonuna geri döndür
    ballSpeedY = -ballSpeedY; // Yönü tersine çevir
    }else if(livesNumber == 1){
      digitalWrite(led2, LOW);
    ballPositionX = 64; // Topu başlangıç pozisyonuna geri döndür
    ballPositionY = 48; // Topu başlangıç pozisyonuna geri döndür
    ballSpeedY = -ballSpeedY; // Yönü tersine çevir
    }else if(livesNumber == 0){
      digitalWrite(led1, LOW);
    ballPositionX = 200;
    ballPositionY = 200;
    }
  }

  // Topun paddle'a çarpmasını kontrol et
  if (ballPositionY + ballSize >= paddleY && ballPositionX >= paddleX && ballPositionX <= paddleX + paddleWidth) {
    ballSpeedY = -ballSpeedY; // Y yönlü hızı tersine çevir
  }

  // Topun bloğa çarpması kontrolü
  for (int i = 0; i < SIZE; i++) {
    if (ballPositionX + ballSize >= level[i].x && ballPositionX <= level[i].x + level[i].width &&
        ballPositionY + ballSize >= level[i].y && ballPositionY <= level[i].y + level[i].height) {
      // Top bloğa çarptığı anda bloğu ekrandan dışarı al ve topu ters çevir
      level[i].x = -100; // Bloğun x koordinatını ekrandan dışına al
      level[i].y = -100; // Bloğun y koordinatını ekrandan dışına al
      ballSpeedY = -ballSpeedY; // Yönü tersine çevir
      if(total < 10){
          displayNumber(total);
      }else{
        total = 1;
        one();
      }
      total = total + 1;
      // terminale genel toplamı yazar ve günceller
      generalTotal = generalTotal + 1;
      if(generalTotal == 6){ 
      // bir dahaki levele geçmeden önce 5 saniye bekle
      delay(5000);
      // level 2 ye geçmek için
      activeLevel = activeLevel + 1;
      ballPositionX = 64; // Topu başlangıç pozisyonuna geri döndür
      ballPositionY = 48; // Topu başlangıç pozisyonuna geri döndür
      ballSpeedY = -ballSpeedY; // Yönü tersine çevir
      }
    }
  }
}

// 7 segment displayde ekrana sayı yazdırma
void displayNumber(int num) {
  switch(num) {
    case 1:
      one();
      break;
    case 2:
      two();
      break;
    case 3:
      three();
      break;
    case 4:
      four();
      break;
    case 5:
      five();
      break;
    case 6:
      six();
      break;
    case 7:
      seven();
      break;
    case 8:
      eight();
      break;
    case 9:
      nine();
      break;
    default:
      // Eğer num 0-9 arasında değilse herhangi bir işlem yapma
      break;
  }
}

// pedal çizer sonra loop ile tekrarlanır bu method sürekli
void drawPaddle(){
  int potansiyometreDegeri = analogRead(A0); // Potansiyometrenin değerini oku (0-1023 arası)
  int ekranGenislik = 128 - paddleWidth; // Ekran genişliğini hesapla
  int newPaddleX = map(potansiyometreDegeri, 0, 1023, 0, ekranGenislik); // Potansiyometre değerini ekran genişliğine dönüştür
  u8g2.clearBuffer();
  u8g2.drawBox(newPaddleX, paddleY, paddleWidth, paddleHeight); // Yeni konumda kutuyu çiz
  u8g2.sendBuffer();
  paddleX = newPaddleX; // Kutunun yeni konumunu sakla
}

// program ilk çalışmaya başladığında bu çalışır
void setup() {
  u8g2.begin();
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // 3 LED'i başlangıçta aç
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);

  // oyunun başlangıcında 7 segmenti 0'dan başlatır !!
  zero();  
}

// program başladığında setup() methodundan sonra çalışmaya başlar ve sürekli çalışır
void loop() {
  drawPaddle();
  if(activeLevel == 1){
      drawLevel(level1);
      updateBall(level1);
  }else if(activeLevel == 2){
      drawLevel(level4);
      updateBall(level4);
  }else if(activeLevel == 3){
      updateBall(level5);
      drawLevel(level5);
  }else if(activeLevel == 4){
      updateBall(level4);
      drawLevel(level4);
  }else if(activeLevel == 5){
      updateBall(level5);
      drawLevel(level5);
  }
  delay(20); // Topun hareket hızını ayarlar
}
