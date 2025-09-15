#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define NUM_ELEMENTS 118

struct Element {
    char name[20];
    char symbol[3];
    int atomicNumber;
    int group;
    int period;
    float atomicMass;
};

struct Element elements[NUM_ELEMENTS] = {
    {"hydrogen", "h", 1, 1, 1, 1.008},
    {"helium", "he", 2, 18, 1, 4.0026},
    {"lithium", "li", 3, 1, 2, 6.94},
    {"beryllium", "be", 4, 2, 2, 9.0122},
    {"boron", "b", 5, 13, 2, 10.81},
    {"carbon", "c", 6, 14, 2, 12.011},
    {"nitrogen", "n", 7, 15, 2, 14.007},
    {"oxygen", "o", 8, 16, 2, 15.999},
    {"fluorine", "f", 9, 17, 2, 18.998},
    {"neon", "ne", 10, 18, 2, 20.180},
    {"sodium", "na", 11, 1, 3, 22.990},
    {"magnesium", "mg", 12, 2, 3, 24.305},
    {"aluminium", "al", 13, 13, 3, 26.982},
    {"silicon", "si", 14, 14, 3, 28.085},
    {"phosphorus", "p", 15, 15, 3, 30.974},
    {"sulfur", "s", 16, 16, 3, 32.06},
    {"chlorine", "cl", 17, 17, 3, 35.45},
    {"argon", "ar", 18, 18, 3, 39.948},
    {"potassium", "k", 19, 1, 4, 39.098},
    {"calcium", "ca", 20, 2, 4, 40.078},
    {"scandium", "sc", 21, 3, 4, 44.956},
    {"titanium", "ti", 22, 4, 4, 47.867},
    {"vanadium", "v", 23, 5, 4, 50.942},
    {"chromium", "cr", 24, 6, 4, 51.996},
    {"manganese", "mn", 25, 7, 4, 54.938},
    {"iron", "fe", 26, 8, 4, 55.845},
    {"cobalt", "co", 27, 9, 4, 58.933},
    {"nickel", "ni", 28, 10, 4, 58.693},
    {"copper", "cu", 29, 11, 4, 63.546},
    {"zinc", "zn", 30, 12, 4, 65.38},
    {"gallium", "ga", 31, 13, 4, 69.723},
    {"germanium", "ge", 32, 14, 4, 72.63},
    {"arsenic", "as", 33, 15, 4, 74.922},
    {"selenium", "se", 34, 16, 4, 78.971},
    {"bromine", "br", 35, 17, 4, 79.904},
    {"krypton", "kr", 36, 18, 4, 83.798},
    {"rubidium", "rb", 37, 1, 5, 85.468},
    {"strontium", "sr", 38, 2, 5, 87.62},
    {"yttrium", "yt", 39, 3, 5, 88.906},
    {"zirconium", "zr", 40, 4, 5, 91.224},
    {"niobium", "nb", 41, 5, 5, 92.906},
    {"molybdenum", "mo", 42, 6, 5, 95.95},
    {"technetium", "tc", 43, 7, 5, 98},
    {"ruthenium", "ru", 44, 8, 5, 101.07},
    {"rhodium", "rh", 45, 9, 5, 102.91},
    {"palladium", "pd", 46, 10, 5, 106.42},
    {"silver", "ag", 47, 11, 5, 107.87},
    {"cadmium", "cd", 48, 12, 5, 112.41},
    {"indium", "in", 49, 13, 5, 114.82},
    {"tin", "sn", 50, 14, 5, 118.71},
    {"antimony", "sb", 51, 15, 5, 121.76},
    {"tellurium", "te", 52, 16, 5, 127.60},
    {"iodine", "i", 53, 17, 5, 126.90},
    {"xenon", "xe", 54, 18, 5, 131.29},
    {"cesium", "cs", 55, 1, 6, 132.91},
    {"barium", "ba", 56, 2, 6, 137.33},
    {"lanthanum", "la", 57, 3, 6, 138.91},
    {"cerium", "ce", 58, 3, 6, 140.12},
    {"praseodymium", "pr", 59, 3, 6, 140.91},
    {"neodymium", "nd", 60, 3, 6, 144.24},
    {"promethium", "pm", 61, 3, 6, 145},
    {"samarium", "sm", 62, 3, 6, 150.36},
    {"europium", "eu", 63, 3, 6, 151.98},
    {"gadolinium", "gd", 64, 3, 6, 157.25},
    {"terbium", "tb", 65, 3, 6, 158.93},
    {"dysprosium", "dy", 66, 3, 6, 162.50},
    {"holmium", "ho", 67, 3, 6, 164.93},
    {"erbium", "er", 68, 3, 6, 167.26},
    {"thulium", "tm", 69, 3, 6, 168.93},
    {"ytterbium", "yb", 70, 3, 6, 173.04},
    {"lutetium", "lu", 71, 3, 6, 175.00},
    {"hafnium", "hf", 72, 4, 6, 178.49},
    {"tantalum", "ta", 73, 5, 6, 180.95},
    {"tungsten", "w", 74, 6, 6, 183.84},
    {"rhenium", "re", 75, 7, 6, 186.21},
    {"osmium", "os", 76, 8, 6, 190.23},
    {"iridium", "ir", 77, 9, 6, 192.22},
    {"platinum", "pt", 78, 10, 6, 195.08},
    {"gold", "au", 79, 11, 6, 196.97},
    {"mercury", "hg", 80, 12, 6, 200.59},
    {"thallium", "tl", 81, 13, 6, 204.38},
    {"lead", "pb", 82, 14, 6, 207.2},
    {"bismuth", "bi", 83, 15, 6, 208.98},
    {"polonium", "po", 84, 16, 6, 209},
    {"astatine", "at", 85, 17, 6, 210},
    {"radon", "rn", 86, 18, 6, 222},
    {"francium", "fr", 87, 1, 7, 223},
    {"radium", "ra", 88, 2, 7, 226},
    {"actinium", "ac", 89, 3, 7, 227},
    {"thorium", "th", 90, 3, 7, 232.04},
    {"protactinium", "pa", 91, 3, 7, 231.04},
    {"uranium", "u", 92, 3, 7, 238.03},
    {"neptunium", "np", 93, 3, 7, 237},
    {"plutonium", "pu", 94, 3, 7, 244},
    {"americium", "am", 95, 3, 7, 243},
    {"curium", "cm", 96, 3, 7, 247},
    {"berkelium", "bk", 97, 3, 7, 247},
    {"californium", "cf", 98, 3, 7, 251},
    {"einsteinium", "es", 99, 3, 7, 252},
    {"fermium", "fm", 100, 3, 7, 257},
    {"mendelevium", "md", 101, 3, 7, 258},
    {"nobelium", "no", 102, 3, 7, 259},
    {"lawrencium", "lr", 103, 3, 7, 262},
    {"rutherfordium", "rf", 104, 4, 7, 267},
    {"dubnium", "db", 105, 5, 7, 270},
    {"seaborgium", "sg", 106, 6, 7, 271},
    {"bohrium", "bh", 107, 7, 7, 270},
    {"hassium", "hs", 108, 8, 7, 277},
    {"meitnerium", "mt", 109, 9, 7, 276},
    {"darmstadtium", "ds", 110, 10, 7, 281},
    {"roentgenium", "rg", 111, 11, 7, 282},
    {"copernicium", "cn", 112, 12, 7, 285},
    {"nihonium", "nh", 113, 13, 7, 286},
    {"flerovium", "fl", 114, 14, 7, 289},
    {"moscovium", "mc", 115, 15, 7, 290},
    {"livermorium", "lv", 116, 16, 7, 293},
    {"tennessine", "ts", 117, 17, 7, 294},
    {"oganesson", "og", 118, 18, 7, 294}

};
int main()
{
    char input[20];
    int found = 0;

    printf("Enter element name or symbol: ");
    scanf("%19s", input);

    for (int i = 0; input[i] != '\0'; i++)
    {
        input[i] = tolower(input[i]);
    }

    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        if (strcmp(input, elements[i].name) == 0 || strcmp(input, elements[i].symbol) == 0)
        {
            printf("\nElement Details:\n");
            printf("Name         : %s\n", elements[i].name);
            printf("Symbol       : %s\n", elements[i].symbol);
            printf("Atomic Number: %d\n", elements[i].atomicNumber);
            printf("Group        : %d\n", elements[i].group);
            printf("Period       : %d\n", elements[i].period);
            printf("Atomic Mass  : %.3f u\n", elements[i].atomicMass);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element not found.\n");
    }

    return 0;
}
