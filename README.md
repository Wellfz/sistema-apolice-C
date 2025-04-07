# 💼 Sistema de Apólices em C

Este é um projeto simples desenvolvido em linguagem C para fins acadêmicos.  
Ele simula o cadastro e a exibição de apólices de seguro, utilizando os conceitos de "struct" e "union".

## 🧠 Objetivo

O exercício foi proposto como forma de exercitar o uso de:

- "struct": para representar os dados fixos de uma apólice
- "union": para armazenar dados variáveis de acordo com o tipo de seguro
- Controle condicional para adaptar o input/output com base no tipo da apólice

## 📋 Funcionalidades

- Cadastro de até 3 apólices
- Três tipos de seguros:
  - 🏠 Residencial (com campo de endereço)
  - 🧬 Vida (com data de nascimento)
  - 🚗 Automóvel (com marca, modelo e ano)
- Exibição formatada das apólices cadastradas

## 💻 Estrutura do Código

- `typedef struct Apolice`: define o tipo principal contendo nome, identidade, valor e tipo
- `typedef union DadosApolice`: define os campos específicos de cada tipo
- Uso de `scanf` com `%[^\n]` para inputs com espaços
- Uso de `locale.h` para acentuação em português
