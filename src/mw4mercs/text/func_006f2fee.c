/*
 * FUN_006f2fee (extent 0x6f2fee-0x6f3078) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_006f2fee(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_3018
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3018:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    ebp, ebp
        push    1
        lea    ebx, [esi + 0x14]
        mov    dword ptr [esi], 0x76cd9c
        lea    edi, [esi + 0x10]
        push    ebp
        mov    ecx, ebx
        mov    dword ptr [esi + 8], ebp
        mov    dword ptr [esi + 0xc], ebp
        mov    dword ptr [edi], ebp
        call    FUN_00416990
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [ebx], 0x79f68c
        push    ecx
        mov    dword ptr [esi + 0x28], ebp
        mov    ecx, edi
        mov    dword ptr [esi + 0x2c], ebp
        mov    dword ptr [esi], 0x79f688
        call    FUN_00412780
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
