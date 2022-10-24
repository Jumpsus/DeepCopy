#ifndef SHALLOW_CLASS_HPP
# define SHALLOW_CLASS_HPP

# include <iostream>
class ShallowClass{
    public:

        ShallowClass(){
            x = new int[5];
        }

        ShallowClass &operator =(ShallowClass const &c){
            if (this->x){
                delete []x;
            }
            this->x = c.x;
            return (*this);
        }

        ~ShallowClass(){
            if (this->x){
                // delete []x; shallow copy may cause double free
            }
        }

        int     *x;
};

#endif