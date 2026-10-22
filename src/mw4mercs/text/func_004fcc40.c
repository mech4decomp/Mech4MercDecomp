/*
 * FUN_004FCC40 (137 B) — NameTable lookup by string: scans up to 0x12
 * tables, each with up to N entries, comparing entry names (at +0x10)
 * case-insensitively via _stricmp. Returns pointer to matching entry
 * (base + table*8 + idx*0x1c) or 0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_0076b2ac)(const char *, const char *); /* _stricmp IAT */

__declspec(naked) void __fastcall FUN_004fcc40(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        jz      l_ret0
        mov     dword ptr [esp + 0x10], 0
        lea     ebp, [ecx + 0x10]
    l_outer:
        mov     ebx, dword ptr [ebp + 4]
        xor     edi, edi
        test    ebx, ebx
        jle     l_next
        mov     esi, dword ptr [ebp]
        add     esi, 0x10
    l_inner:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        test    eax, eax
        jz      l_found
        inc     edi
        add     esi, 0x1c
        cmp     edi, ebx
        jl      l_inner
    l_next:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 8
        cmp     eax, 0x12
        mov     dword ptr [esp + 0x10], eax
        jl      l_outer
    l_ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 8
        ret     4
    l_found:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + ecx*8 + 0x10]
        lea     edx, [edi*8 + 0]
        sub     edx, edi
        pop     edi
        pop     esi
        pop     ebp
        lea     eax, [eax + edx*4]
        pop     ebx
        add     esp, 8
        ret     4
    }
}
