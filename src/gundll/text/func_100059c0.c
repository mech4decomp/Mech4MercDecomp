/*
 * FUN_100059c0 (36 B) - __stdcall, RET 0xc.
 * Calls an indirect vtable method (param_3->vtable[1]) and returns
 * (result >= 0) as a bool.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100059c0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax]
        push    esi
        lea     esi, [ecx + 0x84]
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x4]
        xor     ecx, ecx
        test    eax, eax
        setge   cl
        mov     al, cl
        pop     esi
        ret     0xc
    }
}
