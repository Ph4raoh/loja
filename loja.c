#include<stdio.h>

int main(){

    int con = 1;

    while(con = 1){


    struct produto{

    char nome[30];
    char marca[50];
    float preco;
    int quantidade;

};

struct produto p;

    int escolha;

    int escolha2;

    int x = 1;
    int z,q,r;

    FILE *estoque;

    estoque = fopen("estoque.txt", "a");

     system("clear");


puts("╔═╗┌─┐┌┐┌┌┬┐┬─┐┌─┐┬  ┌─┐  ┌┬┐┌─┐  ╔═╗┌─┐┌┬┐┌─┐┌─┐ ┬ ┬┌─┐");
puts("║  │ ││││ │ ├┬┘│ ││  ├┤    ││├┤   ║╣ └─┐ │ │ ││─┼┐│ │├┤ ");
puts("╚═╝└─┘┘└┘ ┴ ┴└─└─┘┴─┘└─┘  ─┴┘└─┘  ╚═╝└─┘ ┴ └─┘└─┘└└─┘└─┘");
                                                        
                                                      
puts("\n");

  puts("[1] - Cadastro de produtos\n");
  puts("[2] - Compras de produtos\n");
  puts("[3] - Vendas de produtos\n");


   puts("Escolha:");
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

        
        while(x != 0){

fprintf(estoque,"=========================================================================\n");
            
        system("clear");
        puts("Nome:");
        scanf("%s",p.nome);
        puts("");
        fprintf(estoque, "Nome: %s | ",p.nome);

        puts("Marca:");
        scanf("%s",p.marca);
        puts("");
        fprintf(estoque, "Marca: %s | ", p.marca);

        puts("preço:");
        scanf("%f",&p.preco);
        puts("");
        fprintf(estoque, "Preço: %0.2f | ", p.preco);

        puts("Quantidade:");
        scanf("%d",&p.quantidade);
        fprintf(estoque, "Quantidade: %d\n", p.quantidade);

         

        puts("");

         puts("Cadastrar mais? 1 = Sim || 2 = Não");

        scanf("%d",&escolha2);

        if(escolha2 == 1){
        x++;
        }
        if(escolha2 == 2){
            x = 0;
        }

        }
        
        fclose(estoque);

        break;


         case 2:

         system("clear");

         estoque = fopen("estoque.txt", "r");
        
         while(fgets(p.nome, 30, estoque) != NULL)
         printf("%s", p.nome);

         fclose(estoque);

        puts("\nPrecione 1 para voltar ao menu...");

        scanf("%d",&x);

        if(x == 0){
            break;
        }

         
         break;
     
        case 3:
         
         system("clear");
         
        puts("\nEm construção...");

        puts("\nPrecione 1 para voltar ao menu...");

        scanf("%d",&z);

        if(z == 0){
            break;
        }
        break;

         case 4:

         system("clear");

         estoque = fopen("estoque.txt", "a");

         fclose(estoque);

         puts("\nSalvo com sucesso!");

         puts("\nPrecione 1 para voltar ao menu...");

        scanf("%d",&q);

        if(q == 0){
            break;
        }
       
         break;

          case 5:

         system("clear");

         estoque = fopen("estoque.txt", "w");
  
         fclose(estoque);

         puts("\nApagado com sucesso!");

         puts("\nPrecione 1 para voltar ao menu...");

        scanf("%d",&r);

        if(r == 0){
            break;
        }
       
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

}
   

    return 0;
}