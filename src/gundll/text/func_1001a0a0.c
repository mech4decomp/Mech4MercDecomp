/*
 * FUN_1001a0a0 (172 B) - __stdcall, RET 0x4 (1 arg). Registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then FUN_1002bcc0(this->obj, g_10075060, GUID 0x10049e3c, &local2,
 * &local1); on success stores local1/local2 into this->+0x24/+0x28.  On
 * failure calls FUN_1002bf10(local1, local2, this->obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __stdcall FUN_1002bcc0(void);
extern void __stdcall FUN_1002bf10(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1001a0a0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_ok
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
    L_ok:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049e3c
        push    edx
        push    eax
        call    FUN_1002bcc0
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_check
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    L_check:
        test    esi, esi
        jl      L_fail
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    L_fail:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_ret
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002bf10
    L_ret:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
