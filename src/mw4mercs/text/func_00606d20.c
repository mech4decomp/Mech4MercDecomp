/*
 * FUN_00606D20 (34 B) — __thiscall destructor.
 *
 * Sets vtable 0x78bad0 at [this], frees [this+0x14] via FUN_004084e0 if
 * non-null, then calls FUN_00415380() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *a);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00606d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        mov     dword ptr [esi], 0x78bad0
        jz      L_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
