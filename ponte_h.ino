//Programa : Controle 1 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 9;
  
void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
}
  
void loop()
{
 //Gira o Motor A no sentido horario
 digitalWrite(IN1, HIGH);
 delay(2000);
 //Para o motor A
 digitalWrite(IN1, HIGH);
 delay(500);
}
