//
// Created by Georgi Slaveykov on 31.10.20.
//

#include "iostream"
#include <complex>

int main()
{
    std::complex<float> z(1.4, 1.3);

    std::cout << z << std::endl;
    std::cout << real(z) << std::endl; // alt: z.real()
    std::cout << imag(z) << std::endl; // alt: z.imag()

    z = 2.0f * z; // note: literals are needed when working with complex numbers

    std::cout << z << std::endl;
    std::cout << real(z) << std::endl; // alt: z.real()
    std::cout << imag(z) << std::endl; // alt: z.imag()

    return 0;
}
