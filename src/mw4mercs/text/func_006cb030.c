/*
 * FUN_006CB030 — release and nullify a texture pointer.
 *   If *param_1 != NULL:
 *     call vtable[0](*param_1, 1)  — scalar deleting destructor
 *   *param_1 = NULL
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006cb030(int *ptr)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_null
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    L_null:
        mov     dword ptr [esi], 0
        pop     esi
        ret     4
    }
}
