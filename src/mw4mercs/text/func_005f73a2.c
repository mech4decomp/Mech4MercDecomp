/*
 * FUN_005f73a2 (extent 0x5f73a2-0x5f7413) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005f73a2(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x9c]
        test    al, al
        je    L_73fe
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_73fe
        mov    edx, dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    0
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x80]
        movsx    ecx, byte ptr [edi + 0x1c]
        mov    eax, dword ptr [esi]
        push    ecx
        push    3
        mov    ecx, esi
        call    dword ptr [eax + 0x88]
        pop    edi
L_73fe:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
        ret    
    }
}
