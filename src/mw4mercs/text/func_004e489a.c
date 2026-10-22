/*
 * FUN_004e489a (extent 0x4e489a-0x4e48eb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc738;
extern int    g_007dc82c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004e489a(void)
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
        je    L_48e0
        mov    ecx, dword ptr [g_007dc82c]
        push    0
        push    0
        push    ecx
        push    0x773f30
        push    0x225
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc738], eax
        ret    
L_48e0:
        mov    dword ptr [g_007dc738], 0
        ret    
    }
}
