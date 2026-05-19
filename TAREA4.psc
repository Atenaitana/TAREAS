Algoritmo EDAD
	
	Definir e Como Entero
	
	Escribir "Proporciona la edad:"
	Leer e
	
	Si e >= 1 Y e <= 13 Entonces
		Escribir "Eres un niño"
	SiNo
		Si e >= 14 Y e <= 17 Entonces
			Escribir "Eres un adolescente"
		SiNo
			Si e >= 18 Y e <= 65 Entonces
				Escribir "Eres un adulto"
			SiNo
				Escribir "Eres un adulto mayor"
			FinSi
		FinSi
	FinSi
	
	Escribir "Fin del programa"
	
FinAlgoritmo