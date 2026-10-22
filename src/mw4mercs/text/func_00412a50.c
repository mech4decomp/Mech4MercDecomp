/*
 * FUN_00412a50 (81 B) — refcounted-string write helper. Computes strlen of
 * *arg2 into a local, writes it via vtable[9] ([*obj+0x24]), then if arg1
 * is nonzero writes the string *arg2 with size arg1+1 via vtable[9].
 * Returns arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00412a50(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        push    esi
        mov     dword ptr [esp + 8], 0
        jz      L1
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0xc], ecx
        pop     edi
    L1:
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jbe     L2
        mov     edx, dword ptr [esi]
        inc     eax
        push    eax
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L2:
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
