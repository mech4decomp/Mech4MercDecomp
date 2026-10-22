/*
 * FUN_0065D91D (403 B, true extent 0x65D91D-0x65DAB0) — __cdecl string
 * formatting/parsing helper. Builds strings via FUN_005CB1C0/FUN_00563480,
 * sprintf-style via IAT [0x76b420], and a series of string ops. Returns
 * al=1 on success path, al=0 on failure.
 *
 * NOTE: the enclosing data block 0x65D91D (506 B) also contains a second
 * function at 0x65DAB0 (reported as extra, not transcribed here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_794d2c[];   /* 0x794d2c - string */
extern char g_77a388[];   /* 0x77a388 - string */
extern char g_76b9a8[];   /* 0x76b9a8 - format string */
extern void (*g_76b420)(void);   /* 0x76b420 - IAT */

extern void __cdecl FUN_005CB1C0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005DDA40(void);
extern void __cdecl FUN_0065E1C0(void);
extern void __cdecl FUN_005CBD00(void);
extern void __cdecl FUN_005DDDB0(void);
extern void __cdecl FUN_0065E220(void);
extern void __cdecl FUN_005DDBE0(void);
extern void __cdecl FUN_0065E2A0(void);
extern void __cdecl FUN_005CB3D0(void);
extern void __cdecl FUN_005CBE50(void);
extern void __cdecl FUN_006FC4D0(void);
extern void __cdecl FUN_006FB7C0(void);

__declspec(naked) void FUN_0065D91D(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0x9c
        push    ebx
        push    edi
        lea     eax, [esp + 0xb]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005CB1C0
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_794d2c
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_794d2c
        push    ecx
        push    offset g_794d2c
        lea     ecx, [esp + 0x28]
        call    FUN_00563480
        mov     edx, dword ptr [esp + 0xa8]
        push    edx
        lea     eax, [esp + 0x44]
        push    offset g_76b9a8
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_005DDA40
        mov     edx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, edx
        sub     eax, ebx
        cmp     eax, 4
        jae     L_65DA50
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
L_65D9A8:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77a388
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        mov     eax, esi
        lea     ecx, [esp + 0x13]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     eax, ebx
        add     eax, edx
        push    eax
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0065E1C0
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        lea     eax, [esi + g_77a388]
        push    eax
        push    offset g_77a388
        lea     ecx, [esp + 0x3c]
        call    FUN_005CBD00
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_005DDDB0
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_0065E220
        lea     ecx, [esp + 0x30]
        call    FUN_005DDBE0
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        push    ebp
        push    edx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0065E2A0
        lea     ecx, [esp + 0x3c]
        call    FUN_005CB3D0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x18]
        mov     ecx, edx
        sub     ecx, ebx
        cmp     ecx, 4
        jb      L_65D9A8
        pop     esi
        pop     ebp
L_65DA50:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    edx
        push    ebx
        lea     ecx, [esp + 0x28]
        call    FUN_005CBE50
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    FUN_006FC4D0
        cmp     al, 1
        pop     edi
        pop     ebx
        jne     L_65DA95
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        call    FUN_006FB7C0
        lea     ecx, [esp + 8]
        call    FUN_005CB3D0
        lea     ecx, [esp + 0x14]
        call    FUN_005CB3D0
        mov     al, 1
        add     esp, 0x9c
        ret
L_65DA95:
        lea     ecx, [esp + 8]
        call    FUN_005CB3D0
        lea     ecx, [esp + 0x14]
        call    FUN_005DDBE0
        xor     al, al
        add     esp, 0x9c
        ret
    }
}
