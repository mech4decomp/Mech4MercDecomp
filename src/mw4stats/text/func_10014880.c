/*
 * FUN_10014880 (30 B, __thiscall, 1 param) - Scalar deleting destructor.
 * Calls FUN_100148a0 (the real destructor), then frees via FUN_1001ee22
 * if the low bit of the flag is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100148a0(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void __cdecl FUN_10014880(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100148a0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_14898
        push    esi
        call    FUN_1001ee22
        add     esp, 4
    L_14898:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
