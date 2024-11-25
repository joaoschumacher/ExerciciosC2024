# Sistema de Gerenciamento de Poções de Alquimia

Você foi contratado para desenvolver um programa que auxilie um alquimista em sua jornada de criação de poções. O sistema deve permitir o controle do estoque de ingredientes e o preparo de poções com base em um conjunto de receitas pré-definidas. 
O programa deve ter um menu com as opções descritas a seguir, e todos os dados deverão ser armazenados usando arrays e structs.

## Arquivo: TrabalhoPraticoGB.c

### Autor
João Pedro Schumacher

### Compilação e Execução

Para compilar e executar o programa, siga os seguintes passos:

#### Compilação

1. Abra um terminal e navegue até o diretório onde o arquivo `TrabalhoPraticoGB.c` está salvo.
2. Compile o programa.

#### Execução
./TrabalhoPraticoGB.exe

### Instruções de Uso
Ao iniciar o programa, será exibido um menu com as seguintes opções:
Consultar Ingredientes Disponíveis
Mostra todos os ingredientes disponíveis no estoque e suas respectivas quantidades.

Preparar Poção
Permite ao usuário selecionar uma poção para preparar. O sistema verifica se há ingredientes suficientes para a receita:

Caso haja ingredientes suficientes, a poção será criada e o estoque será atualizado.
Caso contrário, o sistema informará quais ingredientes estão em falta.
Reabastecer Ingrediente
Lista todos os ingredientes do estoque. O usuário pode selecionar um ingrediente e adicionar uma quantidade específica ao estoque.

Sair do Programa
Encerra o programa.
