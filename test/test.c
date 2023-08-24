#include <criterion/criterion.h> // Inclui a biblioteca Criterion

// Função para verificar se um valor está dentro do intervalo razoável
int reasonable_values(float value){
    if(value > 8.0 && value < 35.0){
        return 1; // Retorna 1 se o valor estiver dentro do intervalo
    } else{
        return 0; // Retorna 0 se o valor estiver fora do intervalo
    }  
}

// Teste para verificar a função reasonable_values
Test(suite_name, test_name){
    // Verifica se a função retorna 1 quando o valor 28.0 é passado
    cr_assert(reasonable_values(28.0) == 1);
    // Aqui podemos adicionar mais verificações de casos de teste:
    cr_assert(reasonable_values(5.0) == 0);
    cr_assert(reasonable_values(40.0) == 0);
}