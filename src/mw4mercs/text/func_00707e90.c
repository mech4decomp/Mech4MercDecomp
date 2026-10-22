/*
 * FUN_00707e90 (69 B) — gosScript timing helper: returns a double ratio
 * computed from a 64-bit counter difference, or a fallback constant when
 * the counter is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858b58;
extern int g_00858b5c;
extern int g_00858b30;
extern int g_00858b34;
extern double g_0076d970;
extern void __cdecl FUN_00707f50(void);

__declspec(naked) double FUN_00707e90(void)
{
    __asm {
        mov     eax, dword ptr [g_00858b58]
        mov     ecx, dword ptr [g_00858b5c]
        sub     esp, 8
        or      eax, ecx
        jz      L1
        call    FUN_00707f50
        sub     eax, dword ptr [g_00858b30]
        sbb     edx, dword ptr [g_00858b34]
        __emit 0x89   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp+4], edx
        __emit 0xDF   /* __emit: MSVC6 drops the 00 disp byte for fild [esp+0] */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fild    qword ptr [g_00858b58]
        fdivp   st(1), st(0)
        add     esp, 8
        ret
    L1:
        fld     qword ptr [g_0076d970]
        add     esp, 8
        ret
    }
}
