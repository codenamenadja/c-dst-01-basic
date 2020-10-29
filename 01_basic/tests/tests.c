#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "dst_basic.h"
#include "dbg.h"

int test_ft_find_max();

int main()
{
    int     failures;
    int     successes;
    
    failures = 0;
    successes = 0;
    debug("TEST START-------------");
    test_ft_find_max() ? failures++ : successes++;
    
    debug("tests %d, success: %d, failures: %d.",
        failures+successes, successes, failures);
    debug("TEST FIN-------------");
}


int test_ft_find_max()
{
    int     max;
    int     ret;
    int     arr[16];
    int     n;

    max = INT_MAX;
    arr[13] = max;
    debug("----RUN: test_ft_find_max:ft_find_max----");
    n = 16;
    
    ret = ft_find_max(arr, n);
    check(
        (max == ret),
        "expection error, max and ret non equal"
    );
    debug("----FIN: test_ft_find_max:ft_find_max----");
    return (EXIT_SUCCESS);

error:
    debug("%d expected, returned %d.", max, ret);
    debug("----ERR: test_ft_find_mx:ft_find_max----");
    return (EXIT_FAILURE);
}
