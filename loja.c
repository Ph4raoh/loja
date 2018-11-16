#include<stdio.h>

int main(){

    int escolha;


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