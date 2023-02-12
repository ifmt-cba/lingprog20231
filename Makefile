all: clean olamundo

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

clean:
	@echo
	@echo =======================
	@echo  Apagando os Programas
	@echo =======================
	rm -f olamundo
