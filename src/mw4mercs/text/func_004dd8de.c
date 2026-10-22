/*
 * FUN_004dd8de (extent 0x4dd8de-0x4dd95b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc140;
extern int    g_007dc6b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004dd8de(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [esp + 4]
L_d8e7:
        test    eax, eax
        je    L_d8fe
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        mov    eax, dword ptr [eax + 4]
        je    L_d8fe
        test    dword ptr [ecx + 0x10], edx
        je    L_d8e7
        mov    al, 1
        ret    4
L_d8fe:
        xor    al, al
        ret    4
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
        je    L_d950
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x7738bc
        push    0x1df
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc6b0], eax
        ret    
L_d950:
        mov    dword ptr [g_007dc6b0], 0
        ret    
    }
}
