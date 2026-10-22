/*
 * FUN_10014360 (30 B, __thiscall, 1 param) - Scalar deleting destructor.
 * Calls FUN_10014380 (the real destructor), then frees via FUN_1001ee22
 * if the low bit of the flag is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10014380(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void __cdecl FUN_10014360(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10014380
        test    byte ptr [esp + 0x8], 0x1
        jz      L_14378
        push    esi
        call    FUN_1001ee22
        add     esp, 4
    L_14378:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
