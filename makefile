# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Pastas
SRC = Exercicios/estruturasequencial
BIN = bin/exercicios/estruturasequencial

# Cria pasta bin se não existir
$(BIN):
	mkdir -p $(BIN)

# Compilar um arquivo específico
# Uso: make run FILE=1
run: $(BIN)
	$(CXX) $(CXXFLAGS) $(SRC)/$(FILE).cpp -o $(BIN)/$(FILE).exe
	./$(BIN)/$(FILE).exe

# Compilar todos os .cpp da pasta
all: $(BIN) $(patsubst $(SRC)/%.cpp,$(BIN)/%.exe,$(wildcard $(SRC)/*.cpp))

# Regra de compilação: .cpp -> .exe
$(BIN)/%.exe: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Limpar os executáveis
clean:
	rm -f $(BIN)/*.exe
