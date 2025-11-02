//Declaracion de variables
//Entero opc
//Real BaseT, AlturaT, Radio, LadoC, Pii, A
Algoritmo Area
	Escribir "Selecciona la opcion de que area quieres obtener"
	Escribir "1.- Triangulo"
	Escribir "2.- Circulo"
	Escribir "3.- Cuadrado"
	Leer opc
	Según opc Hacer
		1:
			Escribir "Ingresa la base"
			Leer BaseT
			Escribir "Ingrese la altura"
			Leer AlturaT
			Si BaseT>0 Y AlturaT>0 Entonces
				A <- BaseT*AlturaT/2
				Escribir "El area es: ",A
			SiNo
				Escribir "Ingrese numeros mayores a 0"
			FinSi
		2:
			Escribir "Ingrese el radio"
			Leer Radio
			Si Radio > 0 Entonces
				Pii <- 3.14
				A <- Pii*Radio^2
				Escribir "El area es: ",A
			SiNo
				Escribir "Ingrese numeros mayores a 0"
			FinSi
		3:
			Escribir "Ingrese un lado del cuadrado"
			Leer LadoC
			Si LadoC > 0 Entonces
				A <- LadoC^2
				Escribir "El area es: ",A
			SiNo
				Escribir "Ingrese numeros mayores a 0"
			FinSi
		De Otro Modo:
			Escribir "Ingrese una opcion valida"
	FinSegún
FinAlgoritmo
