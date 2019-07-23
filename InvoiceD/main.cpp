#include "InvoiceD.h"
#include <iostream>

using namespace std;

int main()
{
    InvoiceD test1 = InvoiceD(500, 2, 20.50, "Cabo usb");
    InvoiceD test2 = InvoiceD(120, 4, 49.9, "Fone JBL t110");
    InvoiceD test3 = InvoiceD(169, -4, -49.9, "item test invalido");

    cout<<"Numero do item2: "<<test1.getNumItem() <<" Quantidade: "<<test1.getQtdItem() <<" Valor R$"<<test1.getPrecoItem() <<" Descricao: "<<test1.getDescItem()<<endl;
    cout<<"Numero do item2: "<<test2.getNumItem() <<" Quantidade: "<<test2.getQtdItem() <<" Valor R$"<<test2.getPrecoItem() <<" Descricao: "<<test2.getDescItem()<<endl;
    cout<<"Numero do item3: "<<test3.getNumItem() <<" Quantidade: "<<test3.getQtdItem() <<" Valor R$"<<test3.getPrecoItem() <<" Descricao: "<<test3.getDescItem()<<endl;

    test1.setDescItem("Mouse pad fortrek red.");
    test1.setQtdItem(3);

    cout<<"Numero do item1: "<<test1.getNumItem() <<" Quantidade: "<<test1.getQtdItem() <<" Valor R$"<<test1.getPrecoItem() <<" Descricao: "<<test1.getDescItem()<<endl;
    cout<<"Numero do item2: "<<test2.getNumItem() <<" Quantidade: "<<test2.getQtdItem() <<" Valor R$"<<test2.getPrecoItem() <<" Descricao: "<<test2.getDescItem()<<endl;
    cout<<"Numero do item3: "<<test3.getNumItem() <<" Quantidade: "<<test3.getQtdItem() <<" Valor R$"<<test3.getPrecoItem() <<" Descricao: "<<test3.getDescItem()<<endl;

    cout<<"Valor total test1: R$"<<test1.getInvoiceAmount()<<endl;

    return 0;
}
