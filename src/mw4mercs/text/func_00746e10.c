/*
 * FUN_00746E10 (281 B) — Mutex + CPUID feature-detection routine.
 *
 * Creates a named mutex, waits on it, then detects Intel CPU features via
 * CPUID and stores results into global flags. Returns an error code.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8b27e0;
extern int  g_8b27e4;
extern char g_8b27e8;
extern void (__stdcall *g_76b21c)(void);   /* CreateMutexA IAT */
extern void (__stdcall *g_76b0f4)(void);   /* WaitForSingleObject IAT */
extern void (__stdcall *g_76b0ec)(void);   /* CloseHandle IAT */

extern int __cdecl FUN_0074BB40(void);
extern void __cdecl FUN_00746F30(void);

__declspec(naked) void __stdcall FUN_00746E10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        cmp     dword ptr [g_8b27e0], 0x0
        jz      L_746e27
        or      eax, 0xffffffff
        jmp     L_746f24
L_746e27:
        push    0x7aa2c0
        push    0x0
        push    0x0
        call    dword ptr [g_76b21c]
        mov     [g_8b27e0], eax
        cmp     dword ptr [g_8b27e0], 0x0
        jnz     L_746e4e
        mov     eax, 0xfffffffd
        jmp     L_746f24
L_746e4e:
        push    0x0
        mov     eax, [g_8b27e0]
        push    eax
        call    dword ptr [g_76b0f4]
        cmp     eax, 0x102
        jnz     L_746e84
        mov     ecx, dword ptr [g_8b27e0]
        push    ecx
        call    dword ptr [g_76b0ec]
        mov     dword ptr [g_8b27e0], 0x0
        mov     eax, 0xfffffffe
        jmp     L_746f24
L_746e84:
        pushfd
        pop     eax
        mov     ebx, eax
        xor     eax, 0x200000
        push    eax
        popfd
        pushfd
        pop     eax
        cmp     eax, ebx
        jz      L_746f1a
        mov     eax, 0x0
        cpuid
        cmp     ebx, 0x756e6547
        jnz     L_746f1a
        cmp     edx, 0x49656e69
        jnz     L_746f1a
        cmp     ecx, 0x6c65746e
        jnz     L_746f1a
        cmp     eax, 0x1
        jl      L_746f1a
        mov     eax, 0x1
        cpuid
        lea     ebx, [g_8b27e8]
        and     eax, 0xf00
        cmp     eax, 0x600
        jz      L_746eea
        cmp     eax, 0x500
        jnz     L_746f1a
        and     edx, 0x800000
        jz      L_746f1a
        mov     byte ptr [ebx], 0x1
        jmp     L_746eed
L_746eea:
        mov     byte ptr [ebx], 0x2
L_746eed:
        call    FUN_0074BB40
        mov     [g_8b27e4], eax
        cmp     dword ptr [g_8b27e4], -0x1
        jnz     L_746f16
        mov     dword ptr [g_8b27e4], 0x0
        call    FUN_00746F30
        mov     eax, 0xfffffffa
        jmp     L_746f24
L_746f16:
        xor     eax, eax
        jmp     L_746f24
L_746f1a:
        call    FUN_00746F30
        mov     eax, 0xfffffffb
L_746f24:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
