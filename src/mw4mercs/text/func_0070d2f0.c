/*
 * FUN_0070d2f0 (114 B) — queries a locale/region string via FUN_0074b640 and
 * sets g_0085af74 = 1 if it case-insensitively matches "REDMOND" or
 * "NORTHAMERICA", else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0085af74;          /* 0x0085af74 */
extern void *g_76b2ac;           /* IAT: _stricmp */

extern char g_7a1ae4[];          /* 0x7a1ae4 "REDMOND" */
extern char g_7a1ad4[];          /* 0x7a1ad4 "NORTHAMERICA" */

extern void __cdecl FUN_0074b640(void);

__declspec(naked) void FUN_0070d2f0(void)
{
    __asm {
        sub     esp, 0x210
        mov     eax, 0x104
        push    esi
        mov     dword ptr [esp + 0x4], eax
        mov     dword ptr [esp + 0x8], eax
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x11c]
        push    eax
        call    FUN_0074b640
        mov     esi, dword ptr [g_76b2ac]   /* _stricmp */
        lea     ecx, [esp + 0xc]
        push    offset g_7a1ae4
        push    ecx
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L353
        lea     edx, [esp + 0xc]
        push    offset g_7a1ad4
        push    edx
        call    esi
        add     esp, 0x8
        test    eax, eax
        mov     byte ptr [g_0085af74], 0x0
        jnz     L35a
L353:
        mov     byte ptr [g_0085af74], 0x1
L35a:
        pop     esi
        add     esp, 0x210
        ret
    }
}
