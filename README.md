# Atividades AlgoritmosII

Algumas atividades de Algoritmo II

* Para rodar no Windows, baixar o `MinGW`. <br>
* No terminal do MSYS2 (após instalar), execute: <br>
`pacman -Syu` e `pacman -S mingw-w64-ucrt-x86_64-gcc` <br>
* Atualize as Variáveis de Amiente, ou seja, irá colocar o caminho onde tem o caminho do g++, como, por exemplo, `C:\msys64\ucrt64\bin` <br>
* E teste a instalação com `g++ --version` <br>
* Após instalar corretamente o programa acima citado, digite no terminal: <br>
`g++ nome_do_programa.cpp -o nome_do_executavel_desejavel`<br>
* E digite: <br>
`./nome_do_executavel_desejavel` <br>

# Para rodar com o Makefile

* Primeiro digite no terminal: <br>
`make run` <br>
* Depois digite: <br>
`make run2` <br>
* Também poderá compilar/rodar da seguinte maneira: Também poderá compilar/rodar da seguinte maneira: <br>
`make run && make run2` <br>

# Para limpar os arquivos gerados

* Para limpar os arquivos gerados, só rodar: <br>
`make clear` <br>