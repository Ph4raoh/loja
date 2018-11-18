#include<stdio.h>

int main(){


    struct produto{

    char nome[30];
    char marca[50];
    float preco;
    int quantidade;

};

struct produto p;

    int escolha;

    FILE *estoque;

    estoque = fopen("estoque.txt", "w");

     system("clear");



puts("╔═╗┌─┐┌┐┌┌┬┐┬─┐┌─┐┬  ┌─┐  ┌┬┐┌─┐  ╔═╗┌─┐┌┬┐┌─┐┌─┐ ┬ ┬┌─┐");
puts("║  │ ││││ │ ├┬┘│ ││  ├┤    ││├┤   ║╣ └─┐ │ │ ││─┼┐│ │├┤ ");
puts("╚═╝└─┘┘└┘ ┴ ┴└─└─┘┴─┘└─┘  ─┴┘└─┘  ╚═╝└─┘ ┴ └─┘└─┘└└─┘└─┘");
                                                        
                                                      
puts("\n");

  puts("[1] - Cadastro de produtos\n");
  puts("[2] - Compras de produtos\n");
  puts("[3] - Vendas de produtos\n");

   scanf("%d",&escolha);


   switch (escolha){


       /***********************************************************/
    
    case 1:

    system("clear");

    int escolha1;

puts("╔═╗┌─┐┌┬┐┌─┐┌─┐┌┬┐┬─┐┌─┐  ┌┬┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┬ ┬┌┬┐┌─┐┌─┐");
puts("║  ├─┤ ││├─┤└─┐ │ ├┬┘│ │   ││├┤   ├─┘├┬┘│ │ │││ │ │ │ │└─┐");
puts("╚═╝┴ ┴─┴┘┴ ┴└─┘ ┴ ┴└─└─┘  ─┴┘└─┘  ┴  ┴└─└─┘─┴┘└─┘ ┴ └─┘└─┘");
    
puts("\n");

    puts("[1] - Realizar cadastro\n");
    puts("[2] - Exibir cadastros\n");
    puts("[3] - Atualizar cadastro\n");
    puts("[4] - Salvar cadastro\n");
    puts("[5] - Excluir cadastro\n");

    puts("Escolha:");
    scanf("%d",&escolha1);



    switch (escolha1){

        case 1:
        system("clear");
        puts("Nome:");
        scanf("%s",p.nome);
        fprintf(estoque, " Nome: %s | ", p.nome);

        puts("Marca:");
        scanf("%s",p.marca);
        fprintf(estoque, "Marca: %s | ", p.marca);

        puts("preço:");
        scanf("%f",&p.preco);
        fprintf(estoque, "Preço: %0.2f | ", p.preco);

        puts("Quantidade:");
        scanf("%d",&p.quantidade);
        fprintf(estoque, "Quantidade: %d", p.quantidade);
        
  
        fclose(estoque);


        break;


         case 2:

         estoque = fopen("estoque.txt", "r");

         while(fgets(p.nome, 30, estoque) != NULL)
         printf("%s", p.nome);
  
         fclose(estoque);
       
         break;


        

    }
      
    

    
    break;

    /***********************************************************/

    case 2:

    system("clear");

    int escolha2;

puts("╔═╗┌─┐┌┬┐┌─┐┬─┐┌─┐┌─┐  ┌┬┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┬ ┬┌┬┐┌─┐┌─┐");
puts("║  │ ││││├─┘├┬┘├─┤└─┐   ││├┤   ├─┘├┬┘│ │ │││ │ │ │ │└─┐");
puts("╚═╝└─┘┴ ┴┴  ┴└─┴ ┴└─┘  ─┴┘└─┘  ┴  ┴└─└─┘─┴┘└─┘ ┴ └─┘└─┘");
    
puts("\n");

    puts("[1] - Realizar compra\n");
    puts("[2] - Ver histórico de compras\n");

    puts("Escolha:");
    scanf("%d",&escolha2);
    
    break;

    /***********************************************************/

    case 3:

    system("clear");

    int escolha3;

puts("╦  ╦┌─┐┌┐┌┌┬┐┌─┐┌─┐  ┌┬┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┬ ┬┌┬┐┌─┐┌─┐");
puts("╚╗╔╝├┤ │││ ││├─┤└─┐   ││├┤   ├─┘├┬┘│ │ │││ │ │ │ │└─┐");
puts(" ╚╝ └─┘┘└┘─┴┘┴ ┴└─┘  ─┴┘└─┘  ┴  ┴└─└─┘─┴┘└─┘ ┴ └─┘└─┘");

puts("\n");
    
    puts("[1] - Realizar venda\n");
    puts("[2] - Ver histórico de compras\n");

    puts("Escolha:");
    scanf("%d",&escolha3);
    
    break;

    /***********************************************************/
   

   }

   

    return 0;
}