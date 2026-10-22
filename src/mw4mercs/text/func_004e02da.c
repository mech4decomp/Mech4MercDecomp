/*
 * FUN_004e02da (extent 0x4e02da-0x4e0341) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004e02da(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x773a90
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_02f2
        int 3    
L_02f2:
        ret    0xc
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
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fd80
        test    eax, eax
        je    L_0319
        mov    edx, dword ptr [eax]
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 4]
        pop    esi
        ret    
L_0319:
        test    esi, esi
        je    L_0325
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_0325:
        pop    esi
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
        ret    
    }
}
