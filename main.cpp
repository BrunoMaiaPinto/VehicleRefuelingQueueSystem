#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	// estrutura
	struct Viatura
	{
		string matricula;
		double quantCombustivel, totalPagar;
	};

	queue<Viatura> viaturas;
	vector<Viatura> historico;

	// variáveis
	int opcao;

	do
	{
		system("cls"); // somente windows
		cout << "MENU =========" << endl;
		cout << "1 -> Entrada de Viatura" << endl;
		cout << "2 -> Visualizar Viaturas Abastecidas" << endl;
		cout << "3 -> Abastecer Proxima" << endl;
		cout << "0 -> Sair" << endl
				 << endl;
		cout << "Digite uma opcao: ";
		cin >> opcao;

		// ver qual a opcao digitada
		if (opcao == 0)
		{
			exit(0);
		}
		else if (opcao == 1)
		{
			// registar entrada
			system("cls");
			cout << "Registar Entrada =====" << endl;

			Viatura v;
			cout << "Digite a matricula: ";
			cin >> v.matricula;
			viaturas.push(v);
		}
		else if (opcao == 2)
		{
			// ver viaturas abastecidas
			system("cls");
			cout << "Viaturas Abastecidas ===" << endl;

			for (int i = 0; i < historico.size(); i++)
			{
				Viatura v = historico.at(i);
				cout << "Matricula: " << v.matricula << endl;
				cout << "Deposito: " << v.quantCombustivel << endl;
				cout << "Totala Pagar: " << v.totalPagar << endl
						 << endl;
			}
		}
		else if (opcao == 3)
		{
			// abastecer próxima
			system("cls");
			cout << "Abastecer Viatura ====" << endl;

			if (!viaturas.size())
			{
				cout << "Sem viaturas para abastecer!";
			}
			else
			{
				Viatura v;
				cout << "Matricula: " << viaturas.front().matricula << endl;
				v.matricula = viaturas.front().matricula;
				cout << "Digite Litros a Abastecer: ";
				cin >> v.quantCombustivel;
				v.totalPagar = v.quantCombustivel * 1.78;
				historico.push_back(v);
				viaturas.pop();
			}
		}
		else
		{
			cout << "Opcao Invalida!" << endl;
		}

		// aguarda um tecla
		cout << endl
				 << endl;
		system("pause"); // somente windows

	} while (opcao != 0);

	return 0;
}