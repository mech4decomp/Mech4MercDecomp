/*
 * FUN_004d369e (extent 0x4d369e-0x4d36ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db084;
extern int    g_007dc114;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004d369e(void)
{
    __asm {
        dec    ebp
        /* __emit: add bl,al in 00 C3 form; MSVC6 emits 02 D8 */
        __emit 0x00
        __emit 0xC3
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
        je    L_36e3
        mov    ecx, dword ptr [g_007db084]
        push    0x772698
        push    3
        push    ecx
        push    0x772854
        push    0x1e9
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc114], eax
        ret    
L_36e3:
        mov    dword ptr [g_007dc114], 0
        ret    
    }
}
