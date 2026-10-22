/*
 * FUN_00747210 (135 B) — __fastcall (ECX = param_1, EDX = param_2), RET.
 *
 * Converts an ANSI string (param_1) to a wide string, allocating the
 * output buffer via malloc and storing it in *param_2. Returns an
 * HRESULT-style code (0 on success, 0x8007000e on alloc failure, or a
 * GetLastError-derived code).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__cdecl *g_76b294)(unsigned int);
extern int (__stdcall *g_76b130)(unsigned int, unsigned int, const char *, int, void *, int);
extern unsigned int (__stdcall *g_76b1f8)(void);
extern void (__cdecl *g_76b2d0)(void *);

__declspec(naked) void __fastcall FUN_00747210(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        test    ebx, ebx
        push    esi
        push    edi
        mov     ebp, edx
        jnz     L1
        mov     dword ptr [ebp], ecx
L3:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
L1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        inc     esi
        lea     eax, [esi + esi*1]
        push    eax
        call    dword ptr [g_76b294]
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp], edi
        jnz     L2
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret
L2:
        push    esi
        push    edi
        push    esi
        push    ebx
        push    0x0
        push    0x0
        call    dword ptr [g_76b130]
        test    eax, eax
        jnz     L3
        call    dword ptr [g_76b1f8]
        push    edi
        mov     esi, eax
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [ebp], 0x0
        jz      L3
        and     esi, 0xffff
        or      esi, 0x80070000
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
