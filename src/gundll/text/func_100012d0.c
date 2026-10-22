/*
 * FUN_100012D0 (375 B) - __stdcall, RET 0xC.  Registry writer: builds a
 * registry path (prefix string at 0x1005009c + arg1) into a local buffer,
 * RegCreateKeyExA (IAT 0x1004901c) under HKEY_CLASSES_ROOT, then writes
 * value records via RegSetValueExA (IAT 0x10049018) using arg2/arg3 and
 * module strings 0x1005008c/0x1005007c, plus a GetModuleFileNameA
 * (IAT 0x100491b8) path from global 0x10055020.  Closes keys via
 * RegCloseKey (IAT 0x10049014).  Returns E_FAIL (0x80004005) on failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern char g_1005009c[];        /* module data: registry path prefix string */
extern char g_1005008c[];        /* module data: registry subkey string */
extern char g_1005007c[];        /* module data: registry value name string */
extern unsigned int g_10055020;  /* module data */
extern void *g_1004901c;         /* IAT: RegCreateKeyExA */
extern void *g_10049018;         /* IAT: RegSetValueExA */
extern void *g_100491b4;         /* IAT: lstrlenA */
extern void *g_10049014;         /* IAT: RegCloseKey */
extern void *g_100491b8;         /* IAT: GetModuleFileNameA */

__declspec(naked) void __stdcall FUN_100012D0(void)
{
    __asm {
        sub     esp, 0xd8
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x18], 0x80004005
        xor     eax, eax
    L_f2:
        mov     cl, byte ptr [eax + g_1005009c]
        mov     byte ptr [esp + eax + 0x20], cl
        inc     eax
        cmp     cl, bl
        jne     L_f2
        mov     edi, dword ptr [esp + 0xec]
        xor     eax, eax
        mov     ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x20]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [g_1004901c]
        and     ecx, 3
        lea     eax, [esp + 0x1c]
        push    eax
        rep     movsb
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebx
        push    0x20006
        push    ebx
        push    ebx
        push    ebx
        lea     edx, [esp + 0x3c]
        push    edx
        push    0x80000000
        call    ebp
        test    eax, eax
        jne     L_1418
        cmp     dword ptr [esp + 0x14], ebx
        je      L_1418
        mov     edi, dword ptr [esp + 0xf0]
        mov     esi, dword ptr [g_100491b4]
        push    edi
        call    esi
        inc     eax
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [g_10049018]
        push    1
        push    ebx
        push    ebx
        push    eax
        call    edi
        test    eax, eax
        jne     L_1418
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    ebx
        push    0x20006
        push    ebx
        push    ebx
        push    ebx
        push    offset g_1005008c
        push    eax
        call    ebp
        test    eax, eax
        jne     L_1418
        cmp     dword ptr [esp + 0x10], ebx
        je      L_1427
        mov     edx, dword ptr [g_10055020]
        push    0x78
        lea     ecx, [esp + 0x74]
        push    ecx
        push    edx
        call    dword ptr [g_100491b8]
        test    eax, eax
        je      L_1418
        lea     eax, [esp + 0x70]
        push    eax
        call    esi
        mov     edx, dword ptr [esp + 0x10]
        inc     eax
        push    eax
        lea     ecx, [esp + 0x74]
        push    ecx
        push    1
        push    ebx
        push    ebx
        push    edx
        call    edi
        test    eax, eax
        jne     L_1418
        mov     ebp, dword ptr [esp + 0xf4]
        push    ebp
        call    esi
        inc     eax
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ebp
        push    1
        push    ebx
        push    offset g_1005007c
        push    eax
        call    edi
        test    eax, eax
        jne     L_1418
        mov     dword ptr [esp + 0x18], ebx
    L_1418:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_1427
        push    eax
        call    dword ptr [g_10049014]
    L_1427:
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        je      L_143a
        push    eax
        call    dword ptr [g_10049014]
    L_143a:
        mov     eax, dword ptr [esp + 8]
        add     esp, 0xd8
        ret     0xc
    }
}
