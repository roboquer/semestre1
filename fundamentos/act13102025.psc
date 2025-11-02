Algoritmo sin_titulo
    Definir opc1, i, n, div, suma, num1, num2, opc2, R, RB, calf Como Entero
    Definir d, m, a, da, ma, aa, valido, diasMes, diasVividos, bisiestos, diasAntesAct, diasAntesNac, totalAct, totalNac Como Entero
	
    suma <- 0
    calf <- 0
    bisiestos <- 0
	
    Escribir "Ingrese a qu� programa quiere ingresar:"
    Escribir "1.- Examen de operaciones random"
    Escribir "2.- Saber si un n�mero es perfecto"
    Escribir "3.- Saber cu�ntos d�as ha vivido una persona hasta la fecha (10/10/2025)"
    Leer opc1
	
    Segun opc1 Hacer
        Caso 1:
            Para i <- 1 Hasta 5 Con Paso 1 Hacer
                num1 <- Aleatorio(1,10)
                num2 <- Aleatorio(1,10)
                opc2 <- Aleatorio(0,3)
				
                Segun opc2 Hacer
                    Caso 0:
                        RB <- num1 + num2
                        Escribir num1, " + ", num2, " = "
                        Leer R
                        Si R = RB Entonces
                            calf <- calf + 20
                        FinSi
						
						
                    Caso 1:
                        RB <- num1 - num2
                        Escribir num1, " - ", num2, " = "
                        Leer R
                        Si R = RB Entonces
                            calf <- calf + 20
                        FinSi
						
						
                    Caso 2:
                        RB <- num1 * num2
                        Escribir num1, " * ", num2, " = "
                        Leer R
                        Si R = RB Entonces
                            calf <- calf + 20
                        FinSi
						
						
                    Caso 3:
                        Escribir "Solo ingresa la parte entera de la divisi�n"
                        Mientras num1 < num2 Hacer
                            num1 <- Aleatorio(1,10)
                            num2 <- Aleatorio(1,10)
                        FinMientras
                        RB <- Trunc(num1 / num2)
                        Escribir num1, " / ", num2, " = "
                        Leer R
                        Si R = RB Entonces
                            calf <- calf + 20
                        FinSi
						
                FinSegun
            FinPara
            Escribir "Su calificaci�n es: ", calf
			
			
        Caso 2:
            Escribir "Ingrese n�mero: "
            Leer n
            Si n > 0 Entonces
                suma <- 0
                Para i <- 1 Hasta n-1 Con Paso 1 Hacer
                    div <- n MOD i
                    Si div = 0 Entonces
                        suma <- suma + i
                    FinSi
                FinPara
                Si suma = n Entonces
                    Escribir "El n�mero es perfecto"
                Sino
                    Escribir "El n�mero no es perfecto"
                FinSi
            Sino
                Escribir "Ingrese un n�mero positivo"
            FinSi
			
			
        Caso 3:
            Repetir
                Escribir "Ingresa el d�a que naciste: "
                Leer d
                Escribir "Ingresa el mes que naciste: "
                Leer m
                Escribir "Ingresa el a�o que naciste: "
                Leer a
				
                Escribir "Ingresa el d�a actual: "
                Leer da
                Escribir "Ingresa el mes actual: "
                Leer ma
                Escribir "Ingresa el a�o actual: "
                Leer aa
				
                valido <- 1
				
                // Validar a�os y orden l�gico
                Si a <= 0 O a >= 2100 Entonces
                    Escribir "El a�o de nacimiento debe estar entre 1 y 2099"
                    valido <- 0
                FinSi
				
                Si a > aa Entonces
                    Escribir "El a�o de nacimiento no puede ser mayor al actual"
                    valido <- 0
                FinSi
				
                Si a = aa Y m > ma Entonces
                    Escribir "Si naciste en el mismo a�o, el mes no puede ser mayor al actual"
                    valido <- 0
                FinSi
				
                Si a = aa Y m = ma Y d >= da Entonces
                    Escribir "Si naciste en el mismo mes y a�o, el d�a debe ser menor al actual"
                    valido <- 0
                FinSi
				
                // Validar mes de nacimiento
                Si valido = 1 Entonces
                    Si m < 1 O m > 12 Entonces
                        Escribir "Mes de nacimiento inv�lido"
                        valido <- 0
                    FinSi
                FinSi
				
                // Validar d�a para el mes de nacimiento
                Si valido = 1 Entonces
                    Si m = 2 Entonces
                        Si (a MOD 4 = 0) Y ((a MOD 100 <> 0) O (a MOD 400 = 0)) Entonces
                            diasMes <- 29
                        Sino
                            diasMes <- 28
                        FinSi
                    Sino
                        Si (m = 4) O (m = 6) O (m = 9) O (m = 11) Entonces
                            diasMes <- 30
                        Sino
                            diasMes <- 31
                        FinSi
                    FinSi
					
                    Si d < 1 O d > diasMes Entonces
                        Escribir "El d�a no es v�lido para el mes ", m
                        valido <- 0
                    FinSi
                FinSi
				
                // Validar mes actual y d�a actual
                Si valido = 1 Entonces
                    Si ma < 1 O ma > 12 Entonces
                        Escribir "Mes actual inv�lido"
                        valido <- 0
                    FinSi
                FinSi
				
                Si valido = 1 Entonces
                    Si ma = 2 Entonces
                        Si (aa MOD 4 = 0) Y ((aa MOD 100 <> 0) O (aa MOD 400 = 0)) Entonces
                            diasMes <- 29
                        Sino
                            diasMes <- 28
                        FinSi
                    Sino
                        Si (ma = 4) O (ma = 6) O (ma = 9) O (ma = 11) Entonces
                            diasMes <- 30
                        Sino
                            diasMes <- 31
                        FinSi
                    FinSi
					
                    Si da < 1 O da > diasMes Entonces
                        Escribir "El d�a no es v�lido para el mes ", ma
                        valido <- 0
                    FinSi
                FinSi
				
                Si valido = 0 Entonces
                    Escribir "Vuelva a ingresar las fechas correctamente."
                FinSi
				
            Hasta Que valido = 1
			
            // Calcular d�as vividos
            totalNac <- a * 365 + (a / 4) - (a / 100) + (a / 400)
            totalAct <- aa * 365 + (aa / 4) - (aa / 100) + (aa / 400)
			
            diasAntesNac <- 0
            diasAntesAct <- 0
			
            Para i <- 1 Hasta m-1 Hacer
                Si i = 2 Entonces
                    Si (a MOD 4 = 0) Y ((a MOD 100 <> 0) O (a MOD 400 = 0)) Entonces
                        diasAntesNac <- diasAntesNac + 29
                    Sino
                        diasAntesNac <- diasAntesNac + 28
                    FinSi
                Sino
                    Si (i = 4) O (i = 6) O (i = 9) O (i = 11) Entonces
                        diasAntesNac <- diasAntesNac + 30
                    Sino
                        diasAntesNac <- diasAntesNac + 31
                    FinSi
                FinSi
            FinPara
			
            Para i <- 1 Hasta ma-1 Hacer
                Si i = 2 Entonces
                    Si (aa MOD 4 = 0) Y ((aa MOD 100 <> 0) O (aa MOD 400 = 0)) Entonces
                        diasAntesAct <- diasAntesAct + 29
                    Sino
                        diasAntesAct <- diasAntesAct + 28
                    FinSi
                Sino
                    Si (i = 4) O (i = 6) O (i = 9) O (i = 11) Entonces
                        diasAntesAct <- diasAntesAct + 30
                    Sino
                        diasAntesAct <- diasAntesAct + 31
                    FinSi
                FinSi
            FinPara
			
            totalNac <- totalNac + diasAntesNac + d
            totalAct <- totalAct + diasAntesAct + da
            diasVividos <- totalAct - totalNac
			
            // Calcular a�os bisiestos - cuenta todos los bisiestos entre a y aa
            bisiestos <- 0
            Para i <- a Hasta aa Con Paso 1 Hacer
                Si (i MOD 4 = 0) Y ((i MOD 100 <> 0) O (i MOD 400 = 0)) Entonces
                    bisiestos <- bisiestos + 1
                FinSi
            FinPara
			
            Escribir "Has vivido ", diasVividos, " d�as"
            Escribir "Han pasado ", bisiestos, " a�os bisiestos desde tu nacimiento"
			
			
        De Otro Modo:
            Escribir "Ingrese una opci�n v�lida"
    FinSegun
FinAlgoritmo

