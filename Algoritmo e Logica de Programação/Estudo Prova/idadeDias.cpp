#include <stdio.h>
#include <time.h>

int main() {
    int diaNasc, mesNasc, anoNasc;
    struct tm dataNasc = {0};
    time_t hoje;
    double segundos;
    int dias;

    // Entrada da data de nascimento
    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    // Configura a data de nascimento
    dataNasc.tm_mday = diaNasc;
    dataNasc.tm_mon = mesNasc - 1;  // meses em C vão de 0 a 11
    dataNasc.tm_year = anoNasc - 1900;  // anos desde 1900

    // Pega a data atual
    hoje = time(NULL);

    // Calcula a diferença em segundos
    segundos = difftime(hoje, mktime(&dataNasc));

    // Converte para dias
    dias = (int)(segundos / (60 * 60 * 24));

    // Exibe resultado
    printf("Você viveu aproximadamente %d dias.\n", dias);

    return 0;
}
