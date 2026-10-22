/*
 * FUN_00411df0 (25 B) — container/loader helper.
 * Creates an entry by name (FUN_00411b00), then finalizes via FUN_0041f290.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f290(void);

__declspec(naked) void FUN_00411df0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_00411b00
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f290
        ret     0x8
    }
}
