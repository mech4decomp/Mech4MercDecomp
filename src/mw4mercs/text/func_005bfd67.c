/*
 * FUN_005bfd67 (extent 0x5bfd67-0x5bfde1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f22b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005bfd67(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_fdb5
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f22b4]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dd220
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi], 0x7872c8
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_fdb5:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_fdd8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_fdd8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        ret    
    }
}
