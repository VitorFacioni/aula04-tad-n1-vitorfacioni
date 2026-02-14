## Aulas 03 e 04 - TAD

Este repositório contém implementações de Tipos Abstratos de Dados (TAD) em C.

## 🚀 Usando o Codespace

Este projeto está configurado para usar GitHub Codespaces ou VS Code Dev Containers.

### Iniciando o Codespace

1. No GitHub, clique no botão **Code** → **Codespaces** → **Create codespace on main**
2. Aguarde a criação do ambiente (Alpine Linux com compilador C e Valgrind)
3. O terminal estará pronto para uso

### Ambiente

- **OS**: Alpine Linux 3.19
- **Compilador**: clang (configurado via Makefile)
- **Ferramentas**: make, valgrind
- **Flags**: `-Wall -pedantic`

## 📦 Estrutura dos Projetos

Cada diretório contém um projeto independente com seu próprio Makefile:

```
aula03-04-tad/
├── array/              ← TAD Array com tipo opaco
├── array_dinamico/     ← Array com redimensionamento dinâmico
├── matriz/             ← TAD Matriz 2D
└── string_buffer/      ← Buffer de string eficiente
```

## 🔧 Trabalhando com os Projetos

### Comandos Makefile

Cada projeto possui os seguintes comandos:

```bash
make          # Compila todos os alvos do projeto
make main     # Compila o executável main
make run      # Compila e executa o programa
make clean    # Remove arquivos compilados
```

Alguns projetos possuem alvos adicionais (consulte o README de cada um).

### Workflow Típico

```bash
# 1. Navegue até o diretório do projeto
cd array/

# 2. Compile
make

# 3. Execute
make run

# 4. Limpe os arquivos gerados
make clean
```

### Verificação de Memória com Valgrind

Para verificar vazamentos de memória:

```bash
# Compile
make

# Execute com valgrind
valgrind --leak-check=full ./build/main
```

## 📂 Projetos Disponíveis

### `array/`
TAD que demonstra encapsulamento e tipo opaco.
- **Compilar**: `cd array && make`
- **Executar**: `make run`
- **Testar tipo opaco**: `make opaque_test` (deve falhar na compilação)

### `array_dinamico/`
Array que cresce dinamicamente conforme necessário.
- **Compilar**: `cd array_dinamico && make`
- **Executar**: `make run`

### `matriz/`
TAD para matriz 2D de inteiros.
- **Compilar**: `cd matriz && make`
- **Executar**: `make run`

### `string_buffer/`
Buffer de string com concatenação eficiente.
- **Compilar**: `cd string_buffer && make`
- **Executar**: `make run`

## 🛠️ Modificando Compilador e Flags

Os Makefiles estão configurados com:

```makefile
CC = clang
CFLAGS = -Wall -pedantic
```

Para alterar o compilador ou flags, edite o Makefile do projeto específico.

## 📋 Detalhes de Implementação

Consulte os README.md de cada TAD para detalhes sobre implementação, interface e exemplos de uso.
