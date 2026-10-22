/*
 * FUN_004dd360 (78 B) — __thiscall (RET 0x4). Searches an 8-byte-stride
 * array (count at +0x14, base at +0x18) for an entry whose name (at
 * +0x4) matches param_1 via _stricmp (IAT 0x0076b2ac). Returns the
 * matching element pointer or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_0076b2ac)(const char *a, const char *b);

__declspec(naked) void FUN_004dd360(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x14]
        push    ebp
        push    esi
        xor     esi, esi
        test    ebx, ebx
        push    edi
        jle     L_notfound
        mov     ecx, dword ptr [ecx + 0x18]
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x10], ecx
        lea     edi, [ecx + 0x4]
L_loop:
        mov     eax, dword ptr [edi]
        push    eax
        push    ebp
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_found
        inc     esi
        add     edi, 0x8
        cmp     esi, ebx
        jl      L_loop
L_notfound:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x4
L_found:
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        lea     eax, [ecx + esi*0x8]
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
