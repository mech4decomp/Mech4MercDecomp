/*
 * FUN_100013c3 (160 B) — TLS block teardown: free the member pointers
 * (0x24/0x28/0x30/0x38/0x40/0x44/0x50) and the block itself, then clear
 * the TLS slot. If param_1 is null, fetch the block from TLS first.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_TlsGetValue)(unsigned int);   /* IAT 0x10005028 */
extern int (__stdcall *g_TlsSetValue)(unsigned int, void *); /* IAT 0x10005018 */

extern unsigned int g_10006034;   /* 0x10006034 */

extern void __cdecl FUN_100020f9(void *);

__declspec(naked) void __cdecl FUN_100013c3(void)
{
    __asm {
        mov     eax, dword ptr [g_10006034]
        cmp     eax, -1
        jz      L_462
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jnz     L_e7
        push    eax
        call    dword ptr [g_TlsGetValue]
        mov     esi, eax
        test    esi, esi
        jz      L_453
L_e7:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_f5
        push    eax
        call    FUN_100020f9
        pop     ecx
L_f5:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_403
        push    eax
        call    FUN_100020f9
        pop     ecx
L_403:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      L_411
        push    eax
        call    FUN_100020f9
        pop     ecx
L_411:
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L_41f
        push    eax
        call    FUN_100020f9
        pop     ecx
L_41f:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L_42d
        push    eax
        call    FUN_100020f9
        pop     ecx
L_42d:
        mov     eax, dword ptr [esi + 0x44]
        test    eax, eax
        jz      L_43b
        push    eax
        call    FUN_100020f9
        pop     ecx
L_43b:
        mov     eax, dword ptr [esi + 0x50]
        cmp     eax, 0x100061b0
        jz      L_44c
        push    eax
        call    FUN_100020f9
        pop     ecx
L_44c:
        push    esi
        call    FUN_100020f9
        pop     ecx
L_453:
        push    0
        push    dword ptr [g_10006034]
        call    dword ptr [g_TlsSetValue]
        pop     esi
L_462:
        ret
    }
}
