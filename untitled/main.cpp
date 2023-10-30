#include <cmath>    // for sqrt
#include <iostream> // to print
#include <utility>  // for pairs

std::pair<bool, std::pair<int, int>> solveQuadratic(int a, int b, int c) {
    // x = [-b +- sqrt(b^2 - 4ac)] / 2a
    //
    // TODO: Write this code!
    //
    double delta = b * b - 4 * a * c;
    if ( delta < 0 )
    {
        return std::make_pair(false,std::make_pair(0,0));
    }
    else
    {
        int x1 = ( sqrt(delta) - b ) / ( 2 * a );
        int x2=( 0 - sqrt(delta) - b) / ( 2 * a );
        return std::make_pair(true,std::make_pair(x1,x2));
    }



}

int main()
{
    std::cout << "Hello World!" << std::endl;
    auto result = solveQuadratic(1, -3, 2);
    // TODO: Write code to display the two roots! Make sure to handle if
    // there are no real roots!
    std::cout << result.first << " " << result.second.first << " " << result.second.second << std::endl;
    return 0;
}