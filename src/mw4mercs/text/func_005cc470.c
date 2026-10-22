/*
 * FUN_005cc470 (43 B) — __fastcall destructor helper. Sets vtable 0x787d7c,
 *   frees [this+0x378] if non-null, calls FUN_005dba10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_004084e0(void);
extern void FUN_005dba10(void);

__declspec(naked) void FUN_005cc470(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x787d7c
        mov     eax, [esi + 0x378]
        test    eax, eax
        mov     [esp + 4], eax
        jz      l_491
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_491:
        mov     ecx, esi
        call    FUN_005dba10
        pop     esi
        pop     ecx
        ret
    }
}
