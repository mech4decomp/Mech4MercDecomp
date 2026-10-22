/*
 * FUN_5e0056b0 (208 B) — switch over param_2 (1..3). Calls FUN_5e012210
 * to fill a 0x40-byte local buffer, copies 0x10 dwords back into
 * param_1+offset, then calls a per-case helper. Returns 0x80070057 on
 * bad args.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e012210(void);
extern void __cdecl FUN_5e003950(void);
extern void __cdecl FUN_5e003960(void);
extern void __cdecl FUN_5e003970(void);

__declspec(naked) void __stdcall FUN_5e0056b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x40
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jnz     L1
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x40
        ret     0xc
    L1:
        mov     ecx, dword ptr [esp + 0x54]
        dec     ecx
        jz      L_case1
        dec     ecx
        jz      L_case2
        dec     ecx
        jz      L_case3
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x40
        ret     0xc
    L_case3:
        mov     ebx, dword ptr [esp + 0x50]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edi, [ebx + 0x440c]
        push    edi
        push    eax
        call    FUN_5e012210
        mov     ecx, 0x10
        lea     esi, [esp + 0xc]
        rep movsd
        mov     ecx, ebx
        call    FUN_5e003970
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x40
        ret     0xc
    L_case2:
        mov     ebx, dword ptr [esp + 0x50]
        lea     edx, [esp + 0xc]
        push    edx
        lea     edi, [ebx + 0x43cc]
        push    edi
        push    eax
        call    FUN_5e012210
        mov     ecx, 0x10
        lea     esi, [esp + 0xc]
        rep movsd
        mov     ecx, ebx
        call    FUN_5e003960
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x40
        ret     0xc
    L_case1:
        mov     ebx, dword ptr [esp + 0x50]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edi, [ebx + 0x438c]
        push    edi
        push    eax
        call    FUN_5e012210
        mov     ecx, 0x10
        lea     esi, [esp + 0xc]
        rep movsd
        mov     ecx, ebx
        call    FUN_5e003950
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x40
        ret     0xc
    }
}
