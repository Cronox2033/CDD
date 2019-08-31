# CDD---Newton-Raphson
Realización del método de Newton Raphson para la asignatura comunicación de datos, en la Universidad Tecnologica Metropolitana (Utem) solicitado por el profesor Sebastián Salazar Molina.
El método de Newton Rapshon es un algoritmo para encontrar aproximaciones de los ceros o raíces de una función real. Al utilizar el este método se encontrara una y solo una raiz o cero de dicho polinomio.

## Pre-requisitos :clipboard:
Requirement  | Version
------------- | -------------
[Ubuntu](https://ubuntu.com/download/desktop)    |  18.04 LTS
[C++](https://isocpp.org/)       |  std = 11 

## Como usarlo
Una vez cumplidos los pre-requisitos y despues de descargarlo o clonarlo con git (`git clone https://github.com/Jordan-pc/CDD---Newton-Raphson.git`)

Se requiere compilar con el siguiente comando: `g++ -std=c++11 Programa.cpp -o Programa`

Despues se puede ejecutar con de la siguiente forma `./Programa "argumento"`

El argumento debera ser un polinomio, ejemplo: `./Programa "10X**2 - 5"`

El formato recomendado para ingresar el polinomio es el siguiente: `"10X**5 - 5X**2 + 2X**1 + 2X**0"`

Tambien se admiten formatos como: `"10x**2 - 5" o "10x + 3" en vez de "10X**2 - 5X**0" o "10X**1 + 3X**2"` respectivamente.

Dado que un polinomio se define como: Expresión algebraica que constituye la suma o la resta ordenadas de un número finito de términos o monomios [[Fuente](https://www.google.com/search?client=ubuntu&hs=xxX&channel=fs&q=Diccionario&stick=H4sIAAAAAAAAAONQesSoyi3w8sc9YSmZSWtOXmMU4-LzL0jNc8lMLsnMz0ssqrRiUWJKLeZZxMoNFEsGi2XmAwCSYWV3OAAAAA&zx=1567204408956#dobs=polinomio)].

Se asume que el polinomio se ingresará ordenado como los ejemplos anteriores, en caso de ingresarlo desordenado es necesario ingresarlo en el formato recomendado, ningun otro formato sirve.

Ejemplo: `"2X**0 + 2X**1 - 5X**2 + 10X**5"` es el formato correcto de ingresarlo desordenado, los demás formatos no son utiles en caso de ingresarlo desordenado.
