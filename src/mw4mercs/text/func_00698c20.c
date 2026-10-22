/*
 * FUN_00698c20 (30 B) — __thiscall destructor wrapper: calls the
 * sub-object destructor FUN_00698c40, then if the flag param (bit 0)
 * is set, frees `this` via FUN_004084e0 (operator delete). Returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00698c40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00698c20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00698c40
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
