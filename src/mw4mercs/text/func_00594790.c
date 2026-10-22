/*
 * FUN_00594790 — __thiscall (ECX = this), constructor.
 * Calls base constructor FUN_00416990 with two NULL args,
 * sets vtable to 0x782DD4, zeroes 8 fields at offsets 0x14-0x30.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void *__fastcall func_00594790(void *this)
{
    

extern void __cdecl FUN_10041698d(void);
__asm {
push    esi
        push    edi
        xor     edi, edi
        push    edi             /* arg2 = NULL */
        mov     esi, ecx        /* this in ESI */
        push    edi             /* arg1 = NULL */
        call FUN_10041698d
        mov     dword ptr [esi], 0x782DD4  /* vtable */
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x30], edi
        mov     dword ptr [esi + 0x2c], edi
        pop     edi
        mov     eax, esi        /* return this */
        pop     esi
        ret
    }


}
