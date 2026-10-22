/*
 * FUN_006CAEF0 — set the log context pointer (0x0082F388).
 *
 * __stdcall RET 0x4 (1 param).
 * CFLAGS: /O1 (pinned)
 * Match: TBD
 */

#include <mw4/common.h>

extern void *g_log_ctx;   /* 0x0082F388 */

void __stdcall texture_set_log_ctx(int v)
{
    g_log_ctx = (void *)v;
}
