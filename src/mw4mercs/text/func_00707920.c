/*
 * FUN_00707920 (74 B) — reads the "DirectPlayPort" registry value via
 * FUN_00708930; if not present, writes it back via FUN_007089b0. Returns
 * the read value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00708930(int, int *, int *, char *);
extern void __cdecl FUN_007089b0(int, int, int);

__declspec(naked) void FUN_00707920(void)
{
    __asm {
        sub     esp, 0x8
        push    0x0
        lea     eax, [esp+0x8]
        push    eax
        lea     ecx, [esp+0x8]
        push    ecx
        push    0x7a13d4
        mov     dword ptr [esp+0x14], 0x4
        call    FUN_00708930
        mov     eax, dword ptr [esp+0x4]
        test    eax, eax
        jnz     L_962
        push    0x4
        lea     edx, [esp+0x4]
        push    edx
        push    0x7a13d4
        mov     dword ptr [esp+0xc], 0x0
        call    FUN_007089b0
L_962:
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0x8
        ret
    }
}
