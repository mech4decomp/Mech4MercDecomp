/*
 * FUN_004fa287 (extent 0x4fa287-0x4fa2f1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8c4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004dd220(void);

__declspec(naked) void FUN_004fa287(void)
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
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a2c5
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007dc8c4]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dd220
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi], 0x775c84
        mov    eax, esi
        pop    esi
        ret    
L_a2c5:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_a2e8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a2e8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        ret    
    }
}
