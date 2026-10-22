// FUN_00581390 - __stdcall: copy dwords from src to dst, skip store if dst is NULL
// Returns void

__declspec(naked) void __stdcall FUN_00581390(void)
{
    __asm {
        mov     ecx, [esp + 4]
        mov     edx, [esp + 8]
        cmp     ecx, edx
        mov     eax, [esp + 0xC]
        je      L1
        push    esi
    L2:
        test    eax, eax
        je      L3
        mov     esi, [ecx]
        mov     [eax], esi
    L3:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jne     L2
        pop     esi
    L1:
        ret
    }
}
