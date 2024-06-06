#include <stdio.h> 

struct Data { 
    int dia, mes, ano; 
};  typedef struct Data data; 

data adicionarDias(data datas, int dias_para_adicionar){ 
    datas.dia += dias_para_adicionar;
    while (datas.dia>30)
    {
        datas.dia -= 30;
        datas.mes++;
        
    }
    

}

int main() { 
    data datas = {25,12,2023};
    int adicionar_dias = 10;
    data novaData = adicionarDias(datas, adicionar_dias);


    return 0; 
}