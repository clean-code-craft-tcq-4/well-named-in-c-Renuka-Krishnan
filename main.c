#include <stdio.h>
#include <assert.h>
#include "color_code.h"
#include "test_function.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    print_reference_manual();

    return 0;
}
