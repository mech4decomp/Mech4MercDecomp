/*
 * FUN_004efc7a (extent 0x4efc7a-0x4efccb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc820;
extern int    g_007dc83c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004efc7a(void)
{
    __asm {
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fcc0
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774cc8
        push    0x21c
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc820], eax
        ret    
L_fcc0:
        mov    dword ptr [g_007dc820], 0
        ret    
    }
}
