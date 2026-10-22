/*
 * FUN_006CA220 — getter: return this->field_04 (surface pointer).
 *
 * __stdcall RET 0x4 (1 param).
 * CFLAGS: /O1 (pinned)
 * Match: TBD
 */

#include <mw4/common.h>

int __stdcall texture_get_surface(void *p)
{
    return ((int *)p)[1];
}
