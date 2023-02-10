byte button =4;
unsigned long currentTime;
unsigned long endTime;
unsigned long duration;
String sum;
byte flag;
void setup(){
pinMode (button, INPUT_PULLUP);
Serial.begin(9600);
}
void loop(){
  int buttonState=digitalRead(button);
  if (flag == 0 && buttonState == HIGH){
    currentTime = millis();
    flag = 1;
  }
  if (flag == 1 && buttonState == LOW){
    endTime = millis();
    flag = 0;
    duration = endTime - currentTime;
    Serial.print ("button press time  ");
    Serial.println (duration);
  }
}
