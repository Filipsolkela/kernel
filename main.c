#include "system_sam3x.h"
#include "at91sam3x8.h"

#include "kernel_functions.c"
#include "tests.c"

void main(void)
{
    SystemInit();
    isr_off();
    int res = init_kernel();
    run();
}
