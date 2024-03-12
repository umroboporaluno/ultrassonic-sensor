/*
    Ultrasonic Sensor (Sensor Ultrassônico)

    Este é um exemplo de como criar um sonar que irá medir distâncias usando um sensor ultrassônico.

    O circuito:
    * Sensor ultrassônico com pino TRIGGER conectado ao pino digital 10 do Arduino
    * Sensor ultrassônico com pino ECHO conectado ao pino digital 9 do Arduino

    Criado em 11/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

// Adicionando a biblioteca NewPing, certifique-se de a ter instalado corretamente em seu ambiente.
#include <NewPing.h> 

// Mapeamento de pinos
const int trigger_pin = 10; ///< O pino conectado ao pino TRIGGER do sensor ultrassônico.
const int echo_pin = 9; ///< O pino conectado ao pino ECHO do sensor ultrassônico.

// Definindo a distância máxima que o sensor irá medir.
const int maxDistance = 200; ///< A distância máxima, em centímetros, que o sensor irá medir.

// Criando um objeto do tipo NewPing
// NewPing(pino_trigger, pino_echo, distância_máxima)
NewPing sonar(trigger_pin, echo_pin, maxDistance);

/**
 * A função setup do Arduino usada para configuração e configurar tarefas.
 */
void setup() {

  // Inicializa a comunicação serial.
  // Serial.begin(velocidade_de_transmissão);
  Serial.begin(9600); ///< Inicializa a comunicação serial com uma velocidade de 9600 bits por segundo.
} // Fecha a função setup()

/**
 * A função de loop do Arduino usada para repetição de tarefas em loop.
 * loop() --> A função irá executar em repetição infinita logo após a função setup()
 */

void loop() {

  /*
    * A função ping_cm() é nativa da biblioteca NewPing.
    * Ela irá retornar a distância em centímetros.
  */

  int distInCentimeter = sonar.ping_cm(); ///< Realiza a leitura da distância em centímetros.
  
  // Imprime a distância lida no monitor serial.
  // Serial.print(texto); --> Imprime o texto no monitor serial.
  // Serial.println(texto); --> Imprime o texto no monitor serial e pula uma linha.
  Serial.print(distInCentimeter);
  Serial.println("cm");
    
  // Aguarda 1 segundo antes de realizar uma nova leitura.
  // delay(tempo_em_milissegundos);
  delay(1000);
} // Fecha a função loop()
