/*
 * FUN_004f2127 (extent 0x4f2127-0x4f219e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004f21a0(void);

__declspec(naked) void FUN_004f2127(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        xor    eax, eax
        mov    word ptr [esi + 0x12], ax
        mov    word ptr [esi + 0x10], 0xffff
        mov    dword ptr [esi], 0x774fe4
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x14], eax
        mov    word ptr [esi + 0x10], cx
        mov    word ptr [esi + 0x12], dx
        mov    eax, esi
        pop    esi
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
        push    esi
        mov    esi, ecx
        call    FUN_004f21a0
        test    byte ptr [esp + 8], 1
        je    L_2198
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2198:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
