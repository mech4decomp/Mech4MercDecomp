/*
 * FUN_0042aad7 (extent 0x42aad7-0x42ab7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b96cc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00419ea0(void);
extern void __cdecl FUN_0042adf0(void);
extern void __cdecl FUN_0042af60(void);
extern void __cdecl FUN_00481ff0(void);

__declspec(naked) void FUN_0042aad7(void)
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
        mov    eax, dword ptr [g_007b96cc]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00481ff0
        push    0x7b8da8
        lea    ecx, [esi + 0xf8]
        mov    dword ptr [esi], 0x76e0d8
        mov    dword ptr [esi + 0xa8], 0
        call    FUN_00419ea0
        mov    ecx, 0xbba3d70a
        mov    eax, 0x3ba3d70a
        mov    dword ptr [esi + 0x8c], ecx
        mov    dword ptr [esi + 0x94], ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x90], eax
        mov    dword ptr [esi + 0x98], eax
        mov    dword ptr [esi + 0x9c], 0x3dcccccd
        mov    dword ptr [esi + 0xa0], 0x3ff33333
        mov    dword ptr [esi + 0xa4], 0xbf800000
        call    FUN_0042af60
        mov    eax, esi
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
        call    FUN_0042adf0
        test    byte ptr [esp + 8], 1
        je    L_ab78
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ab78:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
