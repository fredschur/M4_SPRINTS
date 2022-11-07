int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int buzzer = 15;
int button1 = 1;
int LDR = 16;

int combinacao[4];

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
  pinMode(LDR, INPUT);
}

void loop() {
  int valor = analogRead(LDR);
if(valor >= 0 && valor <= 125) {
    tone(15, 10, 100);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 10);
  } else if (valor > 125 && valor <= 250) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 20);
  } else if (valor > 250 && valor <= 375) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 30);
  } else if (valor > 375 && valor <= 500) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 40);
  } else if (valor > 500 && valor <= 625) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 50);
  } else if (valor > 625 && valor <= 750) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 60);
  } else if (valor > 750 && valor <= 875) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 70);
  } else if (valor > 875 && valor <= 1000) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 80);
  } else if (valor > 1000 && valor <= 1125) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 90);
  } else if (valor > 1125 && valor <= 1250) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 100);
  } else if (valor > 1250 && valor <= 1375) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 110);
  } else if (valor > 1375 && valor <= 1500) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 120);
  } else if (valor > 1500 && valor <= 1625) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 130);
  } else if (valor > 1625 && valor <= 1750) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 140);
  } else if (valor > 1750 && valor <= 1875) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(1000);
    tone(buzzer, 150);
  } else if (valor > 1875 && valor <= 2000) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    tone(buzzer, 160);
  }
   buttonstate = digitalRead(button1);
   if (buttonstate == LOW) {
    if(valor >= 0 && valor <= 125){
      combinacao[0] = 0;
      combinacao[1] = 0;
      combinacao[2] = 0;
      combinacao[3] = 0;
    } else if (valor > 125 && valor <= 250){
      combinacao[0] = 0;
      combinacao[1] = 0;
      combinacao[2] = 0;
      combinacao[3] = 1;
    } else if (valor > 250 && valor <= 375){
      combinacao[0] = 0;
      combinacao[1] = 0;
      combinacao[2] = 1;
      combinacao[3] = 0;
    } else if (valor > 375 && valor <= 500){
      combinacao[0] = 0;
      combinacao[1] = 0;
      combinacao[2] = 1;
      combinacao[3] = 1;
    } else if (valor > 500 && valor <= 625){
      combinacao[0] = 0;
      combinacao[1] = 1;
      combinacao[2] = 0;
      combinacao[3] = 0;
    } else if (valor > 625 && valor <= 750){
      combinacao[0] = 0;
      combinacao[1] = 1;
      combinacao[2] = 0;
      combinacao[3] = 1;
    } else if (valor > 750 && valor <= 875){
      combinacao[0] = 0;
      combinacao[1] = 1;
      combinacao[2] = 1;
      combinacao[3] = 0;
    } else if (valor > 875 && valor <= 1000){
      combinacao[0] = 0;
      combinacao[1] = 1;
      combinacao[2] = 1;
      combinacao[3] = 1;
    } else if (valor > 1000 && valor <= 1125){
      combinacao[0] = 1;
      combinacao[1] = 0;
      combinacao[2] = 0;
      combinacao[3] = 0;
    } else if (valor > 1125 && valor <= 1250){
      combinacao[0] = 1;
      combinacao[1] = 0;
      combinacao[2] = 0;
      combinacao[3] = 1;
    } else if (valor > 1250 && valor <= 1375){
      combinacao[0] = 1;
      combinacao[1] = 0;
      combinacao[2] = 1;
      combinacao[3] = 0;
    } else if (valor > 1375 && valor <= 1500){
      combinacao[0] = 1;
      combinacao[1] = 0;
      combinacao[2] = 1;
      combinacao[3] = 1;
    } else if (valor > 1500 && valor <= 1625){
      int combinacao[] = {1,1,0,0};
      combinacao[0] = 1;
      combinacao[1] = 1;
      combinacao[2] = 0;
      combinacao[3] = 0;
    } else if (valor > 1625 && valor <= 1750){
      combinacao[0] = 0;
      combinacao[1] = 0;
      combinacao[2] = 0;
      combinacao[3] = 1;
    } else if (valor > 1750 && valor <= 1875){
      combinacao[0] = 1;
      combinacao[1] = 1;
      combinacao[2] = 1;
      combinacao[3] = 0;
    } else if (valor > 1875 && valor <= 2000){
      combinacao[0] = 1;
      combinacao[1] = 1;
      combinacao[2] = 1;
      combinacao[3] = 1;
    }
  } else if (buttonstate == HIGH) {
    Serial.println("Aperte o botão para armazenar o valor");
  } 
  
}