/*
 * FUN_005998c7 (extent 0x5998c7-0x599946) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fdc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00599900(void);
extern void __cdecl FUN_005f35f0(void);
extern void __cdecl FUN_005fbe80(void);

__declspec(naked) void FUN_005998c7(void)
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
        push    0x514
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_98fc
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f1fdc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00599900
        ret    
L_98fc:
        xor    eax, eax
        ret    
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
        call    FUN_005f35f0
        push    0
        mov    ecx, esi
        mov    dword ptr [esi], 0x783220
        call    FUN_005fbe80
        mov    eax, esi
        pop    esi
        ret    0x10
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
        mov    eax, 0x10
        ret    
    }
}
