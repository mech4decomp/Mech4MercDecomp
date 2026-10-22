/*
 * FUN_1000CF10 (224 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and a GUID
 * (0x10049b3c), then FUN_1002e100 with g_10075060 and GUID 0x10049d98.
 * On success stores +0x24/+0x28.  On failure calls FUN_1002e220.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_1002e100(void);
extern void __stdcall FUN_1002e220(int, void *);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1000CF10(void)
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
        jne     L_cf3d
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_cf3d:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_cfcf
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b3c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_cf75
        test    esi, esi
        jl      L_cfcf
L_cf75:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 8]
        push    eax
        push    0x10049d98
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_cfb3
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_cfb3:
        test    esi, esi
        jl      L_cfcf
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_cfcf:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_cfe6
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e220
L_cfe6:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
