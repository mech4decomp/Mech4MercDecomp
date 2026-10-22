/*
 * FUN_005c0258 (extent 0x5c0258-0x5c02e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8cc;
extern int    g_007f22bc;
extern int    g_007f23b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005c0258(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x6b0], eax
        mov    ecx, dword ptr [ecx + 0x364]
        test    ecx, ecx
        je    L_0279
        mov    edx, eax
        mov    dword ptr [ecx + 0xc], edx
L_0279:
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_02dd
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007f23b0]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5c0320
        push    0x7874d0
        push    1
        push    edx
        push    0x7874dc
        push    0x4b4
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f22bc], eax
        ret    
L_02dd:
        mov    dword ptr [g_007f22bc], 0
        ret    
    }
}
