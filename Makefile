# Compila todos os arquivos .cpp para gerar o executável 'main'
run:
	g++ *.cpp -o main

# Executa o arquivo 'main'
run2:
	./main

# Defina os arquivos que você deseja limpar
FILES_TO_CLEAN = main *.dot *.png *.txt

# Alvo para limpar arquivos
clear:
	rm -f $(FILES_TO_CLEAN)

# Alvo para limpar e recompilar
clean: clear
	$(MAKE) run
	$(MAKE) run2

.PHONY: run run2 clear clean