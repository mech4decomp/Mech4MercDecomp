/*
 * FUN_10002aa0 (70 B) - __stdcall, RET 0x4. Object teardown: checks the
 * 0x28 flag and the 0x3c handle, frees via FUN_10008980, resets via
 * FUN_10005a90 (thiscall), sets 0x40 = 3.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008980(void);   /* rel32 call */
extern void __cdecl FUN_10005a90(void);   /* rel32 call (thiscall, this in ECX) */

__declspec(naked) void __stdcall FUN_10002aa0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        jnz     L_ab5
        mov     eax, 0xc1120008
        pop     esi
        ret     4
L_ab5:
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jnz     L_ac5
        mov     eax, 0xc1120c08
        pop     esi
        ret     4
L_ac5:
        push    eax
        call    FUN_10008980
        mov     ecx, esi
        mov     dword ptr [esi + 0x3c], 0
        call    FUN_10005a90
        mov     dword ptr [esi + 0x40], 3
        xor     eax, eax
        pop     esi
        ret     4
    }
}
