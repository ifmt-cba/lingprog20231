all: clean olamundo exercicios1

olamundo:
	@echo 
	@echo =======================
	@echo    Programa OlaMundo
	@echo =======================
	@echo Compilando o programa
	gcc OlaMundo.c -o olamundo
	@echo Tornando o programa executavel
	chmod +x olamundo
	@echo Executando o programa
	./olamundo

exercicios1:
	@echo 
	@echo =======================
	@echo  Programas da Lista 1
	@echo =======================
	@echo Compilando os programas
	gcc exercicios01.c -lm -o exercicios1
	@echo Tornando o programa executavel
	chmod +x exercicios1
	@echo Executando o programa
	./exercicios1

clean:
	@echo
	@echo =======================
	@echo  Apagando os Programas
	@echo =======================
	rm -f olamundo exercicios1
