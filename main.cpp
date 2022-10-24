#include "DeepClass.hpp"
#include "ShallowClass.hpp"

int main(){
    {
        std::cout << "=== Deep Copy ===" << std::endl;

        DeepClass d1;
        DeepClass d2;

        std::cout << "--- Set d1 Value ---" << std::endl;
        d1.x[0] = 1;
        d1.x[1] = 2;
        d1.x[2] = 3;
        d1.x[3] = 4;
        d1.x[4] = 5;

        std::cout << "--- Copy d1 to d2 ---" << std::endl;
        d2 = d1;
        for (int i = 0; i < 5; i++){
            d2.x[i] = 0;
        }

        std::cout << "--- Edit d2 Value (d1 value must not change) ---" << std::endl;
        for (int i = 0; i < 5; i++){
            std::cout << "iter " << i << " d1 = " << d1.x[i] << " ,d2 = " << d2.x[i] << std::endl;
        }
        std::cout << std::endl;
    }

    {
        std::cout << "=== Shallow Copy ===" << std::endl;

        ShallowClass s1;
        ShallowClass s2;
    
        std::cout << "--- Set s1 Value ---" << std::endl;
        s1.x[0] = 1;
        s1.x[1] = 2;
        s1.x[2] = 3;
        s1.x[3] = 4;
        s1.x[4] = 5;
    
        std::cout << "--- Copy s1 to s2 ---" << std::endl;
        s2 = s1;
        for (int i = 0; i < 5; i++){
            s2.x[i] = 0;
        }
    
        std::cout << "--- Edit s2 Value (s1 value need to change) ---" << std::endl;
        for (int i = 0; i < 5; i++){
            std::cout << "iter " << i << " s1 = " << s1.x[i] << " ,s2 = " << s2.x[i] << std::endl;
        }
        std::cout << std::endl;
    }
}