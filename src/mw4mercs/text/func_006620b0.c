/*
 * FUN_006620b0 (113 B) — __cdecl, returns float (ST0). ABL helper: queries two
 * virtual methods (0x38/0x40), reads a float at [obj+0x2bc] from each, and
 * returns _DAT_0076d064 or _DAT_0076c5b0 depending on the comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d064;

__declspec(naked) void FUN_006620b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x38]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     edi, eax
        call    dword ptr [edx + 0x40]
        test    edi, edi
        mov     esi, eax
        mov     dword ptr [esp + 0xc], 0x0
        jz      L_620e7
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x2bc]
        mov     dword ptr [esp + 0xc], ecx
L_620e7:
        test    esi, esi
        fld     dword ptr [g_0076c5b0]
        jz      L_62102
        mov     edx, dword ptr [esi + 0x78]
        fstp    st(0)
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x2bc]
L_62102:
        fld     dword ptr [esp + 0xc]
        pop     edi
        fcomp
        pop     esi
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6211a
        fld     dword ptr [g_0076d064]
        ret
L_6211a:
        fld     dword ptr [g_0076c5b0]
        ret
    }
}
