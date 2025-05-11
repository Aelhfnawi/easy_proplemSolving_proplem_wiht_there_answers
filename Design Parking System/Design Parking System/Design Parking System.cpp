#include <iostream>
#include <vector>
using namespace std;

vector<int> spaces(3, 0);

void parksystem(int small, int medium, int large)
{
    spaces[0] = large;
    spaces[1] = medium;
    spaces[2] = small;

}
bool addCar(int carType)
{
    if (carType >= 1 && carType <= 3 && spaces[carType - 1] > 0) {
        spaces[carType - 1]--;
        return true;
    }
    return false;
}

int main()
{
    int x = 5;
    int y = 1;
    int z = 6;
    
    parksystem(x, y, z);
    bool car1 = addCar(2);
    cout << "Car 1 parked: " << (car1 ? "Yes" : "No");


}
