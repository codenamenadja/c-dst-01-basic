#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "dst_basic.h"
#include "dbg.h"

int test_ft_find_max();
int test_ft_evenodds();
int test_ft_find_max_m(); 

int main()
{
    int     failures;
    int     successes;
    
    failures = 0;
    successes = 0;
    debug("TEST START-------------");
    debug("----");
    test_ft_find_max() ? failures++ : successes++;
    debug("tests %d, success: %d, failures: %d.",
        failures+successes, successes, failures);
    debug("----");
    test_ft_evenodds() ? failures++ : successes++;
    debug("tests %d, success: %d, failures: %d.",
        failures+successes, successes, failures);
    debug("----");
    test_ft_find_max_m() ? failures++ : successes++;
    debug("tests %d, success: %d, failures: %d.",
        failures+successes, successes, failures);
    debug("TEST FIN-------------");
}

int test_ft_find_max_m()
{
    unsigned int    **arr;
    int             len = 10;
    unsigned int    ret;
    int             i;

    debug("----RUN: test_ft_find_max_m:ft_find_max_matrix----");
    i = -1;
    arr = (unsigned int **)calloc(10, sizeof(int *));
    while (++i < len)
       *(arr + i) = (unsigned int *)calloc(10, sizeof(int));

    ret = ft_find_max_matrix(arr, len);
    debug("expected:%u ret:%u", 0, ret);
    check(ret == 0,
        "expection error"
    );

    *(*(arr + 9) + 2) = 4444;

    ret = ft_find_max_matrix(arr, len);
    debug("expected:%u ret:%u", 4444, ret);
    check(ret == 4444,
        "expection error"
    );
    
    debug("----FIN: test_ft_find_max_m:ft_find_max_matrix----");

    i = -1;
    while (++i < len)
       free(*(arr + i));
    free(arr); 

    return (EXIT_SUCCESS);

error:
    debug("----ERR: test_ft_find_max_m:ft_find_max_matrix----");
    i = -1;

    while (++i < len)
       free(*(arr + i));
    free(arr); 

    return (EXIT_FAILURE);
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

    return (EXIT_SUCCESS);

error:
    debug("%p: %p-%p-%p", ret, *ret, *(ret + 1), *(ret + 2));
    debug("----ERR: test_ft_evenodd:ft_evenodds_sum----");

    free(*ret);
    free(*(ret+1));
    free(ret);

    return (EXIT_FAILURE);
}

int test_ft_find_max()
{
    unsigned int    max;
    unsigned int    ret;
    unsigned int    arr[16];
    int             n;

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
