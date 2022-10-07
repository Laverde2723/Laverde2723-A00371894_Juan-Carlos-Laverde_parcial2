// C++ code
// 
const int LEDs1 = 4;
const int LEDs2 = 5;
const int LEDs3 = 6;
const int LEDs4 = 7;
const int LEDs5 = 8;
const int BUZZER = 3;
const int BUTTON = 2;
bool btnState = false;
//const int SENSOR = 'AO';



void setup()
{
  pinMode(LEDs1, OUTPUT);
  pinMode(LEDs2, OUTPUT);
  pinMode(LEDs3, OUTPUT);
  pinMode(LEDs4, OUTPUT);
  pinMode(LEDs5, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, OUTPUT); 
}

void loop()
{
btnState = digitalRead(BUTTON);
  
  digitalWrite(LEDs1, HIGH);
  digitalWrite(LEDs2, HIGH);
  digitalWrite(LEDs3, HIGH);
  digitalWrite(LEDs4, HIGH);
  digitalWrite(LEDs5, HIGH);
  
  if(BUTTON){
    digitalWrite(BUZZER, HIGH);
  }else{
    digitalWrite(BUZZER, LOW);
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDs1, LOW);
  digitalWrite(LEDs2, LOW);
  digitalWrite(LEDs3, LOW);
  digitalWrite(LEDs4, LOW);
  digitalWrite(LEDs5, LOW);
  
  if(BUTTON){
    digitalWrite(BUZZER, LOW);
  }else{
    digitalWrite(BUZZER, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}
