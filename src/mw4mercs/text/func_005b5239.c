/*
 * FUN_005b5239 (extent 0x5b5239-0x5b5288) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005b5239(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0x10
        call    dword ptr [eax + 4]
        mov    al, byte ptr [esi + 0x564]
        test    al, al
        mov    byte ptr [esi + 0x514], 0
        je    L_5284
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        push    0
        push    0
        push    0xb
        call    dword ptr [edx + 8]
L_5284:
        pop    esi
        ret    4
    }
}
