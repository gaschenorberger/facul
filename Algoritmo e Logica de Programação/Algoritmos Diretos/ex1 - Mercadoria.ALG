Algoritmo "Exerc�cio 1"
Var
      mercadoria: caracter
      preco: real
      quantidade: inteiro
      vlTotal: real
Inicio
      escreval("O que voc� comprou?")
      leia(mercadoria)

      escreval("Quanto � esse produto?")
      leia(preco)

      escreval("Quantos voc� comprou?")
      leia(quantidade)

      vlTotal <- 0
      vlTotal <- preco*quantidade

      escreva("Voc� ir� pagar R$",vlTotal, " pelo produto ",mercadoria)
Fimalgoritmo
