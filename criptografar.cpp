#include <iostream>

struct dados
{
    std::string escreva, juntar_letras;

    char letra_para_num;

    short num_para_letra, tamanho;
    
          
    void criptografar()
    {
        std::cout << "escreva: ";
        std::cin >> escreva;

        tamanho = escreva.size();

        for(short cont = 0; cont <= tamanho; cont++)
        {
            num_para_letra = escreva[cont] + 3;

            letra_para_num = num_para_letra;

            juntar_letras +=letra_para_num;
        }

        std::cout << "\n\n" << juntar_letras;

    }

    void descriptografar()
    {   
        juntar_letras.clear();

        std::cout << "\n\ncoloque aqui para descriptografar: ";
        std::cin >> escreva;

        tamanho = escreva.size();

        for (short cont = 0; cont <= tamanho; cont++)
        {
            num_para_letra = escreva[cont] - 3;

            letra_para_num = num_para_letra;

            juntar_letras +=letra_para_num;          
        }

        std::cout << "\n\n" << juntar_letras << "\n\n";
    }

};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    while (true)
    {
        char escolha;

        std::cout << "\n\nescolha qual opção [digite(c)-criptografar]-----[digite(d)-descriptografar]----[digite(s)sair]: ";
        std::cin >> escolha;
        
        dados acessar;

        if (escolha == 'c')
        {
            acessar.criptografar();
        }

        if (escolha == 'd')
        {
            acessar.descriptografar();
        }

        if (escolha == 's')
        {
            break;
        }

    }

    return 0;
}

