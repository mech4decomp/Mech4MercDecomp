/*
 * FUN_0062b5c0 (95 B) — __thiscall.
 *
 * Compares two objects (this->* and *param_1) by type tag 0x2b and by
 * FUN_00624420() ordering. Returns bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624420(void);

__declspec(naked) void FUN_0062b5c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx]
        test    esi, esi
        push    edi
        jz      L_ret0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_ret0
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, 0x2b
        cmp     eax, edx
        jz      L_e7
        cmp     dword ptr [ecx + 0x4], edx
        jnz     L_ret0
        cmp     eax, edx
        jnz     L_f7
    L_e7:
        cmp     dword ptr [ecx + 0x4], edx
        jz      L_f3
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
    L_f3:
        cmp     eax, edx
        jz      L_cmp
    L_f7:
        cmp     dword ptr [ecx + 0x4], edx
        jz      L_ret0
    L_cmp:
        call    FUN_00624420
        mov     ecx, esi
        mov     edi, eax
        call    FUN_00624420
        xor     ecx, ecx
        cmp     eax, edi
        setg    cl
        pop     edi
        mov     al, cl
        pop     esi
        ret     0x4
    L_ret0:
        pop     edi
        xor     al, al
        pop     esi
        ret     0x4
    }
}
