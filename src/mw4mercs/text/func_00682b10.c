/*
 * FUN_00682b10 (67 B) — __thiscall predicate.
 *
 * Calls a virtual method (offset 0x34), then FUN_00415230(DAT_007f1f84).
 * If it returns nonzero, calls the virtual again and inspects a flag at
 * +0x99c/+0x10. Returns 1 if the flag bit is clear, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f1f84;
extern char __cdecl FUN_00415230(unsigned int);

__declspec(naked) void FUN_00682b10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [g_7f1f84]
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_ret0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0x99c]
        test    eax, eax
        jz      L_ret0
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_ret0
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    L_ret0:
        pop     edi
        xor     al, al
        pop     esi
        ret
    }
}
