/*
 * FUN_10024F40 (83 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and GUID
 * 0x10049e58, storing the returned dword into +0x24.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10024F40(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_f5f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_f5f:
        push    esi
        call    FUN_1001c8d0
        test    eax, eax
        jl      L_f8e
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e58
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_f8e
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x24], ecx
L_f8e:
        pop     esi
        pop     ecx
        ret     4
    }
}
