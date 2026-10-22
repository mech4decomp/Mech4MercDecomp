/*
 * FUN_0074CB60 (452 B) — __stdcall, RET 0x20. Builds a diagnostic string
 * (via FUN_0074cb20 + sprintf-style IAT g_76b420) into a stack buffer, then
 * conditionally appends a set of fixed substrings (0x7ab858, 0x7ab848,
 * 0x7ab83c, 0x7ab834, 0x7ab828, 0x7ab81c, 0x7ab808, 0x7ab800) selected by
 * flag bits in the 0x58/0x5c stack args. Returns 0x8ba934.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074cb20(void);
extern int  *g_76b420;   /* IAT function pointer (sprintf-style) */

__declspec(naked) void __stdcall FUN_0074CB60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x8]
        sub     esp, 0x40
        push    ebx
        push    esi
        push    edi
        push    eax
        push    ecx
        call    FUN_0074cb20
        mov     edx, dword ptr [esp + 0x54]
        mov     ebx, dword ptr [g_76b420]
        push    eax
        push    edx
        push    0x7ab858
        push    0x8ba934
        call    ebx
        mov     eax, dword ptr [esp + 0x74]
        add     esp, 0x14
        test    eax, eax
        je      L_cbd4
        push    eax
        lea     eax, [esp + 0x10]
        push    0x7ab848
        push    eax
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0xc]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_cbd4:
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        je      L_cc18
        push    eax
        lea     eax, [esp + 0x10]
        push    0x7ab83c
        push    eax
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0xc]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_cc18:
        mov     edx, dword ptr [esp + 0x58]
        test    dh, 2
        je      L_cc4e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab834
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_cc4e:
        test    dl, 0x40
        je      L_cc80
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab828
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_cc80:
        test    dl, 1
        je      L_ccb2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab81c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_ccb2:
        test    dh, 4
        je      L_cce4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab808
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_cce4:
        test    dl, 0x20
        je      L_cd16
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab800
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba934
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_cd16:
        pop     edi
        pop     esi
        mov     eax, 0x8ba934
        pop     ebx
        add     esp, 0x40
        ret     0x20
    }
}
