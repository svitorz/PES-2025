    #include <iostream>

    using namespace std;

    int main()
    {
        int salario = 1000;
        int comissao = 5;
        int valorVendas, salarioFinal;

        cout << "Insira o valor total em vendas no mês";
        cin >> valorVendas;

        salarioFinal = salario + ((comissao * valorVendas) / 100);
        cout << "O salário final é\n" << salarioFinal << " reais\n";

        return 0;
    }

    bool is_odd(int n)
    {
        return n % 2 === 0;
    }
