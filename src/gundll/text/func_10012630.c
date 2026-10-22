/*
 * FUN_10012630 (268 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[4] (call [ecx+0x10]) with g_10075060 and GUID
 * 0x10049b60, vtable[5] (call [ecx+0x14]) with GUID 0x10049c10, and
 * vtable[4] again with GUID 0x10049c54.  On success stores +0x24/+0x28/+0x2c.
 * On failure frees the partial handles via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10012630(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_12665
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_12665:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_12710
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
        je      L_1269d
        test    esi, esi
        jl      L_12710
L_1269d:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c10
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_126c5
        test    esi, esi
        jl      L_12710
L_126c5:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c54
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_126ed
        xor     esi, esi
        jmp     L_126f1
L_126ed:
        test    esi, esi
        jl      L_12710
L_126f1:
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        mov     dword ptr [edi + 0x2c], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_12710:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_12721
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_12721:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_12732
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_12732:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
