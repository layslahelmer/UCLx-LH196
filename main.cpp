#include <iostream>
char thekeyboard[8][5] = {
    "abc ",//0
    "def ",//1
    "ghi ",//2
    "jkl ",//3
    "mno ",//4
    "pqrs",//5
    "tuv ",//6
    "wxyz"//7
};

char tmp[5];
int numchar, key, tn;

bool checklay(char chk[5])
{
    bool a, b, c, d;
    a = (tmp[0] != '#') || (tmp[2] != '=');
    b = ((int)tmp[1] - 48 > 9) || ((int)tmp[1] - 48 < 2);
    c = ((int)tmp[3] - 48 > 4) || ((int)tmp[3] - 48 < 1);
    d = a||b||c;
    return d;
}

int main(){
for (int a = 0; a < 8; a++){thekeyboard[a][4] = '\0';}

tmp[0] = '0';
tmp[1] = '0';
tmp[2] = '0';
tmp[3] = '0';
tmp[4] = '\0';

std::cout << "A tabela abaixo mostra as telcas que devem ser pressionadas e o valor de N para cada letra:"<< std::endl
<< "N|     tecla     " << std::endl
<< " |2 3 4 5 6 7 8 9" << std::endl
<< "1|a d g j m p t w" << std::endl
<< "2|b e h k n q u x" << std::endl
<< "3|c f i l o r v y" << std::endl
<< "4|          s   z" << std::endl;

std::cout << "Digite o número de caracteres da palavra: ";
std::cin >> numchar;
std::cout << std::endl;

char word[numchar+1];
int keys[numchar][2];

for (int a = 0; a < numchar; a++){
    do{
        std::cout << "Letra " << a+1 << ": Digite #tecla=N: ";
        std::cin >> tmp;
	std::cout << std::endl;
    }while (checklay(tmp));
    keys[a][0] = (int)tmp[1] - 48 - 2;
    keys[a][1] = (int)tmp[3] - 48 - 1;
    
    for (int b = 0; b < 4; b++){tmp[b] = '0';}
}

for (int a = 0; a < numchar; a++){
    key = keys[a][0];
    tn = keys[a][1];
    word[a] = thekeyboard[key][tn];
}
word[numchar] = '\0';

std::cout << word << std::endl;
return 0;
}
