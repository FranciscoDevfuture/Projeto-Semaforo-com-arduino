/*
Projeto: Semáforo com Três Leds
Programador: Francisco José Dos Santos
Data: 13/02/2025 
versão 1.0
*/

#define led_verde 5     // Associação da porta digital 5 do Arduino ao LED físico verde
#define led_amarelo 6   // Associação da porta digital 6 do Arduino ao LED físico amarelo
#define led_vermelho 7  // Associação da porta digital 7 do Arduino ao LED físico vermelho

// Definição das variáveis
int tempo_vermelho = 7000; // Tempo do LED vermelho (7 segundos)

void setup() {
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);

  digitalWrite(led_verde, HIGH);  // Acende o LED verde inicialmente
}

void loop() {
  delay(10000);  // Tempo do LED verde (10 segundos)
  
  digitalWrite(led_verde, LOW);  // Apaga o LED verde
  digitalWrite(led_amarelo, HIGH);  // Acende o LED amarelo
  delay(3000);  // Tempo do LED amarelo (3 segundos)
  
  digitalWrite(led_amarelo, LOW);  // Apaga o LED amarelo
  digitalWrite(led_vermelho, HIGH);  // Acende o LED vermelho
  delay(70000);  // Tempo do LED vermelho (7 segundos)
  
  digitalWrite(led_vermelho, LOW);  // Apaga o LED vermelho
  digitalWrite(led_verde, HIGH);  // Acende novamente o LED verde
}
