/*
 * FUN_10043c71 (291 B) — __stdcall.
 * Critical-section pool allocator: walks the 0x10076aa0 slot table,
 * initializes/enters critical sections (0x100491a8/0x10049068/
 * 0x10049064), allocates new slots via FUN_1003c3c5, calls
 * FUN_10043f78. Uses FUN_10039b19/FUN_10039b7a guards.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0[];  /* DAT_10076aa0 (dword array) */
extern unsigned int g_10076ba0;    /* DAT_10076ba0 */
extern void (__cdecl *g_100491a8)(void);  /* InitializeCriticalSection */
extern void (__cdecl *g_10049068)(void);  /* EnterCriticalSection */
extern void (__cdecl *g_10049064)(void);  /* LeaveCriticalSection */
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_10043f78(void);

__declspec(naked) void __stdcall func_10043c71(void)
{
    __asm {
        push    ecx
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x12
        or      edi, 0xffffffff
        call    FUN_10039b19
        xor     ebx, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     ebp, offset g_10076aa0
    L_c91:
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      L_d35
        lea     eax, [esi + 0x480]
    L_ca2:
        cmp     esi, eax
        jnc     L_d1a
        test    byte ptr [esi + 4], 1
        jnz     L_cf0
        cmp     dword ptr [esi + 8], 0
        jnz     L_cd5
        push    0x11
        call    FUN_10039b19
        cmp     dword ptr [esi + 8], 0
        pop     ecx
        jnz     L_ccd
        lea     eax, [esi + 0xc]
        push    eax
        call    dword ptr [g_100491a8]
        inc     dword ptr [esi + 8]
    L_ccd:
        push    0x11
        call    FUN_10039b7a
        pop     ecx
    L_cd5:
        lea     ebx, [esi + 0xc]
        push    ebx
        call    dword ptr [g_10049068]
        test    byte ptr [esi + 4], 1
        jz      L_cfd
        push    ebx
        call    dword ptr [g_10049064]
        mov     ebx, dword ptr [esp + 0x10]
    L_cf0:
        mov     eax, dword ptr [ebp]
        add     esi, 0x24
        add     eax, 0x480
        jmp     L_ca2
    L_cfd:
        or      dword ptr [esi], 0xffffffff
        mov     eax, esi
        sub     eax, dword ptr [ebp]
        push    0x24
        pop     ecx
        cdq
        idiv    ecx
        mov     edi, eax
        add     edi, dword ptr [esp + 0x14]
        cmp     edi, -1
        jnz     L_d83
        mov     ebx, dword ptr [esp + 0x10]
    L_d1a:
        add     dword ptr [esp + 0x14], 0x20
        add     ebp, 4
        inc     ebx
        cmp     ebp, offset g_10076ba0
        mov     dword ptr [esp + 0x10], ebx
        jl      L_c91
        jmp     L_d83
    L_d35:
        mov     esi, 0x480
        push    esi
        call    FUN_1003c3c5
        test    eax, eax
        pop     ecx
        jz      L_d83
        add     dword ptr [g_10076ba0], 0x20
        lea     ecx, [ebx * 4 + g_10076aa0]
        lea     edx, [eax + 0x480]
        mov     dword ptr [ecx], eax
        cmp     eax, edx
        jnc     L_d77
    L_d5b:
        and     byte ptr [eax + 4], 0
        or      dword ptr [eax], 0xffffffff
        and     dword ptr [eax + 8], 0
        mov     byte ptr [eax + 5], 0xa
        mov     edx, dword ptr [ecx]
        add     eax, 0x24
        add     edx, esi
        __emit 0xEB  /* jmp L_d5b (backward rel8): MSVC6 miscomputes EB E8; ref needs EB E4 (call-reloc between branch and target => off-by-4) */
        __emit 0xE4
    L_d77:
        shl     ebx, 5
        mov     edi, ebx
        push    edi
        call    FUN_10043f78
        pop     ecx
    L_d83:
        push    0x12
        call    FUN_10039b7a
        pop     ecx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        pop     ecx
        ret
    }
}
