/*
 * FUN_0070ceb0 (396 B) — __cdecl, no params, plain RET.
 * Registry/string setup: gets a DC, reads a registry value, and builds a
 * string buffer at DAT_0085af78 via repne scasb / rep movsd / rep movsb
 * string copies from several sources.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00745450(void);
extern void *__cdecl FUN_0071f230(void);
extern void __cdecl FUN_0070d040(void);

extern int   g_00858c00;   /* HDC */
extern int   g_0076b484;   /* GetDC IAT */
extern int   g_007b7014;
extern int   g_0076b320;   /* strncpy IAT */
extern int   g_0076b014;   /* RegOpenKeyA IAT */
extern char  g_0085ae74;
extern int   g_0076b018;   /* RegQueryValueExA IAT */
extern int   g_0076b00c;   /* RegCloseKey IAT */
extern char *g_00858978;
extern char *g_00858974;

__declspec(naked) void __cdecl FUN_0070ceb0(void)
{
    __asm {
        mov     eax, dword ptr [g_00858c00]
        sub     esp, 0x30
        test    eax, eax
        jnz     L_cec9
        push    0x0
        call    dword ptr [g_0076b484]
        mov     dword ptr [g_00858c00], eax
L_cec9:
        call    FUN_00745450
        push    0x1f
        mov     dword ptr [esp + 0x4], 0x1f
        mov     dword ptr [g_007b7014], 0x1
        call    FUN_0071f230
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        call    dword ptr [g_0076b320]
        add     esp, 0xc
        lea     ecx, [esp + 0x4]
        push    ecx
        push    0x858e2c
        push    0x80000001
        call    dword ptr [g_0076b014]
        test    eax, eax
        __emit 0xC7  /* __emit: MSVC6 drops the 00 disp byte for mov dword ptr [esp],imm (C7 04 24); ref needs C7 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xFF
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     byte ptr [g_0085ae74], 0x0
        jnz     L_cf4a
        mov     ecx, dword ptr [esp + 0x4]
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp byte for lea edx,[esp] (8D 14 24); ref needs 8D 54 24 00 */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        push    0x85ae74
        lea     eax, [esp + 0x10]
        push    eax
        push    0x0
        push    0x7a1a78
        push    ecx
        call    dword ptr [g_0076b018]
        mov     edx, dword ptr [esp + 0x4]
        push    edx
        call    dword ptr [g_0076b00c]
L_cf4a:
        or      ecx, 0xffffffff
        push    esi
        push    edi
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x85af78
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x85af78
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x85ae74
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x85af78
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x85af78
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [g_00858978]
        test    edi, edi
        jz      L_d023
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x85af78
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_d023:
        mov     eax, dword ptr [g_00858974]
        test    eax, eax
        pop     edi
        pop     esi
        jz      L_d038
        cmp     byte ptr [eax], 0x0
        jz      L_d038
        call    FUN_0070d040
L_d038:
        add     esp, 0x30
        ret
    }
}
