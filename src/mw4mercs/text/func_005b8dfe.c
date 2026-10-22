/*
 * FUN_005b8dfe (extent 0x5b8dfe-0x5b8e8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_005f07e0(void);

__declspec(naked) void FUN_005b8dfe(void)
{
    __asm {
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
        mov    dword ptr [ecx], 0x786bb0
        jmp    FUN_005f07e0
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        lea    edi, [esi + 0x10]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    dword ptr [edi], 0x786cb4
        mov    ecx, edi
        mov    dword ptr [esi], 0x786cb0
        call    FUN_0041fcd0
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x20], ecx
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
