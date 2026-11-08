#include <iostream>

int main() {
    std::cout << "=== EnvironmentTest OK ===\n";

    // 1. Компилятор
#if defined(_MSC_VER)
    std::cout << "Compiler: MSVC\n";
    std::cout << "  _MSC_VER = " << _MSC_VER << "\n";
#elif defined(__clang__)
    std::cout << "Compiler: Clang\n";
    std::cout << "  __clang__ = " << __clang__ << "\n";
#elif defined(__GNUC__)
    std::cout << "Compiler: GCC\n";
    std::cout << "  __GNUC__ = " << __GNUC__ << "\n";
#else
    std::cout << "Compiler: Unknown\n";
#endif

    // 2. Стандарт языка
    std::cout << "C++ standard (__cplusplus) = " << __cplusplus << "\n";

    // 3. Тип сборки: Debug/Release через NDEBUG
#ifdef NDEBUG
    std::cout << "Build type: Release (NDEBUG defined)\n";
#else
    std::cout << "Build type: Debug (NDEBUG not defined)\n";
#endif

    // 4. Разрядность платформы
    std::cout << "Pointer size (sizeof(void*)) = " << sizeof(void*) << " bytes\n";
    if (sizeof(void*) == 8)
        std::cout << "Platform: 64-bit\n";
    else if (sizeof(void*) == 4)
        std::cout << "Platform: 32-bit\n";
    else
        std::cout << "Platform: unknown bitness\n";

    return 0;
}