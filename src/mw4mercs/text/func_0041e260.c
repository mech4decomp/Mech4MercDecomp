/*
 * FUN_0041e260 (30 B) — __thiscall scalar-deleting-destructor pattern.
 * Calls FUN_0041dec0 (destructor), then if the flags arg (bit 0) is set,
 * frees the object via FUN_004084e0. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0041e260(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041dec0
        test    byte ptr [esp+0x8], 0x1
        jz      L278
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L278:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
