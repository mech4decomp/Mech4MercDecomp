/*
 * FUN_00461717 (extent 0x461717-0x461798) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b958c;
extern int    g_007d9928;
extern int    g_007d992c;
extern int    g_007d993c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00461717(void)
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
        test    eax, eax
        jne    L_172e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_172e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
        nop    
        mov    eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76ee28
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007d992c], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_178c
        mov    ecx, dword ptr [g_007d993c]
        push    ecx
        push    0x76ee04
        push    0x61
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x461910
        mov    dword ptr [g_007d9928], esi
        pop    esi
        ret    
L_178c:
        mov    dword ptr [g_007d9928], 0
        pop    esi
        ret    
    }
}
