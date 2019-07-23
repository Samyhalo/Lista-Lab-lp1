#include "InvoiceD.h"
#include <string>
#include <iostream>



InvoiceD::InvoiceD()
{
    numItem=0;
    qtdItem=0;
    precoItem=0;
    descItem="Sem descricao.";
    //ctor
}

InvoiceD::InvoiceD(int numItem, int qtdItem, float precoItem, string descItem)
        : InvoiceD()
{
    setNumItem(numItem);
    setQtdItem(qtdItem);
    setPrecoItem(precoItem);
    setDescItem(descItem);
}

float InvoiceD::getInvoiceAmount()
{
    return qtdItem*precoItem;
}

void InvoiceD::setNumItem(int numItem)
{
    this->numItem = numItem;
}

void InvoiceD::setQtdItem(int qtdItem)
{
    if(qtdItem<0)
    {
        cout<<"Quantidade invalida."<<endl;
    }else
    {
        this->qtdItem = qtdItem;
    }
}

void InvoiceD::setPrecoItem(float precoItem)
{
    if(precoItem<0)
    {
        cout<<"Preco invalido."<<endl;
    }else
    {
        this->precoItem = precoItem;
    }
}

void InvoiceD::setDescItem(string descItem)
{
    this->descItem = descItem;
}

int InvoiceD::getNumItem()
{
    return numItem;
}

int InvoiceD::getQtdItem()
{
    return qtdItem;
}

float InvoiceD::getPrecoItem()
{
    return precoItem;
}

string InvoiceD::getDescItem()
{
    return descItem;
}
