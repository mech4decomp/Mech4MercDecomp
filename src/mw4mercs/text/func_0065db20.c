/*
 * FUN_0065DB20 (762 B, 0x65DB20-0x65DE19) — __cdecl string formatting helper.
 * Builds strings via FUN_005DDAC0/FUN_005DDA40/FUN_005DDDB0/FUN_005DDBE0,
 * sprintf-style via IAT [0x76b420], and a series of string ops
 * (FUN_005CBD00). Returns al=1 on success path, al=0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_794d84[];   /* 0x794d84 - string */
extern char g_76b9a8[];   /* 0x76b9a8 - format string */
extern char g_788524[];   /* 0x788524 - format string */
extern char g_774288[];   /* 0x774288 - string */
extern char g_77e7d8[];   /* 0x77e7d8 - string */
extern char g_794d58[];   /* 0x794d58 - string */
extern char g_794d50[];   /* 0x794d50 - string */
extern char g_794d3c[];   /* 0x794d3c - string */
extern char g_794d68[];   /* 0x794d68 - string */
extern char g_794d78[];   /* 0x794d78 - string */
extern unsigned int g_7f25c0;   /* 0x7f25c0 - dword data */
extern void (*g_76b420)(void);   /* 0x76b420 - IAT */

extern void __cdecl FUN_005DDAC0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_005DDA40(void);
extern void __cdecl FUN_005DDDB0(void);
extern void __cdecl FUN_005DDBE0(void);
extern void __cdecl FUN_005CBD00(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_0065DB20(void)
{
    __asm {
        sub     esp, 0xac
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc0]
        push    edi
        push    offset g_794d84
        mov     ecx, esi
        call    FUN_005DDAC0
        mov     ebp, dword ptr [esp + 0xc0]
        mov     eax, dword ptr [ebp + 0x30]
        mov     ebx, dword ptr [g_76b420]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    offset g_76b9a8
        push    ecx
        call    ebx
        add     esp, 0xc
        lea     edx, [esp + 0x13]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005DDA40
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x18]
        call    FUN_005DDBE0
        push    offset g_794d78
        mov     ecx, esi
        call    FUN_005DDAC0
        mov     ecx, dword ptr [ebp + 0x2c]
        push    ecx
        mov     ecx, esi
        call    FUN_005DDAC0
        cmp     byte ptr [esp + 0xc8], 1
        jne     L_65DE0F
        push    offset g_794d68
        mov     ecx, esi
        call    FUN_005DDAC0
        mov     edx, dword ptr [ebp + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_00419480
        fld     dword ptr [esp + 0x24]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     eax, [esp + 0x38]
        push    offset g_788524
        push    eax
        call    ebx
        add     esp, 0x10
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_005DDA40
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x18]
        call    FUN_005DDBE0
        mov     eax, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, offset g_774288
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_774288
        push    ecx
        push    offset g_774288
        mov     ecx, esi
        call    FUN_005CBD00
        sub     esp, 8
        fld     dword ptr [esp + 0x30]
        fstp    qword ptr [esp]
        lea     ecx, [esp + 0x38]
        push    offset g_788524
        push    ecx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp + 0x13]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005DDA40
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x18]
        call    FUN_005DDBE0
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_774288
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_774288
        push    ecx
        push    offset g_774288
        mov     ecx, esi
        call    FUN_005CBD00
        fld     dword ptr [esp + 0x2c]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     edx, [esp + 0x38]
        push    offset g_788524
        push    edx
        call    ebx
        add     esp, 0x10
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_005DDA40
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x18]
        call    FUN_005DDBE0
        mov     edx, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77e7d8
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, offset g_77e7d8
        push    ecx
        push    offset g_77e7d8
        mov     ecx, esi
        call    FUN_005CBD00
        mov     eax, dword ptr [g_7f25c0]
        mov     ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jne     L_65DDE8
        mov     eax, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, offset g_794d58
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_794d58
        push    ecx
        push    offset g_794d58
        mov     ecx, esi
        call    FUN_005CBD00
        sub     esp, 8
        fld     dword ptr [ebp + 0x440]
        fstp    qword ptr [esp]
        lea     ecx, [esp + 0x38]
        push    offset g_788524
        push    ecx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp + 0x13]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005DDA40
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x18]
        call    FUN_005DDBE0
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_794d50
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_794d50
        push    ecx
        push    offset g_794d50
        mov     ecx, esi
        call    FUN_005CBD00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xac
        ret
L_65DDE8:
        mov     edx, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_794d3c
        repne scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, offset g_794d3c
        push    ecx
        push    offset g_794d3c
        mov     ecx, esi
        call    FUN_005CBD00
L_65DE0F:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xac
        ret
    }
}
