#include <iostream>
#include <fstream>
#include <vector>

struct Operation
{
    int sum;        // купленная сумма
    double rate;    // по какому курсу
    Operation(double s, double r) : sum(s), rate(r)
    {}
};
int main()
{
    std::vector<Operation> operations = {
            Operation(120, 57.7),
            Operation(1030, 57.4),
            Operation(980, 58.5),
            Operation(560, 57.2)
    };

    std::ofstream out("D:\\Work\\operations.txt");

    if (out.is_open())
    {
        for (int i = 0; i < operations.size(); i++)
        {
            out << operations[i].sum << " " << operations[i].rate << std::endl;
        }
    }
    out.close();

    std::vector<Operation> new_operations;
    double rate;
    int sum;
    std::ifstream in("D:\\Work\\operations.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (in >> sum >> rate)
        {
            new_operations.push_back(Operation(sum, rate));
        }
    }
    in.close();

    for (int i = 0; i < new_operations.size(); i++)
    {
        std::cout << new_operations[i].sum << " - " << new_operations[i].rate << std::endl;
    }
    return 0;
}
