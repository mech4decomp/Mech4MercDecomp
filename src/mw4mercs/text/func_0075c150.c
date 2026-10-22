/*
 * FUN_0075C150 (233 B) — __stdcall, RET 0x10 (4 dword params). Texture loader
 * that inspects the filename suffix via _stricmp and dispatches to the
 * .bmp/.jpg/.tga loaders (FUN_007362D0 / FUN_00735FC0 / FUN_0072E000).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aadac;            /* DAT_008aadac */
extern int (__cdecl *g_stricmp)(const char *, const char *); /* IAT 0x76b2ac */
extern char g_str_79e268[];     /* ".bmp" */
extern char g_str_79e260[];     /* ".jpg" */
extern char g_str_7700ac[];     /* ".tga" */
extern char g_str_7af8dc[];     /* "Error: filename suffix is invald %s" */

extern void __cdecl FUN_007362D0(void);
extern void __cdecl FUN_00735FC0(void);
extern void __cdecl FUN_0072E000(void);
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void __stdcall FUN_0075C150(char *param_1, int param_2, int param_3, int param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        mov     edi, dword ptr [g_stricmp]
        not     ecx
        dec     ecx
        lea     esi, [ecx + ebx - 0x4]
        push    offset g_str_79e268
        push    esi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], eax
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_c1ac
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    0x1
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        lea     edx, [ebp - 0x8]
        push    edx
        push    eax
        push    ecx
        push    ebx
        call    FUN_007362D0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_c1ac:
        mov     eax, dword ptr [g_8aadac]
        test    eax, eax
        jz      L_c1e9
        push    offset g_str_79e260
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_c1e9
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    0x1
        lea     eax, [ebp - 0x4]
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [ebp - 0x8]
        push    ecx
        push    edx
        push    eax
        push    ebx
        call    FUN_00735FC0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_c1e9:
        push    offset g_str_7700ac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_c21d
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    0x1
        lea     edx, [ebp - 0x4]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        lea     eax, [ebp - 0x8]
        push    eax
        push    ecx
        push    edx
        push    ebx
        call    FUN_0072E000
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_c21d:
        push    ebx
        push    offset g_str_7af8dc
        call    FUN_006FAB90
        add     esp, 0x8
        test    eax, eax
        jz      L_c230
        int     3
L_c230:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
