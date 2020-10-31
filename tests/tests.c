#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "dst_basic.h"
#include "dbg.h"

int test_ft_find_max();
int test_ft_evenodds();

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
    test_ft_evenodds() ? failures++ : successes++;
    debug("tests %d, success: %d, failures: %d.",
        failures+successes, successes, failures);
    debug("TEST FIN-------------");
}

int test_ft_evenodds()
{
    int             arr[9] = {1, 0, 2, 0, 0, 4, 6, 9, 22};
    int             len    = 8; 
    unsigned int    **ret;

    debug("----RUN: test_ft_evenodd:ft_evenodds_sum----");
    ret = ft_evenodd(arr, len);
    
    debug("evens: %u, odds: %u", **ret, **(ret +1));
    check(**ret == 12,
        "even sum value error");
    check(**(ret + 1) == 10,
        "odd sum value error"); 
    check(*(ret + 2) == NULL,
        "NULL termination error");
    
    debug("%p: %p-%p-%p", ret, *ret, *(ret + 1), *(ret + 2));
    debug("----FIN: test_ft_evenodd:ft_evenodds_sum----");

    free(*ret);
    free(*(ret+1));
    free(ret);

    return (0);

error:
    debug("%p: %p-%p-%p", ret, *ret, *(ret + 1), *(ret + 2));
    debug("----ERR: test_ft_evenodd:ft_evenodds_sum----");

    free(*ret);
    free(*(ret+1));
    free(ret);

    return (1);
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
