int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int buzzer = 15;
int button1 = 1;
int button2 = 2;
int LDR = 16;
int digito[16][4] = {
 { LOW, LOW, LOW, LOW},
 { LOW, LOW, LOW, HIGH}, 
 { LOW, LOW, HIGH, LOW}, 
 { LOW, HIGH, LOW, LOW}, 
 { HIGH, LOW, LOW, LOW}, 
 { LOW, LOW, HIGH, HIGH}, 
 { LOW, HIGH, HIGH, LOW}, 
 { HIGH, HIGH, LOW, LOW}, 
 { HIGH, LOW, HIGH, LOW}, 
 { LOW, HIGH, LOW, HIGH}, 
 { HIGH, LOW, LOW, HIGH}, 
 { HIGH, HIGH, HIGH, LOW}, 
 { HIGH, HIGH, LOW, HIGH}, 
 { HIGH, LOW, HIGH, HIGH}, 
 { LOW, HIGH, HIGH, HIGH}, 
 { HIGH, HIGH, HIGH, HIGH},
};
int buttonstate = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S3!");
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(LDR, INPUT);
}

void loop() {
  int valor = analogRead(LDR);
  int luz = map(valor, 64, 8126, 2000, 0);
if(luz >= 0 && luz <= 125) {
    tone(15, 10, 100);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 10);
  } else if (luz > 125 && luz <= 250) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 20);
  } else if (luz > 250 && luz <= 375) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 30);
  } else if (luz > 375 && luz <= 500) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 40);
  } else if (luz > 500 && luz <= 625) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 50);
  } else if (luz > 625 && luz <= 750) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 60);
  } else if (luz > 750 && luz <= 875) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 70);
  } else if (luz > 875 && luz <= 1000) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 80);
  } else if (luz > 1000 && luz <= 1125) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 90);
  } else if (luz > 1125 && luz <= 1250) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 100);
  } else if (luz > 1250 && luz <= 1375) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 110);
  } else if (luz > 1375 && luz <= 1500) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 120);
  } else if (luz > 1500 && luz <= 1625) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 130);
  } else if (luz > 1625 && luz <= 1750) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 140);
  } else if (luz > 1750 && luz <= 1875) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 150);
  } else if (luz > 1875 && luz <= 2000) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 160);
  }
   buttonstate = digitalRead(button1);
   if (buttonstate == LOW) {
    if(luz >= 0 && luz <= 125){
      int combinacao[] = {0,0,0,0};
    } else if (luz > 125 && luz <= 250){
      int combinacao[] = {0,0,0,1};
    } else if (luz > 250 && luz <= 375){
      int combinacao[] = {0,0,1,0};
    } else if (luz > 375 && luz <= 500){
      int combinacao[] = {0,0,1,1};
    } else if (luz > 500 && luz <= 625){
      int combinacao[] = {0,1,0,0};
    } else if (luz > 625 && luz <= 750){
      int combinacao[] = {0,1,0,1};
    } else if (luz > 750 && luz <= 875){
      int combinacao[] = {0,1,1,0};
    } else if (luz > 875 && luz <= 1000){
      int combinacao[] = {0,1,1,1};
    } else if (luz > 1000 && luz <= 1125){
      int combinacao[] = {1,0,0,0};
    } else if (luz > 1125 && luz <= 1250){
      int combinacao[] = {1,0,0,1};
    } else if (luz > 1250 && luz <= 1375){
      int combinacao[] = {1,0,1,0};
    } else if (luz > 1375 && luz <= 1500){
      int combinacao[] = {1,0,1,1};
    } else if (luz > 1500 && luz <= 1625){
      int combinacao[] = {1,1,0,0};
    } else if (luz > 1625 && luz <= 1750){
      int combinacao[] = {0,0,0,1};
    } else if (luz > 1750 && luz <= 1875){
      int combinacao[] = {1,1,1,0};
    } else if (luz > 1875 && luz <= 2000){
      int combinacao[] = {1,1,1,1};
    }
  } else if (buttonstate == HIGH) {
    Serial.println("Aperte o botão para armazenar o valor");
  } 
    if (Serial.available() > 0)
     for (int i=0;i<1;i++){
      combinacao[i] = Serial.read();
      delay(10);
   //}
}