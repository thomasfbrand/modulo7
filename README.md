Manual do Raspberry Pi Pico W

Sumário 

1. Introdução
   1.1. Sobre o Raspberry Pi Pico W
   1.2. Características Principais

2. Raspberry Pi Pico W
   2.1. Descrição Geral
   2.2. Especificações Técnicas
   2.3. Interfaces de Comunicação

3. Prova de conceito 

 1. Introdução 

 1.1. Sobre o Raspberry Pi Pico W 

O Raspberry Pi Pico W é um sistema embarcado que oferece conectividade wireless e é baseado no RP2040 microcontrolador chip, projetado pela Raspberry Pi Foundation no Reino Unido.

 1.2. Características Principais 

- Microcontrolador RP2040 com processador Arm Cortex M0+ dual-core
- 264kB de SRAM e 2MB de memória flash on-board
- Conectividade wireless 802.11n (2.4 GHz) e Bluetooth 5.2
- Suporte para Bluetooth LE Central e Peripheral roles
- Antena onboard
- Soft access point para até quatro clientes
- Interface via SPI ao RP2040
- Recomendações para melhor desempenho da antena


 2. Raspberry Pi Pico W 

 2.1. Descrição Geral 

O Raspberry Pi Pico W é uma versão do Raspberry Pi Pico que inclui conectividade wireless 802.11n (2.4 GHz) e Bluetooth 5.2. Ele é projetado para aplicações que requerem comunicação sem fio.

 2.2. Especificações Técnicas 

- Processador dual-core Arm Cortex M0+
- 264kB de SRAM
- 2MB de memória flash on-board
- Wireless (802.11n) single-band (2.4 GHz)
- Suporte para Bluetooth LE Central e Peripheral roles
- Antena onboard

 2.3. Interfaces de Comunicação 

1.  Wireless (802.11n) Single-Band (2.4 GHz):  O Raspberry Pi Pico W é equipado com uma interface wireless 802.11n operando na banda de frequência de 2.4 GHz. Isso permite a conexão com redes Wi-Fi, o que pode ser útil para comunicação sem fio com outros dispositivos ou acesso à Internet.

2.  Bluetooth 5.2:  Além da conectividade Wi-Fi, o Pico W oferece suporte para Bluetooth 5.2. Isso permite a comunicação sem fio de curto alcance com outros dispositivos Bluetooth, abrindo oportunidades para interagir com periféricos ou outros dispositivos equipados com Bluetooth.

3.  SPI (Serial Peripheral Interface):  O Raspberry Pi Pico W possui uma interface SPI que permite a comunicação serial síncrona com outros dispositivos. Isso é útil para se comunicar com sensores, displays, e outros componentes que suportam a interface SPI.

4.  UART (Universal Asynchronous Receiver-Transmitter):  O UART é uma interface de comunicação serial assíncrona que permite a comunicação com outros dispositivos, como microcontroladores, módulos GPS, ou dispositivos periféricos que usam comunicação serial.

 Observações Importantes: 

- A interface wireless 802.11n e Bluetooth 5.2 são conectadas via SPI ao RP2040 microcontrolador.
- Devido a limitações de pinos, algumas interfaces compartilham pinos, como a interface SPI compartilhando o CLK com o monitor VSYS. Portanto, é importante considerar isso ao projetar suas conexões e comunicações.



3. Prova de Conceito

Prova de Conceito: Controle de LED com Raspberry Pi Pico W

Explicação:

- A prova de conceito utiliza o Raspberry Pi Pico W para controlar um LED.
- O LED é conectado ao pino GP5 (definido como `ledPin`).
- A função `setup()` é chamada uma vez no início do programa e configura o pino `ledPin` como saída usando `pinMode(ledPin, OUTPUT)`.
- O loop principal é executado continuamente e realiza as seguintes ações:
  - `digitalWrite(ledPin, HIGH)` liga o LED, acendendo-o.
  - `delay(1000)` faz o programa esperar por 1 segundo.
  - `digitalWrite(ledPin, LOW)` desliga o LED, apagando-o.
  - `delay(1000)` faz o programa esperar por mais 1 segundo.

Com isso, o código cria um efeito de piscar do LED, onde o LED acende por 1 segundo e depois apaga por 1 segundo, repetidamente.

Configuração de Hardware:

Certifique-se de que o Raspberry Pi Pico W esteja corretamente alimentado e conectado a um LED, com o pino de saída (`ledPin`) conectado ao ânodo do LED e o catodo do LED conectado ao GND.

Resultado Esperado:

Quando o programa é carregado no Raspberry Pi Pico W, o LED conectado deve piscar a cada segundo, alternando entre ligado e desligado. Isso demonstra o uso de uma interface GPIO para controlar um dispositivo externo, neste caso, o LED.
