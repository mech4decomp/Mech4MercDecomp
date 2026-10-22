/*
 * FUN_00665ce0 (92 B) — ABL list sum: iterate a list (0x370 offset)
 * accumulating field +0x14 floats; return the sum.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(int);
extern int __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00665ce0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        add     eax, 0x370
        push    eax
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x4], 0x0
        call    FUN_00416bc0
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x4], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        jz      L_665d2b
L_665d13:
        __emit 0xD9 /* __emit: MSVC6 drops 00 disp on fld [esp+0] (D9 04 24 vs ref D9 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        lea     ecx, [esp + 0x4]
        fadd    dword ptr [eax + 0x14]
        __emit 0xD9 /* __emit: MSVC6 drops 00 disp on fstp [esp+0] (D9 1C 24 vs ref D9 5C 24 00) */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_665d13
L_665d2b:
        lea     ecx, [esp + 0x4]
        call    FUN_00416c60
        __emit 0xD9 /* __emit: MSVC6 drops 00 disp on fld [esp+0] (D9 04 24 vs ref D9 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0x18
        ret
    }
}
