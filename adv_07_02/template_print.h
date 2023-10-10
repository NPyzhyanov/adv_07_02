#ifndef TEMPLATE_PRINT_H
#define TEMPLATE_PRINT_H

template <class T>
void template_print(const T &data)
{
    for (auto it = data.cbegin(); it != data.cend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

#endif // TEMPLATE_PRINT_H
