/*
 * FUN_00746B30 (279 B) — CPUID feature-detection routine.
 *
 * Detects CPUID support via the EFLAGS.ID bit toggle, then queries CPUID
 * leaves 0/1/2/0x80000000/0x80000001 and stores the results into a set of
 * global feature flags.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_858a8c;
extern int  g_858a9c;
extern int  g_858a98;
extern int  g_858a94;
extern int  g_858a78;
extern int  g_858a7c;
extern int  g_858a80;
extern int  g_858a84;
extern char g_858a88;
extern int  g_858a68;
extern int  g_858a6c;
extern int  g_858a70;
extern int  g_858a74;
extern int  g_858a90;
extern int  g_858a58;
extern int  g_858a5c;
extern int  g_858a60;
extern int  g_858a64;

__declspec(naked) void __stdcall FUN_00746B30(void)
{
    __asm {
        push    ebx
        push    eax
        push    ebx
        push    ecx
        push    edx
        mov     dword ptr [g_858a8c], 0x0
        mov     dword ptr [g_858a9c], 0x0
        mov     dword ptr [g_858a98], 0x0
        mov     dword ptr [g_858a94], 0x0
        pushfd
        pop     eax
        mov     ebx, eax
        xor     eax, 0x200000
        push    eax
        popfd
        pushfd
        pop     eax
        cmp     eax, ebx
        jz      L_746c37
        mov     dword ptr [g_858a9c], 0x1
        xor     eax, eax
        cpuid
        mov     [g_858a78], eax
        mov     dword ptr [g_858a7c], ebx
        mov     dword ptr [g_858a80], edx
        mov     dword ptr [g_858a84], ecx
        mov     byte ptr [g_858a88], 0x0
        mov     eax, 0x1
        cpuid
        mov     [g_858a68], eax
        mov     dword ptr [g_858a6c], ebx
        mov     dword ptr [g_858a70], ecx
        mov     dword ptr [g_858a74], edx
        test    edx, 0x2000000
        jz      L_746bce
        mov     dword ptr [g_858a90], 0x1
L_746bce:
        test    edx, 0x10
        jz      L_746be0
        mov     dword ptr [g_858a94], 0x1
L_746be0:
        test    edx, 0x800000
        jz      L_746bf2
        mov     dword ptr [g_858a98], 0x1
L_746bf2:
        mov     eax, 0x2
        cpuid
        mov     [g_858a58], eax
        mov     dword ptr [g_858a5c], ebx
        mov     dword ptr [g_858a60], ecx
        mov     dword ptr [g_858a64], edx
        mov     eax, 0x80000000
        cpuid
        cmp     eax, 0x80000000
        jbe     L_746c37
        mov     eax, 0x80000001
        cpuid
        test    edx, 0x80000000
        jz      L_746c37
        mov     dword ptr [g_858a8c], 0x1
L_746c37:
        pop     edx
        pop     ecx
        pop     ebx
        pop     eax
        mov     dword ptr [g_858a94], 0x0
        pop     ebx
        ret
    }
}
