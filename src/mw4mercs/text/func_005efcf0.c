/*
 * func_005efcf0 - __thiscall
 * Computes a clamped division result; returns 0 if negative.
 */
__declspec(naked) void func_005efcf0()
{
    __asm {
        mov     eax, [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [eax + 4]
        mov     ecx, [eax + 0x28]
        mov     eax, [eax + 0x44]
        cdq
        lea     ecx, [ecx + ecx*2]
        idiv    ecx
        test    eax, eax
        jge     done
        xor     eax, eax
    done:
        ret
    }
}
