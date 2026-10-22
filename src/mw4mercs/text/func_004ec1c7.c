/*
 * FUN_004ec1c7 (extent 0x4ec1c7-0x4ec242) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004ec300(void);
extern void __cdecl FUN_00724a00(void);
extern void __cdecl FUN_00725060(void);

__declspec(naked) void FUN_004ec1c7(void)
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
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [esp + 0x1c]
        xor    eax, eax
        push    eax
        mov    dword ptr [esi + 0x28], eax
        push    edi
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi + 0x18], edi
        mov    dword ptr [esi + 0x1c], ecx
        mov    dword ptr [esi + 0x20], ebx
        mov    dword ptr [esi + 0x24], 4
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [esi], 0x774748
        call    FUN_00724a00
        push    ebx
        push    edi
        call    FUN_00725060
        mov    ecx, esi
        call    FUN_004ec300
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
