int blue = 9;
int green = 10;
int red = 11;
#define button 2

int mode =0;

void setup(){
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop(){
  if (digitalRead(button) == LOW){
    mode = mode+1;
    delay(400);
  }

  if (mode == 0){
    analogWrite(blue, 255);
    analogWrite(green,0);
    analogWrite(red,0);
  }
  if (mode == 1){
    analogWrite(blue, 255);
    analogWrite(green,255);
    analogWrite(red,0);
  }
  if (mode == 2){
    analogWrite(blue, 0);
    analogWrite(green,255);
    analogWrite(red,0);
  }
  if (mode == 3){
    analogWrite(blue, 0);
    analogWrite(green,255);
    analogWrite(red,255);
  }
  if (mode == 4){
    analogWrite(blue, 0);
    analogWrite(green,0);
    analogWrite(red,255);
  }
  if (mode == 5){
    analogWrite(blue, 255);
    analogWrite(green,0);
    analogWrite(red,255);
  }
  if (mode == 6){
    analogWrite(blue, 255);
    analogWrite(green,255);
    analogWrite(red,123);
  }
  if (mode == 7){
    analogWrite(blue, 255);
    analogWrite(green,255);
    analogWrite(red,255);
  }
  if (mode == 8){
    analogWrite(blue, 0);
    analogWrite(green,0);
    analogWrite(red,0);
    delay(1000);
    mode = 0;
  }
  
}
