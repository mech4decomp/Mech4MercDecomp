/*
 * FUN_00698c5e (extent 0x698c5e-0x698d55) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00698c5e(void)
{
    __asm {
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [esp + 8]
        and    eax, 0xff
        lea    eax, [eax + eax*2]
        mov    eax, dword ptr [edx + eax*4 + 4]
        and    ecx, 0xff
        add    eax, ecx
        ret    8
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
        mov    edx, dword ptr [ecx + 0x18]
        mov    ecx, dword ptr [esp + 4]
        xor    eax, eax
        push    ebx
        push    esi
        mov    esi, dword ptr [edx + 0x2c]
        mov    edx, dword ptr [edx + 0xc]
        mov    eax, ecx
        shl    eax, 4
        mov    al, byte ptr [esi + eax + 0xf]
        mov    esi, dword ptr [esp + 0x10]
        mov    byte ptr [esi], al
        pop    esi
        and    eax, 0xff
        lea    eax, [eax + eax*2]
        mov    bl, byte ptr [edx + eax*4 + 4]
        mov    eax, dword ptr [esp + 0x10]
        sub    cl, bl
        mov    byte ptr [eax], cl
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [esp + 4]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + edx]
        mov    eax, ecx
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
        nop    
        xor    eax, eax
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    al, byte ptr [eax + ecx]
        test    al, al
        je    L_8d09
        and    eax, 0xff
        dec    eax
        ret    4
L_8d09:
        mov    eax, 0xff
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
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [eax + edx]
        cmp    al, 0xff
        jne    L_8d33
        xor    eax, eax
        ret    4
L_8d33:
        mov    ecx, dword ptr [ecx + 0x18]
        push    esi
        mov    esi, dword ptr [ecx + 0x2c]
        shl    edx, 4
        add    edx, esi
        mov    esi, dword ptr [edx + 4]
        and    eax, 0xff
        imul    eax, dword ptr [edx]
        mov    edx, dword ptr [ecx + 0x1c]
        add    eax, esi
        add    eax, edx
        pop    esi
        ret    4
    }
}
