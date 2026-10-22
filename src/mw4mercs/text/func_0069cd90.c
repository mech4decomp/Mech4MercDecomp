/*
 * FUN_0069cd90 (45 B) — __thiscall destructor.
 *
 * Sets vtable 0x799a08, calls FUN_0069cdc0(), frees this->[0x50] if
 * non-null via FUN_004084e0(), then calls FUN_00561730(). Returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069cdc0(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_0069cd90(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x799a08
        call    FUN_0069cdc0
        mov     eax, dword ptr [esi + 0x50]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        pop     ecx
        ret
    }
}
