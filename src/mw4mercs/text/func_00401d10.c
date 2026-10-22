/*
 * FUN_00401d10 (301 B) — builds a "m4c"+name+".m4c" filename, opens it
 * (FUN_006fc400/600/580), and if the flag is set writes connection info
 * to options.ini via a chain of __thiscall helpers. __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc600(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);

extern char g_m4c[];              /* 0x76b78c "m4c" */
extern char g_dotm4c[];           /* 0x76b784 ".m4c" */
extern char g_options_ini[];      /* 0x77826c "options.ini" */
extern char g_network_options[];  /* 0x778278 "Network Options" */
extern char g_default_conn[];     /* 0x7782d8 "DefaultConnection" */

__declspec(naked) void __cdecl FUN_00401d10(int a, char *b, char c)
{
    __asm {
        sub     esp, 0x154
        push    ebx
        mov     ebx, dword ptr [esp + 0x160]
        test    ebx, ebx
        jz      L1E35
        cmp     byte ptr [ebx], 0x0
        jz      L1E35
        or      ecx, -1
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, offset g_m4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x64]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x64]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        or      ecx, -1
        mov     edi, offset g_dotm4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x64]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        push    eax
        mov     ecx, ebp
        and     ecx, 0x3
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x68]
        rep     movsb
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_006fc400
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        jz      L1DEB
        mov     edx, dword ptr [esp + 0x15c]
        push    0x30c
        push    edx
        push    eax
        call    FUN_006fc600
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_006fc580
L1DEB:
        mov     al, byte ptr [esp + 0x164]
        test    al, al
        jz      L1E35
        push    0x1
        push    0x0
        push    offset g_options_ini
        lea     ecx, [esp + 0x14]
        call    FUN_0040dca0
        push    offset g_network_options
        lea     ecx, [esp + 0xc]
        call    FUN_0040eda0
        push    ebx
        push    offset g_default_conn
        mov     ecx, eax
        call    FUN_00411c40
        lea     ecx, [esp + 0x8]
        call    FUN_0040e4a0
        lea     ecx, [esp + 0x8]
        call    FUN_0040de20
L1E35:
        pop     ebx
        add     esp, 0x154
        ret
    }
}
