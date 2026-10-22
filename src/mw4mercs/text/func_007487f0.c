/*
 * FUN_007487f0 (168 B) — RET 0x10 (4 stack params). Searches a global
 * linked list for a node matching several fields of param_2; on a match
 * unlinks it, stores [node+0x80] to *param_3, frees it, and returns 0.
 * Otherwise falls back to FUN_00735230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_006f4230(void *ptr);

/* data */
extern int g_8b2520;    /* 0x008B2520 */
extern int g_8b79e4;    /* 0x008B79E4 */

__declspec(naked) void func_007487f0(void)
{
    __asm {
        test    dword ptr [g_8b2520], 0x400000
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        jz      l_fallback
        mov     eax, dword ptr [g_8b79e4]
        xor     edx, edx
        test    eax, eax
        jz      l_fallback
        mov     esi, dword ptr [ecx + 0x8]

    l_loop:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     l_next
        mov     edi, dword ptr [ecx + 0xc]
        cmp     edi, dword ptr [eax + 0x10]
        jnz     l_next
        mov     edi, dword ptr [ecx + 0x18]
        cmp     edi, dword ptr [eax + 0x1c]
        jnz     l_next
        mov     edi, dword ptr [eax + 0x6c]
        xor     edi, dword ptr [ecx + 0x68]
        test    edi, 0x30000800
        jnz     l_next
        mov     edi, dword ptr [ecx + 0x4c]
        cmp     edi, dword ptr [eax + 0x50]
        jnz     l_next
        mov     edi, dword ptr [ecx + 0x58]
        cmp     edi, dword ptr [eax + 0x5c]
        jnz     l_next
        mov     edi, dword ptr [ecx + 0x64]
        cmp     edi, dword ptr [eax + 0x68]
        jz      l_found

    l_next:
        mov     edx, eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     l_loop

    l_fallback:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_00735230
        pop     edi
        pop     esi
        ret     0x10

    l_found:
        test    edx, edx
        jz      l_found2
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edx], ecx
        jmp     l_common

    l_found2:
        mov     edx, dword ptr [eax]
        mov     dword ptr [g_8b79e4], edx

    l_common:
        mov     ecx, dword ptr [eax + 0x80]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     dword ptr [edx], ecx
        call    FUN_006f4230
        pop     edi
        pop     esi
        xor     eax, eax
        ret     0x10
    }
}
