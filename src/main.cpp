#include <iostream>
#include <cstring>

void christmas_tree()
{
	int width, height, i, j, k, n = 1;

    std::cout << "Please Enter Christmas Tree Width & Height = ";
    std::cin >> width >> height;

	int space = width * height;

    std::cout << "Printing Christmas Tree Pattern of Stars\n";

	for (int x = 1; x <= height; x++) {
		for (i = n; i <= width; i++) {
			for (j = space; j >= i; j--) {
                std::cout << " ";
			}
			for (k = 1; k <= i; k++) {
                std::cout << "* ";
			}
            std::cout <<"\n";
		}
		n += 2;
		width += 2;
	}
	for (i = 1; i <= height - 1; i++) {
		for (j = space - 3; j >= 0; j--) {
            std::cout << " ";
		}
		for (k = 1; k <= height - 1; k++) {
            std::cout << "* ";
		}
        std::cout << "\n";
	}
}

void beautiful_christmas_tree()
{
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "       *" << std::endl;
    std::cout << "      ***" << std::endl;
    std::cout << "     *****" << std::endl;
    std::cout << "    ***\033[1;31mo\033[0m***" << std::endl;
    std::cout << "   **\033[1;32m0\033[0m******" << std::endl;
    std::cout << "    ***\033[1;34mo\033[0m***" << std::endl;
    std::cout << "   *****\033[1;35m0\033[0m***" << std::endl;
    std::cout << "  ***\033[1;31m0\033[0m*******" << std::endl;
    std::cout << "    **\033[1;32mo\033[0m****" << std::endl;
    std::cout << "   *********" << std::endl;
    std::cout << "  ***********" << std::endl;
    std::cout << "      \033[1;33m***\033[0m" << std::endl;
    std::cout << "      \033[1;33m***\033[0m" << std::endl;
    std::cout << "      \033[1;33m***\033[0m" << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
}


int main(int argc, char** argv)
{
    if (strncmp(argv[1], "--colored", 9)) {
        beautiful_christmas_tree();
    } else {
        christmas_tree();
    }
    return 0;
}

