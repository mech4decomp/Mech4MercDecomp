/*
 * FUN_004d5ed0 (81 B) — __thiscall string-table lookup. Iterates the
 * 12-byte entries of this->field18 (count this->field14), comparing
 * entry->name against param_1 via _stricmp (IAT 0x0076b2ac). Returns the
 * matching entry pointer, or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_0076b2ac)(const char *, const char *);

__declspec(naked) void FUN_004d5ed0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx+0x14]
        push    ebp
        push    esi
        xor     esi, esi
        test    ebx, ebx
        push    edi
        jle     L_5f05
        mov     ecx, dword ptr [ecx+0x18]
        mov     ebp, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], ecx
        lea     edi, [ecx+4]
L_5eec:
        mov     eax, dword ptr [edi]
        push    eax
        push    ebp
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        test    eax, eax
        jz      L_5f0f
        inc     esi
        add     edi, 0xc
        cmp     esi, ebx
        jl      L_5eec
L_5f05:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     4
L_5f0f:
        mov     edx, dword ptr [esp+0x10]
        pop     edi
        lea     ecx, [esi+esi*2]
        pop     esi
        pop     ebp
        lea     eax, [edx+ecx*4]
        pop     ebx
        pop     ecx
        ret     4
    }
}
