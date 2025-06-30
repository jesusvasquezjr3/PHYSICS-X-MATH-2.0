/*Escuela: Instituto Politecnico Nacional - IPN
Plantel: Escuela Superior de Ingenieria Mecanica y Electrica 
Unidad: ESIME Culhuacan
Carrera: Ingenieria Mecanica
Materia: Fundamentos de Programacion
MIEMBROS DEL EQUIPO:
1. VLJM
2. VGE
3. VPI
4. VCL
5. VRDE
---------------------------------------------------------
Tema: Unidad II
Fecha: 13 - 06 - 2021
Descripcion: PROYECTO FINAL "PROGRAMA -PHYSICS X MATH 2.0-"
*/ 

//Bibliotecas
#include <bits/stdc++.h>

//Constantes
#define PI 3.14159265358979 

float escaneo(float);
float escaneo_volumen(float);
void logitud(int, int, float, float, float);

int main()
{
    float valor1, valor2, resultado, x, y, z;
    int opcion;
    int opcion_calculadora;
    do{
        printf("_______________________________________________\n"
            "BIENVENIDO AL PROGRAMA -PHYSICS X MATH v2.0-\n\n"
                "1. CALCULADORA SIMPLE\n"
                "2. CONVERSIONES FISICAS\n"
                "3. OPERACIONES CON MATRICES\n"
                "4. SALIR DEL PROGRAMA\n"
                "Seleccione la opcion que desea ejecutar: ");
        scanf("%i", &opcion);
        
        switch(opcion){
            // VASQUEZ LOPEZ JESUS MELCHISEDEC
            //CALCULADORA SIMPLE
            case 1: printf("\n___INICIANDO CALCULADORA SIMPLE___\n\n"
                            "1. SUMA    2. RESTA    3. MULTIPLICACION    4. DIVISION\n"
                            "5. POTENCIA    6. RAIZ CUADRADA    7. CALCULAR RESIDUO\n"
                            "8. SALIR DE CALCULADORA\n"
                        );
                    printf("Selecione la operacion que desea realizar: ");
                    scanf("%i", &opcion_calculadora);
                    switch(opcion_calculadora){
                        case 1: printf("\nSUMA\n"); 
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", valor1+valor2);
                        break;
                        
                        case 2: printf("\nRESTA\n");
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", valor1-valor2);
                        break;
                        
                        case 3: printf("\nMULTIPLICACION\n"); 
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", valor1*valor2);
                        break;
                        
                        case 4: printf("\nDIVISION\n"); 
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", valor1/valor2);
                        break;
                        
                        case 5: printf("\nPOTENCIA\n");
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", pow(valor1, valor2));
                        break;
                        
                        case 6: printf("\nRAIZ CUADRADA\n");
                            valor1=escaneo(x);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", sqrt(valor1));
                        break;
                        
                        case 7: printf("\nCALCULAR RESIDUO\n"); 
                            valor1=escaneo(x); valor2=escaneo(y);
                            printf("El resultado es: %f \n\n"
                                    "OPERACION FINALIZADA, VOLVIENDO AL MENU\n", fmod(valor1, valor2));
                        break;
                        case 9: printf("\nSALIR DE CALCULADORA\n"); break;
                        default: printf("\n¡LA OPCION NO ES VALIDA!\n\n"); break;
                    }
            
            break;
            //CONVERSIONES FISICAS
            case 2: printf("\n___INICIANDO CALCULADORA DE CONVERSIONES FISICAS___\n\n"
                            "1. CONVERSIONES DE AREA    2. CONVERSIONES DE MASA     3. CONVERSIONES DE VOLUMEN\n"
                            "4. CONVERSIONES DE LONGITUD    5. CONVERSIONES DE TEMPERATURA"
                        );
                    printf("\nSelecione la operacion que desea realizar: ");
                    scanf("%i", &opcion_calculadora);
                    
            switch(opcion_calculadora){
                        //Velez Gómez Emilio
                        case 1: int y; float z,h,m,l,r,v,x;
                        //CONVERSIONES DE AREA

	                    printf("\n      Las conversiones son:");
	                    printf("\n Opcion 1: de Metros cuadrados a cm^2 y Km^2");
	                    printf("\n Opcion 2: de Centimetros cuadrados a m^2 y Km^2");
	                    printf("\n Opcion 3: de Kilometros cuadrados a m^2 y cm^2");
	
	                    printf("\n\n Dame el valor que deseas convertir: ");
	                    scanf("%f",&x);
	                    printf("\n Seleccione la opcion de conversion:");
	                    scanf("%i",&y);
	
	                    z=x*10000;
	                    h=x*0.000001;
	                    m=x*0.0001;
	                    l=x*0.0000000001;
	                    r=x*100000;
	                    v=x*1000000000;
	
                        switch(y){	
	                        case 1: printf("\n El valor en cm cuadrados es igual a: %f",z);
                                    printf("\n El valor en Km cuadrado es igual a: %f \n\n"
                                            "OPERACION FINALIZADA, VOLVIENDO AL MENU\n",h);
                            break;
	                        case 2:
                                    printf("\n El valor en m cuadrados es igual a: %f",m);
                                    printf("\n El valor en Km cuadrado es igual a: %f \n\n"
                                            "OPERACION FINALIZADA, VOLVIENDO AL MENU\n",l);
                            break;
	                        case 3:
                                    printf("\n El valor en m cuadrados es igual a: %f",r);
                                    printf("\n El valor en cm cuadrado es igual a: %f \n\n"
                                            "OPERACION FINALIZADA, VOLVIENDO AL MENU\n",v);
                            break;
                            default: printf("\n Opción NO valida solo se puede cm, m y Km \n\n");
                        }
                        break;
                        
                        case 2:     //Victoriano Coello Luis
                            float masa;
                            //CONVERSIONES DE MASA
	
	                        printf ("\n\t .....::CONVERSIONES DE MASA::..... \n ");	
	                        printf ("\n\n Ingresa la cantidad de Kilogramos(Kg) a convertir: "); 
	                        scanf ("%f",&masa);

	                        printf ("\n\t 1. Hectogramo" );
	                        printf ("\n\t 2. Decagramos" );
	                        printf ("\n\t 3. Gramos" );
	                        printf ("\n\t 4. Decigramos" );
	                        printf ("\n\t 5. Centigramos" );
	                        printf ("\n\t 6. Milogramos" );	
	                        printf ("\n\t 7. Libras" );
	                        printf ("\n\t 8. Onzas" );
	                        printf ("\n\t 9. Stone" );
	                        printf ("\n\t 10.Tonelada" );
	                        printf ("\n\t 11.Onzas \n" );

	                        printf ("\n 1. La nueva medida es : %.2f Hectogramos (Hg) ",masa*10); 
	                        printf ("\n 2. La nueva medida es : %.2f Decagramos (Dg) ",masa*100 ); 
	                        printf ("\n 3. La nueva medida es : %.2f Gramos (g) ",masa*1000 ); 
	                        printf ("\n 4. La nueva medida es : %.2f Decigramos (Dg) ",masa*10000 ); 
	                        printf ("\n 5. La nueva medida es : %.2f Centigramos(Cg) ",masa*100000 ); 
                            printf ("\n 6. La nueva medida es : %.2f Miligramos (Mg) ",masa*1000000); 
                            printf ("\n 7. La nueva medida es : %.2f Libras (Lb) ",masa*2.205);
                            printf ("\n 8. La nueva medida es : %.2f Onzas (Oz) ",masa*35.274);
                            printf ("\n 9. La nueva medida es : %.2f Stone (St) ",masa*6.35);
                            printf ("\n 10.La nueva medida es : %.2f Tonelada (Tn) ",masa*0.001);
                            printf ("\n 11.La nueva medida es : %.2f Onzas (Lb) \n\n",masa*35.274);
                        break;
                        case 3: 
                            //VASQUEZ LOPEZ JESUS MELCHISEDEC
                            //CONVERSIONES DE VOLUMEN

                        int opcion_volumen;
                        float volumen;
                    do{
                        printf("\n.   .   .   .   .   .   .   .   .   .\n"
                                "\tCONVERSIONES DE VOLUMEN\n");
                        printf("1. KILOMETRO CUBICO     2. HECTOMETRO CUBICO        3. DECAMETRO CUBICO\n"
                            "4. METRO CUBICO        5. DECIMETRO CUBICO         6. CENTIMETRO CUBICO\n"
                            "7. MILIMETRO CUBICO    8. CANCELAR\n"
                            "SELECCIONE EL TIPO DE UNIDAD DE VOLUMEN DEL DATO A INGRESAR: ");
                        scanf("%i", &opcion_volumen);
                        switch(opcion_volumen){
                            case 1: printf("\nIngrese el valor del volumen: ");
                                scanf("%f", &volumen);
                
                                printf("\nSUS EQUIVALENCIAS SON:\n"
                                "EN HECTOMETRO CUBICO %f x 10^3\n"
                                "EN DECAMETRO CUBICO %f x 10^6\n"
                                "EN METRO CUBICO %f x 10^9\n"
                                "EN DECIMETRO CUBICO %f x 10^12\n"
                                "EN CENTIMETRO CUBICO %f x 10^15\n"
                                "EN MILIMETRO CUBICO %f x 10^18\n\n", volumen, volumen, volumen, volumen, volumen, volumen
                                );
                            break;
        
                            case 2: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f\n"
                            "EN DECAMETRO CUBICO %f x 10^3\n"
                            "EN METRO CUBICO %f x 10^6\n"
                            "EN DECIMETRO CUBICO %f x 10^9\n"
                            "EN CENTIMETRO CUBICO %f x 10^12\n"
                            "EN MILIMETRO CUBICO %f x 10^18\n\n", volumen*0.001, volumen, volumen, volumen, volumen, volumen
                            );
                            break;

                            case 3: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f x 10^-6\n"
                            "EN HECTOMETRO CUBICO %f\n"
                            "EN METRO CUBICO %f x 10^3\n"
                            "EN DECIMETRO CUBICO %f x 10^6\n"
                            "EN CENTIMETRO CUBICO %f x 10^9\n"
                            "EN MILIMETRO CUBICO %f x 10^12\n\n", volumen, volumen*0.001, volumen, volumen, volumen, volumen
                            );
                            break;

                            case 4: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f x 10^-9\n"
                            "EN HECTOMETRO CUBICO %f x 10^-6\n"
                            "EN DECAMETRO CUBICO %f\n"
                            "EN DECIMETRO CUBICO %f x 10^3\n"
                            "EN CENTIMETRO CUBICO %f x 10^6\n"
                            "EN MILIMETRO CUBICO %f x 10^9\n\n", volumen, volumen, volumen*0.001, volumen, volumen, volumen
                            );
                            break;

                            case 5: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f x 10^-12\n"
                            "EN HECTOMETRO CUBICO %f x 10^-9\n"
                            "EN DECAMETRO CUBICO %f x 10^-6\n"
                            "EN METRO CUBICO %f\n"
                            "EN CENTIMETRO CUBICO %f x 10^3\n"
                            "EN MILIMETRO CUBICO %f x 10^6\n\n", volumen, volumen, volumen, volumen*0.001, volumen, volumen
                            );
                            break;

                            case 6: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f x 10^-15\n"
                            "EN HECTOMETRO CUBICO %f x 10^-12\n"
                            "EN DECAMETRO CUBICO %f x 10^-9\n"
                            "EN METRO CUBICO %f x 10^-6\n"
                            "EN DECIMETRO CUBICO %f\n"
                            "EN MILIMETRO CUBICO %f x 10^3\n\n", volumen, volumen, volumen, volumen, volumen*0.001, volumen
                            );
                            break;

                            case 7: printf("\nIngrese el valor del volumen: ");
                            scanf("%f", &volumen);
                
                            printf("\nSUS EQUIVALENCIAS SON:\n"
                            "EN KILOMETRO CUBICO %f x 10^-18\n"
                            "EN HECTOMETRO CUBICO %f x 10^-15\n"
                            "EN DECAMETRO CUBICO %f x 10^-12\n"
                            "EN METRO CUBICO %f x 10^-9\n"
                            "EN DECIMETRO CUBICO %f x 10^-6\n"
                            "EN CENTIMETRO CUBICO %f\n\n", volumen, volumen, volumen, volumen, volumen, volumen*0.001
                            );
                            break;
        
                            case 8: printf("CANCELANDO OPERACION\n\n");
                            break;
        
                            default: printf("OPCION INVALIDA\n\n");
                        }
                    }
                    while(opcion_volumen!=8);
                        
                break;
                
                case 4: // CONVERSIONES DE LONGITUD
                        // Villalobos Rodriguez Dewitth Enrique
                    int p;
	                int opc ,den1 ,num1 ,den2 ,num2 ,o ,f1 ,f2;
	                float u, c;
	                int opc2;
	                float valor, q;
		
	                //Llamado de funciones
	                //prefijos_SI(p);
                    //fracciones(opc ,den1 ,num1 ,den2 ,num2 ,o ,f1 ,f2 );
                    logitud(opc, opc2, valor, q, c);
                break;
                
                case 5: //CONVERSIONES DE TEMPERATURA
                        //Valenzuela Pérez Ignacio
                    int opcion_grados;
                    float g;
                    printf("\n. .   .   .   .   :   :   :   .   .   . .\n"
                            "\tCONVERSOR DE TEMPERATURAS\n"
                            "\n1. celcius    2. kelvin   3. Fahrenheit\n"
                            "Seleccione el tipo de unidad termométrica:"
                    );
                    scanf("%i", &opcion_grados);
                    switch(opcion_grados) {
	                    case 1:
		                    printf("\ngrados celcius: ");
		                    scanf("%f", &g);
		                    printf("%f °C=%f °F\n", g, (g*1.8)+32 );
		                    printf("%f °C=%f K\n", g, g+273.15);
		                break;
	                    case 2:
		                    printf("\ngrados kelvin: ");
		                    scanf("%f", &g);
		                    printf("%f K=%f °F\n", g, ((g-273.15)*1.8)+32 );
		                    printf("%f K=%f °C\n", g, g-273.15);
		                break;
	                    case 3:
		                    printf("\ngrados Fahrenheit: ");
		                    scanf("%f", &g);
		                    printf("%f °F=%f °C\n", g, (g-32)*.5555 );
		                    printf("%f °F=%f K\n", g, ((g-32)*.5555)+273.15);
		                break;
	                    default: printf("\nopcion no valida\n");
                    }
                break;
            }
            break;
            case 3: 
                    int opcion_matriz;
                    printf("\n___________________________"
                            "\nOPERACIONES CON MATRICES"
                            "\n1. SUMA DE MATRICES      2. RESTA DE MATRICES"
                            "\n3. MATRIZ TRANSPUESTA    4. MULTIPLICACION DE MATRICES"
                            "\n\nSELECCIONE LA OPERACION A REALIZAR: ");
                    scanf("%i", &opcion_matriz);
                    switch(opcion_matriz){
                        case 1: printf("\n\tSUMA DE MATRICES\n");
                            int matriz_one[100][100]; 
	                        int matriz_two[100][100];
	                        int matriz_fin[100][100];
	                        int num_filas, num_columnas;
	
	                        printf("Ingrese numero de filas: "); scanf("%i",&num_filas);
	                        printf("Ingrese numero de columnas: "); scanf("%i",&num_columnas);
	
	                        printf("\nMatriz 1: \n");
	                        for(int i=0;i<num_filas;i++){
		                        for(int j=0;j<num_columnas;j++){
	                    		printf("Digite un numero Matriz 1[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_one[i][j]);
                        		}
                        	}
	                        printf("\nMatriz 2: \n");
	                        for(int i=0;i<num_filas;i++){
	                        	for(int j=0;j<num_columnas;j++){
	                    		printf("Digite un numero Matriz 2[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_two[i][j]);
	                        	}
                        	}
	
                        	//OPERACION
                        	for(int i=0;i<num_filas;i++){
                        		for(int j=0;j<num_columnas;j++){
                    			matriz_fin[i][j]=matriz_one[i][j]+matriz_two[i][j];
                        		}
                        	}

                        	printf("\nEl resultado es: \n");
                        	for(int i=0;i<num_filas;i++){
                           		for(int j=0;j<num_columnas;j++){
                    			    printf(" %i",matriz_fin[i][j]);
                        		}
                        		printf("\n");
                        	}
                        break;
                        
                        case 2: printf("\n\tRESTA DE MATRICES\n");
                            int matriz_u[100][100]; 
	                        int matriz_m[100][100];
	                        int matriz_end[100][100];
	                        int nx_filas, ny_columnas;
	
	                        printf("Ingrese numero de filas: "); scanf("%i",&nx_filas);
	                        printf("Ingrese numero de columnas: "); scanf("%i",&ny_columnas);
	
	                        printf("\nMatriz 1: \n");
	                        for(int i=0;i<nx_filas;i++){
		                        for(int j=0;j<ny_columnas;j++){
	                    		printf("Digite un numero Matriz 1[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_u[i][j]);
                        		}
                        	}
	                        printf("\nMatriz 2: \n");
	                        for(int i=0;i<nx_filas;i++){
	                        	for(int j=0;j<ny_columnas;j++){
	                    		printf("Digite un numero Matriz 2[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_m[i][j]);
	                        	}
                        	}
	
                        	//OPERACION
                        	for(int i=0;i<nx_filas;i++){
                        		for(int j=0;j<ny_columnas;j++){
                    			matriz_end[i][j]=matriz_u[i][j]-matriz_m[i][j];
                        		}
                        	}

                        	printf("\nEl resultado es: \n");
                        	for(int i=0;i<nx_filas;i++){
                           		for(int j=0;j<ny_columnas;j++){
                    			    printf(" %i",matriz_end[i][j]);
                        		}
                        		printf("\n");
                        	}
                        break;
                        
                        case 3: printf("\n\tMATRIZ TRANSPUESTA\n");
                                int matriz_transpuesta[100][100]; 
	                            int n_filas, n_columnas;
	
	                            printf("Ingrese numero de filas: "); scanf("%i",&n_filas);
	                            printf("Ingrese numero de columnas: "); scanf("%i",&n_columnas);
	
	                            for(int i=0;i<n_filas;i++){
		                            for(int j=0;j<n_columnas;j++){
		                            	printf("Digite un numero [%i][%i]: ", i, j);
	                               		scanf("%i",&matriz_transpuesta[i][j]);
		                            }
	                            }
	
	                            printf("\nMatriz Normal\n");
	                            for(int i=0;i<n_filas;i++){
		                            for(int j=0;j<n_columnas;j++){
			                            printf(" %i",matriz_transpuesta[i][j]);
		                        }
		                            printf("\n");
	                            }
	
	                            printf("\nMatriz Transpuesta\n");
	                            for(int i=0;i<n_filas;i++){
		                            for(int j=0;j<n_columnas;j++){
			                            printf(" %i",matriz_transpuesta[j][i]);
		                            }
		                            printf("\n");
	                            }
                        break;
                        
                        case 4: printf("\n\tMULTIPLICACION DE MATRICES\n");
                            int matriz_uno[100][100]; 
	                        int matriz_dos[100][100];
	                        int matriz_final[100][100];
	                        int nu_filas, nu_columnas;
	
	                        printf("Ingrese numero de filas: "); scanf("%i",&nu_filas);
	                        printf("Ingrese numero de columnas: "); scanf("%i",&nu_columnas);
	
	                        printf("\nMatriz 1: \n");
	                        for(int i=0;i<nu_filas;i++){
		                        for(int j=0;j<nu_columnas;j++){
	                    		printf("Digite un numero Matriz 1[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_uno[i][j]);
                        		}
                        	}
	                        printf("\nMatriz 2: \n");
	                        for(int i=0;i<nu_filas;i++){
	                        	for(int j=0;j<nu_columnas;j++){
	                    		printf("Digite un numero Matriz 2[%i][%i]: ", i, j);
	                    		scanf("%i",&matriz_dos[i][j]);
	                        	}
                        	}
	
                        	//OPERACION
                        	for(int i=0;i<nu_filas;i++){
                        		for(int j=0;j<nu_columnas;j++){
                    			matriz_final[i][j]=matriz_uno[i][j]*matriz_dos[i][j];
                        		}
                        	}

                        	printf("\nEl resultado es: \n");
                        	for(int i=0;i<nu_filas;i++){
                           		for(int j=0;j<nu_columnas;j++){
                    			    printf(" %i",matriz_final[i][j]);
                        		}
                        		printf("\n");
                        	}
                        break;
                        /*
                        case 5: printf("\n\tS \n");
                            
                        break;
                        */
                        default: printf("\nOPCION NO VALIDA");
                    }
            
            break;
            case 4: printf("\nSALIENDO DEL PROGRAMA\n"); break;
            
            default: printf("\n¡LA OPCION NO ES VALIDA!\n\n"); break;
        }
    }
    while(opcion != 4);
    
    return 0;
}
//INGRESO DE DATOS CALCULADORA
float escaneo(float a){
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    return a;
}
void fracciones(int opc, float den1, float num1, float den2, float num2, float o, float f1, float f2){
	
	
	printf("\n Fracción 1");
	printf("\n Numerador 1: ");
	scanf("%f", &num1);
	printf("\n Denominador 1: ");
	scanf("%f", &den1);
	printf("\n Fracción 2");
	printf("\n Numerador 2: ");
	scanf("%f", &num2);
	printf("\n Denominador 2: ");
	scanf("%f", &den2);
	
    printf("\n :.Fracciones.:");
    printf("\n 1) Suma");
    printf("\n 2) Resta");
    printf("\n 3) Multiplicación");
    printf("\n 4) Divición");
    printf("\n");
	
	printf("\n Que fraccion deseas: ");
	scanf("%i", &opc);
	switch(opc){
		case 1:
			
			f1= num1/den1;
			f2= num2/den2;
			o= (num1/den1)+(num2/den2);
			printf("%f + %f = %f", f1, f2, o);
			printf("\n");
			
		break;
		case 2:
		
		    f1= num1/den1;
			f2= num2/den2;
			o= (num1/den1)-(num2/den2);
			printf("%f - %f = %f", f1, f2, o);
			printf("\n");
		
		break;
		case 3:
		
		    f1= num1/den1;
			f2= num2/den2;
			o= (num1/den1)*(num2/den2);
			printf("%f x %f = %f", f1, f2, o);
			printf("\n");
		
		break;
		case 4:
		
		    f1= num1/den1;
			f2= num2/den2;
			o= (num1/den1)/(num2/den2);
			printf("%f / %f = %f", f1, f2, o);
			printf("\n");
		
		break;
		default :
			printf("\n Error de operación ");
	}
	
}

void prefijos_SI(int p){
	
	printf("\n :.Prefijos de unidades del SI.:");
	
	printf("\n 1.-exa");
	printf("\n 2.-peta");
	printf("\n 3.-tera");
	printf("\n 4.-giga");
	printf("\n 5.-mega");
	printf("\n 6.-kilo");
	printf("\n 7.-mili");
	printf("\n 8.-micro");
	printf("\n 9.-nano");
	printf("\n 10.-pico");
	printf("\n 11.-femto");
	printf("\n 12.-atto");
	printf("\n");
	printf("\n Elije un prefijo: ");
	scanf("%i", &p);
	
	if(p==1){
		printf("\n exa:");
		printf("\n 10^18= 1 000 000 000 000 000 000");
	}else if(p==2){
		printf("\n peta:");
		printf("\n 10^15= 1 000 000 000 000 000");
	}else if(p==3){
		printf("\n tera:");
		printf("\n 10^12= 1 000 000 000 000");
	}else if(p==4){
		printf("\n giga:");
		printf("\n 10^9= 1 000 000 000");
	}else if(p==5){
		printf("\n mega:");
		printf("\n 10^6= 1 000 000");
	}else if(p==6){
		printf("\n kilo:");
		printf("\n 10^3= 1 000");
	}else if(p==7){
		printf("\n mili:");
		printf("\n 10^-3= 0.001");
	}else if(p==8){
		printf("\n micro:");
		printf("\n 10^-6= 0.000 001");
	}else if(p==9){
		printf("\n nano:");
		printf("\n 10^-9= 0.000 000 001");
	}else if(p==10){
		printf("\n pico:");
		printf("\n 10^-12= 0.000 000 000 001");
	}else if(p==11){
		printf("\n femto:");
		printf("\n 10^-15= 0.000 000 000 000 001");
	}else if(p==12){
		printf("\n atto:");
		printf("\n 10^-18= 0.000 000 000 000 000 001");
	}else 
	    printf("\n Opción no encontrada");
}

void logitud(int opc, int opc2, float valor, float q, float c){

	
	printf("\n Ingreasa un valor: ");
	scanf("%f", &valor);
	
	printf("\n *****Menú 1*****");
	printf("\n 1.-Metros (m)");
	printf("\n 2.-Pies (ft)");
	printf("\n 3.-Yardas (yd)");
	printf("\n 4.-Millas (mile)");
	printf("\n 5.-Millas marinas");
	printf("\n");
	printf("\n Selecciona unidad: ");
	scanf("%i", &opc);
	printf("\n");
	
	if(opc==1){
		q=valor;
		printf("%.4f m", q);
		printf("\n");
	}else if(opc==2){
		q= valor*(0.3048);
		printf("%.4f m", q);
		printf("\n");
	}else if(opc==3){
		q=valor*(0.9144);
		printf("%.4f m", q);
		printf("\n");
	}else if(opc==4){
		q=valor*(1609.34);
		printf("%.4f m", q);
		printf("\n");
    }else if(opc==5){
    	q=valor*(1852);
    	printf("%.4f m", q);
    	printf("\n");
	}else
	    printf("\n Unidad no valida");
	    printf("\n");
	    
	bool bandera= true;
	
		do{
		
	printf("\n *****Menú 2*****");
	printf("\n 1.-Metros (m)");
	printf("\n 2.-Pies (ft)");
	printf("\n 3.-Yardas (yd)");
	printf("\n 4.-Millas (mile)");
	printf("\n 5.-Millas marinas");
	printf("\n 6.-Salir");
	printf("\n");
	printf("\n Convertir a: ");
	scanf("%i", &opc2);
	
	switch (opc2){
		case 1:
			c=q*1;
			printf("\n %.4f m", c);
			printf("\n");
		break;
		case 2:
			c= q*(1/(0.3048));
			printf("\n %.4f ft", c);
			printf("\n");
		break;
		case 3:
			c= q*(1/(0.9144));
			printf("\n %.4f yd", c);
			printf("\n");
		break;
		case 4:
			c= q*(1/(1609.34));
			printf("\n %.4f mile", c);
			printf("\n");
		break;
		case 5:
			c= q*pow(1852,-1);
			printf("\n %.4f millas marinas", c);
			printf("\n");
		break;
		case 6:
			printf("\n Saliste del canversor");
			bandera= false;
			printf("\n");
		break;
		default :
			printf("\n Opcion no valida");
			printf("\n");
   	}
		    	
	}while (bandera);
	
}
