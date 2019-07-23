#ifndef INVOICED_H
#define INVOICED_H
#include <iostream>
#include <string>

using namespace std;

class InvoiceD
{
    public:
        InvoiceD();
        InvoiceD(int numItem, int qtdItem, float precoItem, string descItem);

        float getInvoiceAmount();

        void setNumItem(int numItem);
        void setQtdItem(int qtdItem);
        void setPrecoItem(float precoItem);
        void setDescItem(string descItem);

        int getNumItem();
        int getQtdItem();
        float getPrecoItem();
        string getDescItem();

    private:
        int numItem, qtdItem;
        float precoItem;
        string descItem;
};

#endif // INVOICED_H
