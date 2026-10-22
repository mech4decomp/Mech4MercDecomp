/*
 * func_0050D730 - Math helper
 * Adds field+0xc to field+4, then calls realloc with product of fields
 */
__declspec(naked) void func_0050D730()
{
    

extern int DAT_0076b310;
__asm {
push    esi
        mov     esi, [esp + 8]
        mov     eax, [esi + 0xc]
        mov     ecx, [esi + 4]
        mov     edx, [esi + 0x14]
        add     ecx, eax
        mov     [esi + 4], ecx
        mov     eax, ecx
        mov     ecx, [esi + 8]
        imul    ecx, eax
        push    ecx
        push    edx
        call dword ptr [DAT_0076b310]
        add     esp, 8
        mov     [esi + 0x14], eax
        pop     esi
        ret
    }


}
