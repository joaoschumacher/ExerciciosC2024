# Simulação de Crescimento Bacteriano

Este programa simula o crescimento de uma população de bactérias ao longo de vários ciclos, aplicando variações baseadas em condições ambientais aleatórias. Ele permite observar como diferentes condições podem afetar o crescimento de uma colônia bacteriana.

## Arquivo: TrabalhoPraticoGA.c

### Autor
João Pedro Schumacher

### Compilação e Execução

Para compilar e executar o programa, siga os seguintes passos:

#### Compilação

1. Abra um terminal e navegue até o diretório onde o arquivo `TrabalhoPraticoGA.c` está salvo.
2. Compile o programa.

#### Execução
./TrabalhoPraticoGA.exe

### Instruções de Uso
#### Ao iniciar o programa, será exibido um menu com as seguintes opções:

- "1" para iniciar uma nova simulação
- "2" para sair do programa

#### Para iniciar uma simulação, forneça os seguintes dados:
- População inicial de bactérias: Um número inteiro representando a quantidade inicial de bactérias.
- Taxa de crescimento: Um percentual (número decimal) indicando o crescimento por ciclo.
- Número de ciclos: Quantidade de ciclos de crescimento que serão simulados.


#### Durante a simulação, a cada ciclo, serão aplicadas variações à taxa de crescimento, baseadas em condições ambientais aleatórias, como:
- Alta Temperatura (-30%)
- Falta de Nutrientes (-25%)
- Excesso de Umidade (-20%)
- Radiação Ultravioleta (-50%)
- Condição Favorável (+20%)

#### A simulação termina quando a população atinge zero ou após o número de ciclos definidos.
