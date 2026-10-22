/*
 * FUN_00682750 (25 B) — HUD element method: virtual call at vtable+0xe8 on
 * this; if it returns true, calls FUN_005c1bc0 on the object at this+0x4.
 * __thiscall, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1bc0(void);

__declspec(naked) void FUN_00682750(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax+0xe8]
        test    al, al
        jz      L_682767
        mov     ecx, dword ptr [esi+0x4]
        call    FUN_005c1bc0
    L_682767:
        pop     esi
        ret
    }
}
