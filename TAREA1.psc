
	Algoritmo NumeroMayor
		
		Definir num1, num2, num3 Como Real
		
		Escribir "Ingresa el primer numero:"
		Leer num1
		
		Escribir "Ingresa el segundo numero:"
		Leer num2
		
		Escribir "Ingresa el tercer numero:"
		Leer num3
		
		Si num1 > num2 Y num1 > num3 Entonces
			Escribir "El numero mayor es: ", num1
		Sino
			Si num2 > num1 Y num2 > num3 Entonces
				Escribir "El numero mayor es: ", num2
			Sino
				Escribir "El numero mayor es: ", num3
			FinSi
		FinSi
		
FinAlgoritmo
