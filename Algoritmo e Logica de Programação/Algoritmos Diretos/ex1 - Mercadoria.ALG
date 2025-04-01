Algoritmo "Exercício 1"
Var
      mercadoria: caracter
      preco: real
      quantidade: inteiro
      vlTotal: real
Inicio
      escreval("O que você comprou?")
      leia(mercadoria)

      escreval("Quanto é esse produto?")
      leia(preco)

      escreval("Quantos você comprou?")
      leia(quantidade)

      vlTotal <- 0
      vlTotal <- preco*quantidade

      escreva("Você irá pagar R$",vlTotal, " pelo produto ",mercadoria)
Fimalgoritmo
