# Super Trunfo de Cidades

Este programa em C simula um mini-jogo no estilo **Super Trunfo**, onde o jogador escolhe um atributo para comparar. O programa determina qual carta vence com base no atributo escolhido.

---

## Funcionalidades

- Cadastro manual de duas cartas com dados como população, área, PIB, etc.
- Cálculo automático de:
  - **Densidade demográfica**
  - **PIB per capita**
- Menu interativo para o jogador escolher qual atributo deseja comparar.
- Lógica de comparação com regras específicas:
  - Atributos normais: **maior valor vence**
  - Densidade demográfica: **menor valor vence**
- Exibição clara do vencedor ou mensagem de **empate**.

---

## 🛠Como compilar e executar

### 1. **Salvar o código**

Salve o código em um arquivo chamado `super_trunfo_cidades.c`.

### 2. **Compilar com GCC**

No terminal, use o seguinte comando para compilar:

```bash
gcc super_trunfo_cidades.c -o super_trunfo_cidades
```
### 3. **Executar**

No terminal, use o seguinte comando para executar:

```bash
./super_trunfo_cidades
```
