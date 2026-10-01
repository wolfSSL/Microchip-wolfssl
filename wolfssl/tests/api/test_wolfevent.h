/* test_wolfevent.h
 *
 * Copyright (C) 2006-2026 wolfSSL Inc.  All rights reserved.
 *
 * This file is part of wolfSSL.
 *
 * Contact licensing@wolfssl.com with any questions or comments.
 *
 * https://www.wolfssl.com
 */

#ifndef WOLFCRYPT_TEST_WOLFEVENT_H
#define WOLFCRYPT_TEST_WOLFEVENT_H

#include <tests/api/api_decl.h>

int test_wc_WolfEventDecisionCoverage(void);

#define TEST_WOLFEVENT_DECLS                                                    \
    TEST_DECL_GROUP("wolfevent", test_wc_WolfEventDecisionCoverage)

#endif /* WOLFCRYPT_TEST_WOLFEVENT_H */
