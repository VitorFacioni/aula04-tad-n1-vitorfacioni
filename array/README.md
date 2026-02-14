# TAD Array

## 📚 Objetivos Didáticos

Este projeto demonstra os conceitos fundamentais de **Tipos Abstratos de Dados (TAD)** em C, com foco em:

- ✅ **Encapsulamento**: esconder detalhes de implementação
- ✅ **Tipos opacos**: separar interface de implementação
- ✅ **Abstração**: definir O QUE sem revelar COMO
- ✅ **Gerenciamento de memória**: alocação e liberação dinâmica
- ✅ **Reutilização de código**: interface genérica e flexível

## 🏗️ Estrutura do Projeto

```
array/
├── array.h              ← Interface pública (TAD Array)
├── array.c              ← Implementação privada (detalhes escondidos)
├── element.h            ← Abstração do tipo de elemento
├── element.c            ← Implementação do elemento
├── main.c               ← Exemplo de uso correto
├── opaque_test.c        ← Demonstra tipo opaco (não compila)
└── Makefile             ← Automatização da compilação
```

## 📋 Interface do TAD Array

### Operações Disponíveis

| Função | Descrição |
|--------|-----------|
| `array_create(size)` | Cria um array com tamanho especificado |
| `array_destroy(array)` | Libera a memória do array |
| `array_set(array, i, valor)` | Define o valor na posição i |
| `array_get(array, i)` | Obtém o valor na posição i |
| `array_size(array)` | Retorna o tamanho do array |
| `array_print(array)` | Imprime todos os elementos |

