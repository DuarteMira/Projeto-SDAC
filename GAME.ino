#define BlueLed 13
#define GreenLed 12
#define RedLed 11
#define PurpleLed 10

#define LedGame0 A1
#define LedGame1 8
#define LedGame2 A2
#define LedGame3 9

#define BlueButton 7
#define GreenButton 6
#define RedButton 5
#define PurpleButton 4

#define RLed A3
#define BLed A4
#define GLed A5

int ON = 0;
int OFF = 1;

void setup()
{
  Serial.begin(9600);

  RuleDefining();
  
  pinMode(BlueLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
  pinMode(PurpleLed, OUTPUT);
  
  pinMode(RLed, OUTPUT);
  pinMode(BLed, OUTPUT);
  pinMode(GLed, OUTPUT);
    
  pinMode(BlueButton, INPUT);
  pinMode(GreenButton, INPUT);
  pinMode(RedButton, INPUT);
  pinMode(PurpleButton, INPUT);
  
  pinMode(LedGame0, OUTPUT);
  pinMode(LedGame1, OUTPUT);
  pinMode(LedGame2, OUTPUT);
  pinMode(LedGame3, OUTPUT);

  digitalWrite(BlueLed, ON);
  digitalWrite(GreenLed, ON);
  digitalWrite(RedLed, ON);
  digitalWrite(PurpleLed, ON);
    
}

void loop()
{     
  bool Blue = digitalRead(BlueButton);
  bool Green = digitalRead(GreenButton);
  bool Red = digitalRead(RedButton);
  bool Purple = digitalRead(PurpleButton);
	
  int DancyDance();
 
  value();
  String ColorState = value();
  //Serial.println(ColorState);
  
  if (Blue == 1){
      if(ColorState == "Blue"){
        Serial.println("Win");
        DancyDance();
      }
      else{
        Serial.println("Lose");
      }
  }

  else if (Green == 1){
      if(ColorState == "Green"){
        Serial.println("Win");
        DancyDance();
      }
      else{
        Serial.println("Lose");
      }
  }

  else if (Red == 1){
      if(ColorState == "Red"){
        Serial.println("Win");
        DancyDance();
      }
      else{
        Serial.println("Lose");
      }
  }

  else if (Purple == 1){
      if(ColorState == "Purple"){
        Serial.println("Win");
        DancyDance();
      }
      else{
        Serial.println("Lose");
      }
  }
}

int WaitingTime = 500;
int NewMillis = 0;
int i = 0;
int val = 7;

String value(){

  int CurrentMillis = millis();
  
  if (CurrentMillis - NewMillis >= WaitingTime){
    val = rand() %7+1;
    NewMillis = CurrentMillis;
  }

  String Color;
  
  switch(val){

    case 1 :  
      Color = "Red";
      digitalWrite(RLed, ON);
      digitalWrite(GLed, OFF);
      digitalWrite(BLed, OFF);
      break;

    case 2 :  
      Color = "Purple";
      digitalWrite(RLed, ON);
      digitalWrite(GLed, OFF);
      digitalWrite(BLed, ON);
      break;

    case 3 :  
      Color = "Blue";
      digitalWrite(RLed, OFF);
      digitalWrite(GLed, OFF);
      digitalWrite(BLed, ON);
      break;

    case 4 :  
      Color = "Cyan";
      digitalWrite(RLed, OFF);
      digitalWrite(GLed, ON);
      digitalWrite(BLed, ON);
      break;
    case 5 :
      Color = "Green";
      digitalWrite(RLed, OFF);
      digitalWrite(GLed, ON);
      digitalWrite(BLed, OFF);
      break;

    case 6 : 
      Color = "Yellow";
      digitalWrite(RLed, ON);
      digitalWrite(GLed, ON);
      digitalWrite(BLed, OFF);
      break;

    case 7 : 
      Color = "White";
      digitalWrite(RLed, ON);
      digitalWrite(GLed, ON);
      digitalWrite(BLed, ON);
      break;

    default :    
      Color = "Value not Supported";
      break;
  }
  return Color;
}

int DancyDance(){
  digitalWrite(BlueLed, OFF);
  digitalWrite(GreenLed, OFF);
  digitalWrite(RedLed, OFF);
  digitalWrite(PurpleLed, OFF);

  delay(500);

  digitalWrite(BlueLed, ON);
  digitalWrite(GreenLed, ON);
  digitalWrite(RedLed, ON);
  digitalWrite(PurpleLed, ON);

  delay(500);
}

int RuleDefining(){

  randomSeed(analogRead(0));
  
  Serial.println();
  
  int bit0 = random(0, 2);
  int bit1 = random(0, 2);
  int bit2 = random(0, 2);
  int bit3 = random(0, 2);
/*
  Serial.println(bit0);
  Serial.println(bit1);
  Serial.println(bit2);
  Serial.println(bit3);
*/  
  digitalWrite(LedGame0, bit0);
  digitalWrite(LedGame1, bit1);
  digitalWrite(LedGame2, bit2);
  digitalWrite(LedGame3, bit3);
}