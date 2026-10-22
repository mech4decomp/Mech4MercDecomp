/*
 * FUN_004dadb7 (extent 0x4dadb7-0x4dae26) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004dadb7(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x130], eax
        xor    al, al
        ret    8
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, edi
        shr    eax, 5
        test    al, 1
        je    L_adfc
        mov    al, byte ptr [esp + 0xc]
        test    al, al
        je    L_adf6
        mov    ecx, dword ptr [esi + 0xd8]
        call    dword ptr [ecx + 0x1c]
        mov    byte ptr [esp + 0xc], 0
L_adf6:
        and    edi, 0xffffffdf
        mov    dword ptr [esi + 0x10], edi
L_adfc:
        mov    eax, dword ptr [esi + 0xbc]
        test    eax, eax
        je    L_ae21
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, eax
L_ae0c:
        test    esi, esi
        je    L_ae21
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_ae21
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x48]
        jmp    L_ae0c
L_ae21:
        pop    edi
        pop    esi
        ret    4
    }
}
