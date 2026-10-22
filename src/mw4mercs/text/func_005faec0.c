/*
 * FUN_005faec0 (27 B) — __thiscall: releases the object at this+0x2fc (via
 * vtable+0x18) if non-null, then calls FUN_004d98c0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d98c0(void);

__declspec(naked) void FUN_005faec0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      Ld2
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x18]
Ld2:
        mov     ecx, esi
        call    FUN_004d98c0
        pop     esi
        ret
    }
}
