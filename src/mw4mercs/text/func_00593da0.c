/*
 * FUN_00593DA0 — __thiscall (ECX = this), returns pointer or NULL.
 * Bounds-checked accessor: uses [this+0x40] as preferred index into
 * container at [this+0x38]. Returns [element+0x80] or NULL.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void *__fastcall func_00593DA0(void *this)
{
    

extern void __cdecl FUN_100417a38(void);
extern void __cdecl FUN_100417a29(void);
extern void __cdecl FUN_1004179ec(void);
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x40]  /* preferred index */
        lea     esi, [ecx + 0x38]            /* container sub-object */
        mov     ecx, esi
        xor     ebx, ebx                     /* NULL return */
        call FUN_100417a38
        cmp     edi, eax                     /* if index < count */
        jae     L_get_count
        mov     eax, edi                     /* use preferred index */
        jmp     L_check
L_get_count:
        mov     ecx, esi
        call FUN_100417a29
        dec     eax                          /* count - 1 */
L_check:
        test    eax, eax
        jl      L_return_null
        push    eax
        mov     ecx, esi
        call FUN_1004179ec
        mov     eax, dword ptr [eax+0x80]
        pop     edi
        pop     esi
        pop     ebx
        ret
L_return_null:
        pop     edi
        pop     esi
        mov     eax, ebx                     /* return NULL */
        pop     ebx
        ret
    }


}
