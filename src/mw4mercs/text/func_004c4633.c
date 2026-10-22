/*
 * FUN_004c4633 (extent 0x4c4633-0x4c46c7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004154d0(void);

__declspec(naked) void FUN_004c4633(void)
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
        push    ebx
        push    esi
        lea    ebx, [ecx + 0x144]
        push    edi
        mov    edi, dword ptr [ebx]
L_464b:
        test    edi, edi
        je    L_467e
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_467e
        push    ebx
        mov    ecx, esi
        call    FUN_004154d0
        and    dword ptr [esi + 0x18], 0xffffff3f
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esi + 0x10], 0
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        jmp    L_464b
L_467e:
        pop    edi
        pop    esi
        pop    ebx
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
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 0x3f
        mov    edx, dword ptr [eax*4 + 0x7b3920]
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
        mov    edx, dword ptr [eax*4 + 0x7b3a20]
        mov    dword ptr [ecx + 0x13c], edx
        ret    
    }
}
