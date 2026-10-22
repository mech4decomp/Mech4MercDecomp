/*
 * FUN_10020870 (83 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then dispatches a vtable method at [obj]->vtable[5] (call [ecx+0x14])
 * passing a GUID pointer (0x10049ca4) and g_10075060; stores the returned
 * handle into this->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10020870(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_88f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_88f:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_8be
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049ca4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_8be
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
L_8be:
        pop     esi
        pop     ecx
        ret     4
    }
}
