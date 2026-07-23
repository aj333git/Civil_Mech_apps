#include <iostream>
#include <vector>
#include <iomanip>

void displayTerrain(const std::vector<std::vector<double>>& terrain)
{
    std::cout << "\nTerrain Grid (Elevation in meters)\n";
    std::cout << "----------------------------------\n";

    for (size_t i = 0; i < terrain.size(); ++i)
    {
        for (size_t j = 0; j < terrain[i].size(); ++j)
        {
            std::cout << std::setw(8)
                      << std::fixed
                      << std::setprecision(2)
                      << terrain[i][j];
        }

        std::cout << "\n";
    }
}

int main()
{
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    std::vector<std::vector<double>> terrain(
        rows,
        std::vector<double>(cols));

    std::cout << "\nEnter elevation values (meters)\n";

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "Elevation [" << i
                      << "][" << j << "] : ";

            std::cin >> terrain[i][j];
        }
    }

    displayTerrain(terrain);

    return 0;
}
