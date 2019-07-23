#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data();
        Data(int day, int month, int year);

        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

        void avancarDia();

        int getDay();
        int getMonth();
        int getYear();

    private:
        int day, month, year;
};

#endif // DATA_H
