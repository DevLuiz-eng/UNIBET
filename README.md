# 🎲 Unibet – Sistema de Apostas

## 📝 Descrição

**O que o projeto faz:**  
Unibet é um sistema de apostas com saldo e dois jogos integrados: uma roleta de cores e partidas de futebol simuladas com resultados por probabilidade. O usuário pode apostar, ganhar ou perder saldo, e experimentar a sorte com base em regras programadas.

**Tecnologias utilizadas:**  
- Linguagem: `C`  
- Biblioteca: `stdlib.h` (uso de `rand` e `srand` para gerar aleatoriedade)  
- IDE utilizada: `Dev C++`

**Por que foi construído:**  
Esse projeto foi desenvolvido como prática de lógica de programação e manipulação de dados em C. Além disso, reforça conhecimentos em estruturas condicionais, aleatoriedade e modularização do código.

**Instrução de uso:**  
O usuário inicia com um saldo e pode escolher entre dois jogos para apostar. Cada jogo aplica regras de probabilidade e atualiza o saldo de acordo com os resultados.

---

## ⚙️ Documentação Técnica

**Funcionalidades principais:**
- ✅ Sistema de saldo e apostas  
- ✅ Jogo 1: **Roleta de cores** (usuário escolhe a cor e aposta; resultado aleatório define se ganha ou perde)  
- ✅ Jogo 2: **Simulação de partidas de futebol** com narração (resultado baseado em probabilidades)  
- ✅ Interface em modo texto (terminal)  
- ✅ Mensagens e lógica simples para feedback ao usuário

**Arquivos principais:**
- `main.c`: menu principal, controle de saldo, chamadas dos jogos  
- `roleta.c`: lógica do jogo de roleta de cores  
- `futebol.c`: lógica de partidas com narração e resultado aleatório  
- `utils.c`: funções auxiliares, como delays ou geração de números aleatórios

**Técnicas aplicadas:**
- Uso de `rand()` e `srand()` para gerar aleatoriedade  
- Estrutura de controle (`if`, `switch`, `while`)  
- Modularização em arquivos separados por jogo  
- Menu de seleção e controle de fluxo  
- Feedbacks em tempo real no console

---

## ▶️ Como Executar

**Pré-requisitos:**
- Ter um compilador C instalado (ex: `GCC`, `Dev C++`)
- Terminal ou prompt de comando

**Passos:**

```bash
# Clone o repositório
git clone https://github.com/DevLuiz-eng/unibet-sistema-apostas.git

# Acesse a pasta
cd unibet-sistema-apostas

# Compile o programa
gcc main.c roleta.c futebol.c utils.c -o unibet

# Execute o sistema
./unibet
