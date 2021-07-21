#include "Form.hpp"

int main() {
	Bureaucrat jkeum("jkeum", 9);
	Bureaucrat polarBear("Polar Bear", 5);
	Form form("financial", false, 5, 7);
	Form copiedForm = form;

	std::cout << "-------- form --------" << std::endl;
	std::cout << copiedForm;

	std::cout << "--- jkeum has form ---" << std::endl;
	std::cout << jkeum;
	jkeum.signForm(copiedForm);
	std::cout << copiedForm;

	std::cout << "--- Polar Bear has form ---" << std::endl;
	std::cout << polarBear;
	polarBear.signForm(copiedForm);
	std::cout << copiedForm;

	return 0;
}