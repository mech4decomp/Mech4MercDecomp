/*
 * FUN_10023770 (83 B) - __stdcall, RET 0x4 (1 arg).
 * If esi->+0xc is null returns 0xc112000e. Else calls FUN_1001c770(esi),
 * then dispatches vtable[5] (call [ecx+0x14], __stdcall 4 args) with
 * &local, 0x10049e5c, g_10075060, esi->+0xc; on success stores the output
 * into esi->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10023770(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_78f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_78f:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_7be
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_7be
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
L_7be:
        pop     esi
        pop     ecx
        ret     4
    }
}
