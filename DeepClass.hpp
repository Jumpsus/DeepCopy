#ifndef DEEP_CLASS_HPP
# define DEEP_CLASS_HPP

# include <iostream>
class DeepClass{
    public:

        DeepClass(){
            x = new int[5];
        }

        DeepClass &operator =(DeepClass const &c){
            if (this->x){
                delete []x;
            }
            this->x = new int[5];
            for (int i = 0; i < 5; i++){
                this->x[i] = c.x[i];
            }
            return (*this);
        }

        ~DeepClass(){
            if (this->x){
                delete []x;
            }
        }

        int     *x;
};

#endif