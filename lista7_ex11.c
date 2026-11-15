  /*
Marcos Henrique Alves
08.11.2026
*/
  #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    typedef struct{
        char nome[60];
        int idade;
        float salario;
    }Tfuncionario;

    int main(){
        Tfuncionario *funcionario;
        Tfuncionario *aux;
        int qtdIncial, qtdCadastrada = 0, i = 0;
        float SalarioTotal = 0;
        printf("Digite a quantidade de funcionarios a serem cadastrados: \n");
        scanf("%d", &qtdIncial);
        funcionario = malloc(qtdIncial * sizeof(Tfuncionario));
            if(!funcionario){
                printf("Erro, memoria nao alocada!\n");
                return 1;
            }

            
        while(1){
            if(i == qtdIncial){
                aux = funcionario;
                int novaCapacidade = qtdIncial*2;
                aux = realloc(funcionario, novaCapacidade * sizeof(*aux));
                if(!aux){
                    printf("Erro ao realocar memoria!\n");
                    free(funcionario);
                    return 1;
                }
                funcionario = aux;
                qtdIncial = novaCapacidade;
            }
            printf("Digite o nome do funcionario %d: \n", i+1);
            scanf(" %59[^\n]", funcionario[i].nome);
            if(strcmp(funcionario[i].nome, "0") == 0){
                break;
            }
            printf("Digite a idade do funcionario %d: \n", i+1);
            scanf("%d", &funcionario[i].idade);
            printf("Digite o salario do funcionario %d: \n", i+1);
            scanf("%f", &funcionario[i].salario);
            SalarioTotal+=funcionario[i].salario;
            i++;
            qtdCadastrada++;
        }
        printf("----------------------------------\n");
        for(i = 0; i < qtdCadastrada; i++){
            printf("%s  R$ %.2f\n", funcionario[i].nome, funcionario[i].salario);
        }
        printf("----------------------------------\n");
        printf("Total:  %.2f\n", SalarioTotal);
        free(funcionario);

    }