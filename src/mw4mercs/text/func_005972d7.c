/*
 * FUN_005972d7 (extent 0x5972d7-0x597364) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005972d7(void)
{
    __asm {
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x2c]
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_72ee
        mov    ecx, dword ptr [ecx]
        jmp    L_72f0
L_72ee:
        xor    ecx, ecx
L_72f0:
        mov    edx, dword ptr [eax + 8]
        mov    edx, dword ptr [edx + 4]
        test    edx, edx
        mov    dword ptr [eax + 8], edx
        je    L_7302
        cmp    dword ptr [edx], 0
        jne    L_730a
L_7302:
        mov    edx, dword ptr [eax + 4]
        mov    edx, dword ptr [edx]
        mov    dword ptr [eax + 8], edx
L_730a:
        mov    eax, dword ptr [ecx + 0x10]
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    eax, dword ptr [ecx + 8]
        test    eax, eax
        je    L_731e
        mov    eax, dword ptr [eax]
        jmp    L_7320
L_731e:
        xor    eax, eax
L_7320:
        test    eax, eax
        je    L_732d
        mov    edx, dword ptr [ecx + 8]
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [ecx + 8], edx
L_732d:
        mov    edx, dword ptr [ecx + 8]
        test    edx, edx
        je    L_7339
        cmp    dword ptr [edx], 0
        jne    L_7341
L_7339:
        mov    edx, dword ptr [ecx + 4]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ecx + 8], edx
L_7341:
        test    eax, eax
        jne    L_7351
        mov    ecx, dword ptr [ecx + 8]
        test    ecx, ecx
        je    L_734f
        mov    eax, dword ptr [ecx]
        ret    
L_734f:
        xor    eax, eax
L_7351:
        ret    
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
        mov    al, byte ptr [ecx + 0x5d]
        ret    
    }
}
