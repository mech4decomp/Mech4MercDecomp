/*
 * FUN_006febd7 (extent 0x6febd7-0x6fec4e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00856834;
extern char   g_008aaaf0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006f88c0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006febd7(void)
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        mov    al, byte ptr [g_008aaaf0]
        test    al, al
        jne    L_ec1b
        push    0x7a0da8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ec1b
        int 3    
L_ec1b:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ec41
        push    eax
        mov    byte ptr [eax + 4], 0
        mov    dword ptr [eax], 0x7a0d74
        mov    dword ptr [g_00856834], eax
        call    FUN_006f88c0
        mov    al, 1
        ret    
L_ec41:
        mov    dword ptr [g_00856834], 0
        xor    al, al
        ret    
    }
}
