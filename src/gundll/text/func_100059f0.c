/*
 * FUN_100059f0 (71 B) - __stdcall, RET 0xc.
 * Looks up a string via FUN_1001b3d0, then calls an indirect vtable method
 * (param_3->vtable[0]) and returns (result >= 0) as a bool.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001b3d0(void);       /* rel32 call, 3 args */

__declspec(naked) void __stdcall FUN_100059f0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x34]
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [esp + 0x4], 0x0
        jz      L_5a29
        lea     eax, [esp + 0x4]
        push    eax
        push    0x10049b60
        call    FUN_1001b3d0
        test    eax, eax
        jl      L_5a29
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx]
    L_5a29:
        xor     ecx, ecx
        test    eax, eax
        setge   cl
        mov     al, cl
        pop     esi
        pop     ecx
        ret     0xc
    }
}
