/*
 * FUN_10001352 (160 B) — teardown: free the per-thread block's sub-buffers,
 * then TlsSetValue(NULL).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_10005034;                       /* 0x10005034 */
extern void *(__stdcall *g_TlsGetValue)(unsigned int);/* IAT 0x10004024 */
extern int (__stdcall *g_TlsSetValue)(unsigned int, void *); /* IAT 0x10004018 */

extern void __cdecl FUN_10001e0f(void *);

__declspec(naked) void __cdecl FUN_10001352(void)
{
    __asm {
        mov     eax, dword ptr [g_10005034]
        cmp     eax, -1
        jz      L_f1
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jnz     L_76
        push    eax
        call    dword ptr [g_TlsGetValue]
        mov     esi, eax
        test    esi, esi
        jz      L_e2
L_76:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_84
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_84:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_92
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_92:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      L_a0
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_a0:
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L_ae
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_ae:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L_bc
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_bc:
        mov     eax, dword ptr [esi + 0x44]
        test    eax, eax
        jz      L_ca
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_ca:
        mov     eax, dword ptr [esi + 0x50]
        cmp     eax, 0x100051b0
        jz      L_db
        push    eax
        call    FUN_10001e0f
        pop     ecx
L_db:
        push    esi
        call    FUN_10001e0f
        pop     ecx
L_e2:
        push    0
        push    dword ptr [g_10005034]
        call    dword ptr [g_TlsSetValue]
        pop     esi
L_f1:
        ret
    }
}
