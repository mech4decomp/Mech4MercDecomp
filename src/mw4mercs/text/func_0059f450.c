/*
 * FUN_0059F450 — __thiscall (ECX = this), constructor/init.
 * Sets vtable to 0x7839C4, calls vcall+8 on sub-object at [this+0x34],
 * then calls init functions on sub-objects at offsets 0x48, 0x34, and
 * the main object.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_0059F450(void *this)
{
    

extern void __cdecl FUN_1004179da(void);
extern void __cdecl FUN_100417963(void);
extern void __cdecl FUN_10041699c(void);
extern void __cdecl FUN_100415355(void);
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x34]
        push    edi
        lea     edi, [esi + 0x34]
        mov     ecx, edi
        mov     dword ptr [esi], 0x7839C4    /* vtable */
        call    dword ptr [eax + 8]          /* vcall+8 on sub-object */
        lea     ebx, [esi + 0x48]
        mov     ecx, ebx
        call FUN_1004179da
        mov     ecx, ebx
        call FUN_100417963
        mov     ecx, edi
        call FUN_10041699c
        mov     ecx, esi
        call FUN_100415355
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
