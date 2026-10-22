/*
 * FUN_004a1c30 (51 B) — MLR particle/shrapnel: destructor. Frees buffer at
 * [this+0xa0], calls FUN_00494140, and if the "delete" flag ([esp+8]&1) is
 * set frees this via FUN_004084e0. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004a1c30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xa0]
        test    eax, eax
        jz      L1c46
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1c46:
        mov     ecx, esi
        call    FUN_00494140
        test    byte ptr [esp+0x8], 0x1
        jz      L1c5d
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1c5d:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
