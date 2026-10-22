/*
 * FUN_00413240 (30 B) — __thiscall deleting-destructor: calls base
 * destructor FUN_00412b60, then if the "deleting" flag ([esp+8]&1) is set
 * frees the object via FUN_004084e0. Returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00413240(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00412b60
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
