/*
 * FUN_004dd137 (extent 0x4dd137-0x4dd19c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc130;
extern int    g_007dc69c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004dd137(void)
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
        mov    eax, dword ptr [g_007dc130]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d178
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [g_007dc69c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004dd220
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_d178:
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    4
    }
}
