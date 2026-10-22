/*
 * FUN_006598f0 (46 B) — __thiscall.
 *
 * Frees this->[0] if non-null, and frees this if (arg & 1). Returns this.
 * Returns with RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_006598f0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip1:
        test    byte ptr [esp + 0xc], 0x1
        jz      L_skip2
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip2:
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
