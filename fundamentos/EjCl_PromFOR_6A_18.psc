//Declaracion de variables
//ENTERO G,C,A,i,j,k,cal
//REAL PA,PG,SC,SPA
Algoritmo sin_titulo
	Escribir 'Ingresa cantidad de grupos'
	Leer G
	Si G>=1 Entonces
		Para i<-1 Hasta G Con Paso 1 Hacer
			Escribir "Ingrese cantidad de alumnos"
			Leer A
			Si A>=1 Entonces
				Escribir "Ingrese cantidad de calificaciones"
				Leer C
				Si C >= 1 Entonces
					Para j<-1 Hasta A Con Paso 1 Hacer
						Para k<-1 Hasta C Con Paso 1 Hacer
							Escribir "Ingrese la calificacion ",k," del alumno ",j,":"
							Leer cal
							Si cal>=0 Y cal<=100 Entonces
								SC = SC+cal
							SiNo
								Escribir "Ingrese una calificacion valida"
								k = k-1
							FinSi
						FinPara
						PA = SC/C
					FinPara
					SPA = SPA+PA
					PG = SPA/A
					Escribir "El promedio del grupo ",i," es: ",PG
					SC = 0
					PA = 0
					SPA = 0
					PG = 0
				SiNo
					Escribir "Ingrese una calificacion valida"
				FinSi
			SiNo
				Escribir "Ingresa una cantidad valida"
				i = i-1
			FinSi
		FinPara
	SiNo
		Escribir 'Ingresa una cantidad valida'
	FinSi
FinAlgoritmo