/*
 * FUN_006E3ED0 (230 B) — in-.text data block function (block 0x6E3E25).
 * Buffer insert/expand using IAT callback 0x76b134 and FUN_006e2970 /
 * FUN_006e2890 / FUN_006e2920.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2970(void);
extern void __cdecl FUN_006e2890(void);
extern void __cdecl FUN_006e2920(void);

extern void (__cdecl *g_0076b134)(void);   /* IAT @ 0x76b134 */

__declspec(naked) void FUN_006E3ED0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    ebx
        push    ebp
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x10], edi
        jge     L3EEC
        mov     dword ptr [esp + 0x18], 0
L3EEC:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jne     L3EF8
        xor     ebp, ebp
        jmp     L3F01
L3EF8:
        push    eax
        call    dword ptr [g_0076b134]
        mov     ebp, eax
L3F01:
        test    ebp, ebp
        mov     eax, dword ptr [edi]
        mov     ebx, dword ptr [eax - 8]
        jle     L3FAB
        mov     ecx, edi
        call    FUN_006e2970
        cmp     dword ptr [esp + 0x18], ebx
        jle     L3F1F
        mov     dword ptr [esp + 0x18], ebx
L3F1F:
        push    esi
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi - 4]
        add     ebx, ebp
        cmp     eax, ebx
        jge     L3F5D
        lea     ecx, [esi - 0xc]
        mov     dword ptr [esp + 0x10], ecx
        push    ebx
        mov     ecx, edi
        call    FUN_006e2890
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + 4]
        mov     edi, dword ptr [edi]
        mov     eax, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, edx
        push    ecx
        call    FUN_006e2920
        mov     edi, dword ptr [esp + 0x14]
L3F5D:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, ebx
        sub     ecx, ebp
        sub     ecx, edx
        inc     ecx
        lea     esi, [eax + edx]
        lea     edi, [eax + ebp]
        add     edi, edx
        mov     edx, ecx
        shr     ecx, 2
        mov     dword ptr [esp + 0x14], esi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     esi
        pop     edi
        mov     dword ptr [eax - 8], ebx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     8
L3FAB:
        pop     edi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     8
    }
}
