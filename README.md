<h1 align="center">🤖 Ultrassonic sensor</h1>
<h4 align="center">Um código para um sensor ultrassônico.</h4>
<br />

# :pushpin: Tabela de Conteúdos

- [Como usar](#gear-como-usar)
- [DIY - Do It Yourself](#construction_worker-do-it-yourself)
- [Licença](#page_facing_up-licença)

# :gear: Como usar
```shell
> Abra o Arduino IDE

> No menu do Arduino IDE, Clique em File > Open > File.

> Selecione o arquivo sonar.ino

> Certifique-se de ter a biblioteca NewPing instalada!

> E pronto, já está pronto para usar!

```

# :construction_worker: Do It Yourself
```shell
> Comece criando o arquivo sonar.ino
```

```c++
> sonar.ino

// O código do arduino é lido de cima para baixo, então iremos seguir esse padrão no tutorial!

/**
* Vamos começar incluindo a biblioteca NewPing que nos permite controlar o sensor ultrassônico.
* Tutorial de como instalar a biblioteca: https://www.youtube.com/watch?v=OBB892Iz0SE.
* Tutorial de uso e documentação da biblioteca: https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home.
**/
#include <NewPing.h>

/**
* Agora vamos iniciar os pinos para o circuito!
* Defina algum pino digital para o pino do trigger, neste exemplo usamos o pino 10 na variável trigger_pin.
* Em seguida defina algum pino digital para o pino do echo, nós usamos o pino 9 na variável echo_pin.
* Após isso defina o valor de maxDistance, nós utilizamos 200 centímetros.
**/

// Mapeamento de pinos
const int trigger_pin = 10; ///< O pino conectado ao pino TRIGGER do sensor ultrassônico.
const int echo_pin = 9; ///< O pino conectado ao pino ECHO do sensor ultrassônico.

// Definindo a distância máxima que o sensor irá medir.
const int maxDistance = 200; ///< A distância máxima, em centímetros, que o sensor irá medir.

/**
* Aqui, nos vamos iniciar o NewPing usando uma função da biblioteca que nós adicinamos anteriormente, 
* a partir desse momento, neste exemplo o NewPing começa a ser referenciado como "sonar".
**/
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
```
Para mais informações de como o código funciona, <a href="/sonar.ino">Acesse o código aqui</a>.

Caso exista a possibilidade remota de acontecer erros durante a instalação e execução do seu projeto, consulte os links:

  * <a href="https://www.youtube.com/watch?v=61otAxYJ8hU">Link 1</a>
  * <a href="https://www.youtube.com/watch?v=1ghY5KovpLM">Link 2</a>

Caso não tenha conseguido instalar a biblioteca, siga o passo a passo de como instalar uma biblioteca:

  * <a href="https://www.youtube.com/watch?v=P6gWRxDH4-Y">Link 1</a>

# :page_facing_up: Licença
Licença MIT. Para mais informações sobre a licença, <a href="/LICENSE">Clique aqui</a>

<img src="https://github.com/umroboporaluno/.github/blob/main/profile/ura-logo.png" alt="URA Logo" width="100" align="right" />
