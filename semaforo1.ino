//Declarações de variáveis e constantes
#define verde 13 
#define amarelo 12
#define vermelho 8

//Setup -> Configurações, entradas e saídas
void setup()
{
  pinMode(verde, OUTPUT);
   pinMode(amarelo, OUTPUT);
    pinMode(vermelho, OUTPUT);
}  


/*Loop -> executa infinitamente o procedimento
 enquanto estiver alimentado por energia elétrica*/
void loop()
  
{
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  delay(10000);
  
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(5000);
  
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(15000);
    	
}