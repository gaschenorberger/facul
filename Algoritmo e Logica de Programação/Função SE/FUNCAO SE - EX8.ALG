Algoritmo "FUNCAO SE - EX8"

Var
   vlTotal: real
   opcPag: inteiro
   vlFinal: real
Inicio
      escreval("Qual foi o valor total da compra?")
      leia(vlTotal)

      escreval("(Digite apenas o numero) Qual sera a opcao de pagamento?")
      escreval("1- A vista | 2- 30 dias direto | 3- 60 dias direto | 4- 90 dias direto")
      leia(opcPag)

      se (opcPag = 1) entao
         vlFinal <- vlTotal * 0.9
         escreval("O preco final sera: ",vlFinal)
      senao
           se (opcPag = 2) entao
              vlFinal <- vlTotal * 0.95
              escreval("O preco final sera: ", vlFinal)
           senao
                se (opcPag = 3) entao
                   escreval("O preco final sera: ", vlTotal)
                senao
                     vlFinal <- vlTotal * 1.05
                     escreval("O preco final sera: ", vlFinal)
                fimse
           fimse
      fimse

Fimalgoritmo
