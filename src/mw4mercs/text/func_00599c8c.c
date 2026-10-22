/*
 * FUN_00599c8c (extent 0x599c8c-0x599d05) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8c4;
extern int    g_007f1fe4;
extern int    g_007f25a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_00599c8c(void)
{
    __asm {
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9cfa
        mov    ecx, dword ptr [g_007dc8c4]
        mov    edx, dword ptr [g_007f25a0]
        push    0x502c60
        push    0x5028b0
        push    0x675850
        push    0
        push    0x675620
        push    ecx
        push    0x507aa0
        push    0x599d40
        push    0
        push    0
        push    edx
        push    0x78344c
        push    0x4bc
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f1fe4], eax
        ret    
L_9cfa:
        mov    dword ptr [g_007f1fe4], 0
        ret    
    }
}
