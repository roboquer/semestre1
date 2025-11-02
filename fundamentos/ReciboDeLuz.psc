Algoritmo ReciboDeLuz
	Definir opc1, opc2, lac, lan, lec Como Entero
	Definir subtotal, total, DAP Como Real
	
	Repetir
		Limpiar Pantalla
		Escribir "Ingresa que tipo de recibo es:"
		Escribir "1.- Domestico"
		Escribir "2.- Comercial"
		Escribir "3.- Salir"
		Leer opc1
		
		Segun opc1 Hacer
			1:
				Escribir "Ingrese la lectura actual: "
				Leer lac
				Escribir "Ingrese la lectura anterior: "
				Leer lan
				lec <- lac - lan
				
				Si lec < 0 Entonces
					Escribir "La lectura anterior debe ser menor a la lectura actual"
				Sino
					Si lec < 50 Entonces
						subtotal <- 50 * 1.099
					Sino
						Si lec <= 150 Entonces
							subtotal <- lec * 1.099
						Sino
							Si lec > 150 Y lec <= 280 Entonces
								subtotal <- 150 * 1.099 + (lec - 150) * 1.335
							Sino
								Si lec > 280 Entonces
									subtotal <- 150 * 1.099 + 130 * 1.335 + (lec - 280) * 3.903
								FinSi
							FinSi
						FinSi
					FinSi
					
					DAP <- 141.42 * 2
					total <- subtotal + subtotal * 0.16 + DAP
					
					Escribir ""
					Escribir "	Desglose de pago"
					Escribir ""
					Escribir "Cargo por consumo (kWh): 		$", subtotal
					Escribir "IVA 16%: 				$", subtotal * 0.16
					Escribir "DAP: 					$", DAP
					Escribir ""
					Escribir "Total: 				$", total
					Escribir ""
				FinSi
				Esperar Tecla
			2:
				Escribir "Ingrese su categoria"
				Escribir "1.- PDBT"
				Escribir "2.- GDBT"
				Leer opc2
				
				Segun opc2 Hacer
					1:
						Escribir "Ingrese la lectura actual: "
						Leer lac
						Escribir "Ingrese la lectura anterior: "
						Leer lan
						lec <- lac - lan
						
						Si lec < 0 Entonces
							Escribir "La lectura anterior debe ser menor a la lectura actual"
						Sino
							subtotal <- lec * 4.162
							DAP <- 36.89
							total <- subtotal + subtotal * 0.16 + DAP
							
							Escribir ""
							Escribir "	Desglose de pago"
							Escribir ""
							Escribir "Cargo por consumo (kWh): 		$", subtotal
							Escribir "IVA 16%: 				$", subtotal * 0.16
							Escribir "Cargo fijo: 			$", DAP
							Escribir ""
							Escribir "Total: 				$", total
							Escribir ""
						FinSi
					2:
						Escribir "Ingrese la lectura actual: "
						Leer lac
						Escribir "Ingrese la lectura anterior: "
						Leer lan
						lec <- lac - lan
						
						Si lec < 0 Entonces
							Escribir "La lectura anterior debe ser menor a la lectura actual"
						Sino
							subtotal <- lec * 2.036
							DAP <- 368.95
							total <- subtotal + subtotal * 0.16 + DAP
							
							Escribir ""
							Escribir "	Desglose de pago"
							Escribir ""
							Escribir "Cargo por consumo (kWh): 		$", subtotal
							Escribir "IVA 16%: 				$", subtotal * 0.16
							Escribir "Cargo fijo: 			$", DAP
							Escribir ""
							Escribir "Total: 				$", total
							Escribir ""
						FinSi
					De Otro Modo:
						Escribir "Ingrese una opcion valida"
				FinSegun
				Esperar Tecla
			3:
				//Salir
			De Otro Modo:
				Escribir "Ingrese una opcion valida"
		FinSegun
	Hasta Que opc1 = 3
FinAlgoritmo