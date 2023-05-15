#include <iostream>
#include "main.cpp"
template <class Type, int size> void sort(Type(&elements)[size])
{
    bool finished = false;

    // Пока массив не отсортирован
    while (!finished) {
        finished = true;

        // Цикл прохода по массиву и замены
        for (int i = 0; i < size - 1; i++) {
            // Если элемент больше следующего - замена
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
                finished = false;
            }
        }
    }
}

