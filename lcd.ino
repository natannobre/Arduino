#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Sensor de temperatura usando o LM35 e LCD 16x2
//Controle de velocidade de motor DC com PWM
 
#define PINO_PWM                      9    //pino do Arduino que terá a ligação para o driver de motor (ponte H) L298N)
#define TEMPO_NA_MESMA_VELOCIDADE     300  //tempo (ms) em que o motor ficara na mesma velocidade 
 
const int LM35 = A0; // Define o pino que lera a saída do LM35
float temperatura; // Variável que armazenará a temperatura medida
int valor_pwm = 256;   //variavel que armazena o valor do PWM (0..255 -> 0%..100% da rotação do motor)

void setup() {
  Serial.begin(9600); // inicializa a comunicação serial
  lcd.begin(16, 2);
  
  //configura como saída pino terá a ligação para o driver de motor (ponte H) L298N)
  pinMode(PINO_PWM, OUTPUT);
}

void loop() {
/*
  if (valor_pwm <= 256){
    valor_pwm++;
    //delay(TEMPO_NA_MESMA_VELOCIDADE); 
  }else{
    valor_pwm = 255;
  }*/
  digitalWrite(PINO_PWM, HIGH);
  
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
  Serial.print("Temperatura: ");
  lcd.print("Temperatura:");
  Serial.println(temperatura);
  lcd.setCursor(0,1);
  lcd.print(temperatura);
  delay(500);
  lcd.setCursor(1,0);
  lcd.clear();
}
