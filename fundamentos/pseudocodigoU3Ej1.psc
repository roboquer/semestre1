//Declaracion de variables
//Entero opc
//Real BaseT, AlturaT, Radio, LadoC, Pii, A
Algoritmo Area
	Escribir "Ingresa la opcion de la area que se quiere realizar:"
	Escribir "1.- Triangulo"
	Escribir "2.- Circulo"
	Escribir "3.- Cuadrado"
	Leer opc
	Si opc = 1 Entonces
		Escribir "Ingresa la base"
		Leer BaseT
		Escribir "Ingresa la altura"
		Leer AlturaT
		Si BaseT>0 Y AlturaT>0 Entonces
			A <- BaseT * AlturaT / 2
			Escribir "El area es: ",A
		SiNo
			Escribir "Ingrese numeros mayores a 0"
		FinSi
	SiNo
		Si opc = 2 Entonces
			Escribir "Ingresa el radio"
			Leer Radio
			Si Radio > 0 Entonces
				Pii <- 3.14
				A <- Pi * Radio^2
				Escribir "El area es: ",A
			SiNo
				Escribir "Ingrese numeros mayores a 0"
			FinSi
		SiNo
			Si opc = 3 Entonces
				Escribir "Ingresa un lado del cuadrado"
				Leer LadoC
				Si LadoC > 0 Entonces
					A <- LadoC^2
					Escribir "El area es: ",A
				SiNo
					Escribir "Ingrese numeros mayores a 0"
				FinSi
			SiNo
				Escribir "Ingreso una opcion no valida"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
