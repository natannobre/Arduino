/************************************************************************
*              Ligando e Desligando Motor com TIP 122                   *
*************************************************************************/
 
int base = 8; //Variável base recebendo o Pino digital 8
 
void setup() {
  pinMode(base,OUTPUT); //Definindo o pino 8 como saída
}
 
void loop() {
  digitalWrite(base, HIGH); //Sinal alto(5v) -&gt; Ligar Motor
  delay(100);  //Espere 5 segundos
  digitalWrite(base, LOW); //Sinal baixo(0v) -&gt; Desliga Motor
  delay(800); //Espere 5 segundos
}
