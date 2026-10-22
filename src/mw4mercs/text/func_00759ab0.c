/*
 * FUN_00759AB0 (142 B) — __thiscall, RET 0xC (3 stack params).
 *
 * Builds "Software\ODBC\ODBC.INI\%s" via wsprintfA into a 256-byte local,
 * calls FUN_00708A60(local, param_3, 0). If it returns NULL, sprintf an
 * error into this+0xE and return 0. Otherwise strcpy the returned string
 * into param_4 and return 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entries */
extern void *g_iat_76b4f8;   /* 0x0076B4F8 wsprintfA */
extern void *g_iat_76b420;   /* 0x0076B420 sprintf */

extern void __cdecl FUN_00708a60(void);

__declspec(naked) void func_00759ab0(void)
{
    __asm {
        sub     esp, 0x100
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10c]
        push    edi
        lea     eax, [esp + 0xc]
        push    0x7aef2c
        push    eax
        mov     esi, ecx
        call    dword ptr [g_iat_76b4f8]
        mov     ecx, dword ptr [esp + 0x11c]
        add     esp, 0xc
        push    0x0
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_00708a60
        test    eax, eax
        jnz     L_b0d
        push    edi
        push    0x7aeef8
        add     esi, 0xe
        push    esi
        call    dword ptr [g_iat_76b420]
        add     esp, 0xc
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x100
        ret     0xc
L_b0d:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x114]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x100
        ret     0xc
    }
}
