#include <iostream>
#include <vector>
#include <iomanip>

double calculateTotalLoad(const std::vector<double>& loads)
{
    double total = 0.0;

    for (size_t i = 0; i < loads.size(); ++i)
    {
        total += loads[i];
    }

    return total;
}

int main()
{
    int n;

    std::cout << "Number of point loads: ";
    std::cin >> n;

    std::vector<double> loads(n);

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Load " << i + 1 << " (kN): ";
        std::cin >> loads[i];
    }

    double total = calculateTotalLoad(loads);

    std::cout << "\nBeam Load Report\n";
    std::cout << "--------------------------\n";

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Load " << i + 1
                  << " : "
                  << std::fixed
                  << std::setprecision(2)
                  << loads[i]
                  << " kN\n";
    }

    std::cout << "--------------------------\n";
    std::cout << "Total Load : "
              << std::fixed
              << std::setprecision(2)
              << total
              << " kN\n";

    return 0;
}
//g++ beam_load_cal.cpp -o beam_load_cal


