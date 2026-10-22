/*
 * FUN_004bf365 (extent 0x4bf365-0x4bf3ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;

__declspec(naked) void FUN_004bf365(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x144]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        and    eax, 0xffff
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [edx + eax*4], esi
        mov    eax, ecx
        and    eax, 0xc0
        cmp    al, 0xc0
        je    L_f3ea
        fld    dword ptr [esi + 0xec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_f3d0
        mov    edx, ecx
        shr    edx, 3
        test    dl, 1
        jne    L_f3d0
        and    ecx, 0xffffffbf
        or    ecx, 0x80
        jmp    L_f3d9
L_f3d0:
        and    ecx, 0xffffff7f
        or    ecx, 0x44
L_f3d9:
        mov    eax, dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
L_f3ea:
        pop    esi
        ret    8
    }
}
