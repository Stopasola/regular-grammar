# regular-grammar

Deve-se implementar um simulador de gramáticas regulares, que receba a especificação
formal da gramática e uma sequência de cadeias e verifique se as cadeias podem ser
geradas pela gramática.
Entrada:
A primeira linha da entrada conterá o conjunto N dos símbolos não-terminais, o qual
deverá consistir apenas de letras maiúsculas (A a Z).
A segunda linha conterá o alfabeto �, o qual deverá ser constituído apenas de dígitos (0
a 9), letras minúsculas (a até z) e sublinhado ( _ ). 2
A terceira linha conterá o símbolo inicial da gramática.
A quarta linha conterá um inteiro P (1 ≤ P ≤ |N| x |�|) indicando o número de produções
da gramática.
As próximas P linhas conterão as produções, na forma “ Ni -> SkNj”, Ni, Nj ∈ N, Sk ∈ �.
A linha seguinte conterá um inteiro C (1 ≤ C ≤ 100) que indica o número de cadeias a
serem verificadas. 
As C linhas seguintes contém as cadeias a serem verificadas. As cadeias estarão entre
dois símbolos “@“. Uma cadeia vazia será indicada por dois símbolos “@“ seguidos.
Saída:
Para cada cadeia a ser verificada, o simulador deve simular a gramática e então escrever
duas linhas de saída.
A primeira linha deve conter a cadeia testada e a segunda linha deve conter a resposta
do simulador: “S” se a cadeia puder ser gerada pela gramática, ou “N” se a cadeia não
puder ser gerada pela gramática. 

Neste problema o símbolo “λ” que representa o vazio nas produções será substituído pelo 2
símbolo “#”

Exemplo:
Entrada 
SA
01
S
5
S -> #
S -> 0S
S -> 1A
A -> #
A -> 1A
10
@@
@0@
@1@
@00@
@01@
@10@
@11@
@000@
@001@
@010@

Saída
@@
S
@0@
S
@1@
S
@00@
S
@01@
S
@10@
N
@11@
S
@000@
S
@001@
S
@010@
N
