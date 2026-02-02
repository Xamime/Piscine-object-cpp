#pragma once
#include <list>

template <typename T>
class List {
    private:
        static std::list<T*> array;
        List() {}
    public:
        static List<T>& getInstance() {
            static List<T> instance;
            return instance;
        }
        void add(T* object) {
            array.push_back(object);
        }
        std::list<T*>& getAll() {
            return array;
        }
};

template <typename T>
std::list<T*> List<T>::array;