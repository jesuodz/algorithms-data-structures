# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

const int MAX_CHAR = 25;

class Mammal {
    protected:
        int year_born;
        char diet[MAX_CHAR];
        char place_born[MAX_CHAR];
    public:
        Mammal() {}
        Mammal( int yb, char d[MAX_CHAR], char pb[MAX_CHAR] );
        void get_diet();
        void get_year_and_place_born();
        void print_diet();
        void print_year_and_place_born();
};

Mammal::Mammal( int yb, char d[MAX_CHAR], char pb[MAX_CHAR] ) {
    year_born = yb;
    strcpy( place_born, pb );
    strcpy( diet, d );
}

void Mammal::get_diet() {
    std::cout << "Dieta del animal: ";
    std::cin >> diet;
}

void Mammal::get_year_and_place_born() {
    std::cout << "Año de nacimiento: ";
    std::cin >> year_born;
    
    std::cout << "Lugar de nacimiento: ";
    std::cin >> place_born;
}

void Mammal::print_diet() {
    std::cout << "Dieta del animal: " << diet << std::endl;
}

void Mammal::print_year_and_place_born() {
    std::cout << "Año de nacimiento: " << year_born << '\n';
    std::cout << "Lugar de nacimiento: " << place_born << '\n';
}

class Feline:public Mammal {
    protected:
        char owner_name[MAX_CHAR];
        char race[MAX_CHAR];
    public:
        Feline() {}
        Feline( int yb, char d[MAX_CHAR], char pb[MAX_CHAR], char on[MAX_CHAR], char r[MAX_CHAR] );
        void get_owner_name();
        void get_race();
        void change_owner_name();
        void print_owner_name();
        void print_race();
};

Feline::Feline( int yb, char d[MAX_CHAR], char pb[MAX_CHAR], char on[MAX_CHAR], char r[MAX_CHAR] )
        : Mammal( yb, d, pb ) {
            strcpy( owner_name, on );
            strcpy( race, r );
}

void Feline::get_owner_name() {
    std::cout << "Escriba el nombre del dueño: ";
    std::cin >> owner_name;
}

void Feline::get_race() {
    std::cout << "Escriba la raza del felino: ";
    std::cin >> race;
}

void Feline::change_owner_name() {
    std::cout << "Dueño actual: " << owner_name << '\n' << "Nuevo dueño: ";
    std::cin >> owner_name;
    std::cout << "Nombre del dueño actualizado exitosamente!" << std::endl;
}

void Feline::print_owner_name() {
    std::cout << "Nombre del dueño: " << owner_name << std::endl;
}

void Feline::print_race() {
    std::cout << "Raza del felino: " << race << std::endl;
}

int main() {
    Feline Gato;
    Gato.get_diet();
    Gato.get_year_and_place_born();
    Gato.get_owner_name();
    Gato.get_race();
    std::cout << '\n';
    Gato.print_diet();
    Gato.print_year_and_place_born();
    Gato.print_race();
    Gato.print_owner_name();
    Gato.change_owner_name();
}