/*
 * FUN_004093b0 (30 B) — __thiscall scalar-deleting destructor. Calls the
 * destructor FUN_00408c30, then frees the object if the flag is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00408c30(int);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_004093b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00408c30
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
