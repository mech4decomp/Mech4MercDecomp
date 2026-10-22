/*
 * FUN_004bcf53 (extent 0x4bcf53-0x4bcfc7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004bf3f0(void);

__declspec(naked) void FUN_004bcf53(void)
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004bf3f0
        mov    word ptr [esi + 0x150], di
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 0x3f
        mov    edx, dword ptr [eax*4 + 0x7b35e8]
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
        mov    edx, dword ptr [eax*4 + 0x7b36e8]
        mov    dword ptr [ecx + 0x13c], edx
        ret    
    }
}
