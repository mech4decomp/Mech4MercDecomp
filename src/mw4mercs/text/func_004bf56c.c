/*
 * FUN_004bf56c (extent 0x4bf56c-0x4bf627) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004bf56c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    0x7714a8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f582
        int 3    
L_f582:
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
        mov    edx, dword ptr [ecx + 0x148]
        push    esi
        mov    esi, dword ptr [esp + 8]
        xor    eax, eax
        test    dx, dx
        push    edi
        jbe    L_f5ca
        mov    ecx, dword ptr [ecx + 0x144]
L_f5a9:
        mov    edi, eax
        and    edi, 0xffff
        cmp    dword ptr [ecx + edi*4], esi
        je    L_f5be
        inc    eax
        cmp    ax, dx
        jb    L_f5a9
        jmp    L_f5ca
L_f5be:
        and    eax, 0xffff
        mov    dword ptr [ecx + eax*4], 0
L_f5ca:
        and    dword ptr [esi + 0x18], 0xffffff3f
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esi + 0x10], 0
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 0x3f
        mov    edx, dword ptr [eax*4 + 0x7b36f0]
        mov    dword ptr [ecx + 0x1c], edx
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
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 0xa
        and    eax, 1
        mov    edx, dword ptr [eax*4 + 0x7b37f0]
        mov    dword ptr [ecx + 0x13c], edx
        ret    
    }
}
