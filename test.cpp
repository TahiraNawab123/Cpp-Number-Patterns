#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "function.h"
using namespace std;
#include <sstream>

TEST_CASE("printNumbers prints the correct sequence", "[printNumbers]") {
    ostringstream output;
    streambuf* oldCoutBuffer = cout.rdbuf();
    cout.rdbuf(output.rdbuf());


    printNumbers(5);

    cout.rdbuf(oldCoutBuffer);

    REQUIRE(output.str() == "1\n2\n3\n4\n5\n");
}

TEST_CASE("printNumbers prints the correct sequence for zero", "[printNumbers]") {
    ostringstream output;
    streambuf* oldCoutBuffer = cout.rdbuf();
    cout.rdbuf(output.rdbuf());

    printNumbers(0);


    cout.rdbuf(oldCoutBuffer);


    REQUIRE(output.str() == "");
}

TEST_CASE("printNumbers prints the correct sequence for larger numbers", "[printNumbers]") {
    ostringstream output;
    streambuf* oldCoutBuffer = cout.rdbuf();
    cout.rdbuf(output.rdbuf());


    printNumbers(10);


    cout.rdbuf(oldCoutBuffer);


    REQUIRE(output.str() == "1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");
}

TEST_CASE("Sum Numbers Test Cases", "[sumNumbers]") {

    SECTION("Test with input 5") {
        std::stringstream buffer;
        std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        sumNumbers(5);  // Call the function

        std::cout.rdbuf(prevcoutbuf);  // Reset cout back to normal

        std::string expected = "Sum of all the numbers from 1 to 5: 15\n";
        REQUIRE(buffer.str() == expected);
    }

    SECTION("Test with input 10") {
        std::stringstream buffer;
        std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        sumNumbers(10);  // Call the function

        std::cout.rdbuf(prevcoutbuf);  // Reset cout back to normal

        std::string expected = "Sum of all the numbers from 1 to 10: 55\n";
        REQUIRE(buffer.str() == expected);
    }

    SECTION("Test with input 1") {
        std::stringstream buffer;
        std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        sumNumbers(1);  // Call the function

        std::cout.rdbuf(prevcoutbuf);  // Reset cout back to normal

        std::string expected = "Sum of all the numbers from 1 to 1: 1\n";
        REQUIRE(buffer.str() == expected);
    }
}

TEST_CASE("PrintMultiples Test Cases", "[printMultiples]") {

    SECTION("Multiples of 5") {
        stringstream buffer;
        streambuf* prevcoutbuf = cout.rdbuf(buffer.rdbuf());
        printMultiples(5);
        cout.rdbuf(prevcoutbuf);
        string expected =
            "5 x 1 = 5\n"
            "5 x 2 = 10\n"
            "5 x 3 = 15\n"
            "5 x 4 = 20\n"
            "5 x 5 = 25\n"
            "5 x 6 = 30\n"
            "5 x 7 = 35\n"
            "5 x 8 = 40\n"
            "5 x 9 = 45\n"
            "5 x 10 = 50\n";

        REQUIRE(buffer.str() == expected);
    }
}
TEST_CASE("Number Triangle Test Cases", "[printNumberTriangle]") {

    SECTION("Triangle of height 3") {
        std::stringstream buffer;
        std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        printNumberTriangle(3);  // Call the function

        std::cout.rdbuf(prevcoutbuf);  // Reset cout back to normal

        std::string expected =
            "1 \n"
            "1 2 \n"
            "1 2 3 \n";

        REQUIRE(buffer.str() == expected);
    }

    SECTION("Triangle of height 5") {
        std::stringstream buffer;
        std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        printNumberTriangle(5);  // Call the function

        std::cout.rdbuf(prevcoutbuf);  // Reset cout back to normal

        std::string expected =
            "1 \n"
            "1 2 \n"
            "1 2 3 \n"
            "1 2 3 4 \n"
            "1 2 3 4 5 \n";

        REQUIRE(buffer.str() == expected);
    }
}