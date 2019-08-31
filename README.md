# CDD---Newton-Raphson
[![All Contributors](https://img.shields.io/badge/all_contributors-2-orange.svg?style=flat-square)](#contributors)

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

## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore -->
<table>
  <tr>
    <td align="center"><a href="https://github.com/Treik"><img src="https://avatars1.githubusercontent.com/u/39205061?v=4" width="100px;" alt="Treik"/><br /><sub><b>Treik</b></sub></a><br /><a href="#test-Treik" title="Tester">⚠️</a> <a href="https://github.com/Jordan-pc/CDD---Newton-Raphson/commits?author=Treik" title="Design">🎨</a></td>
    <td align="center"><a href="https://github.com/LucoQlo"><img src="https://avatars3.githubusercontent.com/u/38839285?v=4" width="100px;" alt="LucoQlo"/><br /><sub><b>LucoQlo</b></sub></a><br /><a href="#ideas-LucoQlo" title="Ideas, Planning, & Feedback">🤔</a> <a href="https://github.com/Jordan-pc/CDD---Newton-Raphson/commits?author=LucoQlo" title="Code"></a></td>
  </tr>
</table>

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://github.com/all-contributors/all-contributors) specification. Contributions of any kind welcome!
