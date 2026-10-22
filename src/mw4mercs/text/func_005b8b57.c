/*
 * FUN_005b8b57 (extent 0x5b8b57-0x5b8bda) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2120;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b8bb0(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b8b57(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x17c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8ba2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2120]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b8bb0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_8ba2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005f0740
        mov    dword ptr [esi], 0x786ac8
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
