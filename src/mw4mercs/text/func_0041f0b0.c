/*
 * FUN_0041f0b0 (30 B) — __thiscall bit-buffer destructor wrapper.
 * Calls FUN_0041ef60 to tear down, then frees the object itself if the
 * low bit of the flag argument is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041f0b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041ef60
        test    byte ptr [esp+0x8], 0x1
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
