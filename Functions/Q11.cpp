#include <iostream>

using namespace std;

struct sterling
{
    int pounds, shillings, pence;
    void fromPence(int value)
    {
        pence = value;
        pounds = pence / 240;
        pence %= 240;
        shillings = pence / 12;
        pence %= 12;
    }
    double toPence()
    {
        return pounds * 240 + shillings * 12 + pence;
    }
};

sterling get_pound_shillings_pence()
{
    sterling s;
    cout << "Enter pounds, shillings, and pence: ";
    cin >> s.pounds >> s.shillings >> s.pence;
    return s;
}

sterling sum(sterling &s1, sterling &s2)
{
    sterling result;
    result.fromPence(s1.toPence() + s2.toPence());
    return result;
}

void display(sterling &s)
{
    cout << char(156) << s.pounds << ":" << s.shillings << ":" << s.pence << endl;
}

int main()
{
    sterling s1;
    s1 = get_pound_shillings_pence();

    sterling s2;
    s2 = get_pound_shillings_pence();

    sterling s3 = sum(s1, s2);
    display(s3);

    return 0;
}