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

## Instruções de Uso  

Ao iniciar o programa, será exibido um menu com as seguintes opções:  

### Consultar Ingredientes Disponíveis  
- Exibe todos os ingredientes disponíveis no estoque, juntamente com suas respectivas quantidades.  

### Preparar Poção  
- Permite ao usuário selecionar uma poção para preparar.  
- O sistema verifica se há ingredientes suficientes para a receita:  
  - **Caso haja:** A poção será criada e o estoque atualizado.  
  - **Caso contrário:** O sistema informará quais ingredientes estão em falta.  

### Reabastecer Ingrediente  
- Lista todos os ingredientes do estoque.  
- O usuário pode selecionar um ingrediente e adicionar uma quantidade específica ao estoque.  

### Sair do Programa  
- Encerra o programa.

## Tabelas
### Tabela 1: Ingredientes e Quantidade Inicial
| **Ingrediente**         | **Quantidade Inicial** |
|--------------------------|------------------------|
| Pó de Fênix             | 100 g                 |
| Essência Celestial      | 50 ml                 |
| Raiz de Dragão          | 45 g                  |
| Orvalho Lunar           | 30 ml                 |
| Flores Secas            | 200 g                 |
| Elixir Amargo           | 20 ml                 |
| Lágrimas de Unicórnio   | 15 ml                 |

### Tabela 2: Poções e Ingredientes Necessários
| **#** | **Poção**                | **Ingredientes Requeridos**                                           |
|-------|--------------------------|------------------------------------------------------------------------|
| 1     | Poção de Cura            | Pó de Fênix (30g), Essência Celestial (20ml), Flores Secas (20g), Lágrimas de Unicórnio (10ml) |
| 2     | Poção Força da Floresta  | Orvalho Lunar (20ml), Raiz de Dragão (30g), Flores Secas (30g)        |
| 3     | Poção Sabedoria da Riqueza | Essência Celestial (30ml), Pó de Fênix (50g)                          |
| 4     | Poção Sorte no Amor      | Orvalho Lunar (10ml), Flores Secas (50g), Lágrimas de Unicórnio (5ml) |
| 5     | Poção Malvada            | Elixir Amargo (10ml), Raiz de Dragão (15g)                            |
