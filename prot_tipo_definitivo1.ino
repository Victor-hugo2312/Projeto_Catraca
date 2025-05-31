#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int trigPin = 2;
const int echoPin = 3;
const int trigPin2 = 4;
const int echoPin2 = 5;
const int alcanceMin = 80;

Servo catraca;
const int servoPin = 13;

LiquidCrystal_I2C lcd(0x27, 16, 2);

int contador = 0;
bool contagem = false;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  catraca.attach(servoPin);
  catraca.write(0);

  // Inicializa o LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Visitantes: 0");
}

void loop() {
  long duracao1, entrada, duracao2, saida;

  // Pulso do sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duracao1 = pulseIn(echoPin, HIGH);
  entrada = duracao1 * 0.034 / 2;

  Serial.print("Distancia: ");
  Serial.print(entrada);
  Serial.println(" cm");
  
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  
  duracao2 = pulseIn(echoPin2, HIGH);
  saida = duracao2 * 0.034 / 2;

  // Detecção de pessoa
  if (entrada <= alcanceMin && entrada > 0 && !contagem) {
    catraca.write(90); // Abre a catraca
    contador++;
    atualizarDisplay();
    contagem = true;
    delay(1500); // Espera a pessoa passar
    catraca.write(0); // Fecha a catraca
  }

  // Reseta o estado quando não há ninguém
  if (entrada > alcanceMin) {
    contagem = false;
  }
    if (saida <= alcanceMin && saida > 0 && !contagem) {
    catraca.write(90); // Abre a catraca
    contador--;
    atualizarDisplay();
    contagem = true;
    delay(1500); // Espera a pessoa passar
    catraca.write(0); // Fecha a catraca
  }

  // Reseta o estado quando não há ninguém
  if (saida > alcanceMin) {
    contagem = false;
  }


  delay(200);
}

void atualizarDisplay() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Visitantes: ");
  lcd.print(contador);
}