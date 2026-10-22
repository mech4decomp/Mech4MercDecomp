/*
 * FUN_004adea8 (extent 0x4adea8-0x4adf31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ade20(void);

__declspec(naked) void FUN_004adea8(void)
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
        sub    esp, 8
        fld    dword ptr [ecx + 8]
        mov    eax, dword ptr [ecx + 4]
        fadd    dword ptr [ecx + 4]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        fst    dword ptr [esp + 4]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_dedb
        mov    edx, dword ptr [esp + 0xc]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
L_dedb:
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_deee
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [esp + 4], eax
L_deee:
        mov    edx, dword ptr [esp + 4]
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    edx
        push    eax
        call    FUN_004ade20
        add    esp, 8
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 4], ecx
        ret    4
    }
}
