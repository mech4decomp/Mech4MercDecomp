/*
 * FUN_10017570 (218 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and GUID
 * 0x10049bf8, then vtable[4] (call [ecx+0x10]) with g_10075060 and GUID
 * 0x10049b60.  On success stores +0x24/+0x28.  On failure frees via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10017570(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 8], 0
        jne     L_go
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     0x4
    L_go:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_go2
        test    esi, esi
        jl      L_fail
    L_go2:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_ret
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    L_ret:
        test    esi, esi
        jl      L_fail
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    L_fail:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_done
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    }
}
