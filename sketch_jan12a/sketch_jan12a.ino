int realy_pin = 8;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 );
  pinMode(realy_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(realy_pin, LOW);
  delay(500);
  digitalWrite(realy_pin, HIGH);

  if(count == 20){
    exit(0);
  }
  count++;
  Serial.println(count);
}
