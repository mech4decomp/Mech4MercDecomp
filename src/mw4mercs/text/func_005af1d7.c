/*
 * FUN_005af1d7 (extent 0x5af1d7-0x5af24d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f20e0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005af2b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005af1d7(void)
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
        push    0x180
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f222
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20e0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005af2b0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_f222:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x178]
L_f237:
        test    esi, esi
        je    L_f24b
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_f24b
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x18]
        jmp    L_f237
L_f24b:
        pop    esi
        ret    
    }
}
