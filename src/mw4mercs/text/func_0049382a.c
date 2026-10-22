/*
 * FUN_0049382a (extent 0x49382a-0x4938a3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049382a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x60
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_386b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x520
        mov    ecx, eax
        call    FUN_00493660
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_386b:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        nop    
        push    esi
        mov    esi, ecx
        push    0
        lea    ecx, [esi + 0x20]
        mov    dword ptr [esi + 0x1c], 0x3f800000
        call    FUN_004adfb0
        push    0x3f800000
        lea    ecx, [esi + 0x34]
        call    FUN_004adfb0
        pop    esi
        ret    
    }
}
