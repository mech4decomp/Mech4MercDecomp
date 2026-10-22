/*
 * FUN_0059a6d7 (extent 0x59a6d7-0x59a786) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f1ff0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059a730(void);
extern void __cdecl FUN_005e6cf0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0059a6d7(void)
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
        push    0x244
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a722
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f1ff0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_0059a730
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a722:
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
        call    FUN_005e6cf0
        xor    eax, eax
        mov    dword ptr [esi + 0x220], eax
        mov    dword ptr [esi + 0x228], eax
        mov    dword ptr [esi + 0x230], eax
        mov    dword ptr [esi + 0x224], eax
        mov    dword ptr [esi + 0x22c], eax
        mov    dword ptr [esi + 0x234], eax
        mov    byte ptr [esi + 0x240], al
        mov    dword ptr [esi], 0x7836a0
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
