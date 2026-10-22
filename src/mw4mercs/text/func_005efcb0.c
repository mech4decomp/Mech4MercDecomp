/*
 * func_005efcb0 - __thiscall
 * Computes a ratio (division) of two counter values; returns 0 if the base is <= 0.
 */
__declspec(naked) void func_005efcb0()
{
    

extern void __cdecl FUN_10050e1aa(void);
extern void __cdecl FUN_005efcdc(void);
extern void __cdecl FUN_10050e194(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esi + 0x1ac]
        push    edi
        call FUN_10050e1aa
        add     esp, 4
        test    eax, eax
        jle     ret0
        mov     ecx, esi
        call FUN_005efcdc
        push    edi
        mov     esi, eax
        call FUN_10050e194
        add     esp, 4
        cdq
        pop     edi
        idiv    esi
        pop     esi
        ret
    ret0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
    }


}
