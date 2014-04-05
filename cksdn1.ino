int led[]={3,7,10};


void setup() {
  
  Serial.begin(9600);
  
    pinMode(led[0], OUTPUT);
    pinMode(led[1], OUTPUT);
    pinMode(led[2], OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() 
{
  for( ; ; )
  {
  
  Serial.println("led1,2,3 on");
  digitalWrite(led[0], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led[1], HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(led[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  
  Serial.println("led1 on");
  digitalWrite(led[1], LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led[2], LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  
  Serial.println("led2 on");
  digitalWrite(led[0], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led[1], HIGH);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
  
  Serial.println("led3 on");
  digitalWrite(led[1], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led[2], HIGH);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
  };
} 