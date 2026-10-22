/*
 * FUN_10008940 (64 B) — __stdcall, RET 0xC.
 * Calls vtable method +4 on object at [this+8], then +0x38; returns error code.
 */

__declspec(naked) void __stdcall FUN_10008940(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        mov     eax, 0xc1120405
        jz      L1000897c
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        lea     edx, [esp + 0x10]
        push    edx
        push    ecx
        call    dword ptr [eax + 0x4]
        test    eax, eax
        jl      L1000897c
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x38]
        test    eax, eax
        jge     L1000897c
        mov     eax, 0xc1120405
    L1000897c:
        pop     esi
        ret     0xc
    }
}
