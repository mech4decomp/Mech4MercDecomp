/*
 * FUN_0041241b (extent 0x41241b-0x41246e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411900(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041fa70(void);

__declspec(naked) void FUN_0041241b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00411b00
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, eax
        call    FUN_0041fa70
        ret    8
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
        push    esi
        mov    esi, ecx
        call    FUN_00411900
        test    byte ptr [esp + 8], 1
        je    L_2468
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2468:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
