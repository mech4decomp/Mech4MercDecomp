/*
 * FUN_0046bc37 (extent 0x46bc37-0x46bcb8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b958c;
extern int    g_007d9968;
extern int    g_007d996c;
extern int    g_007d9984;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_0046bc37(void)
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
        jne    L_bc4e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_bc4e:
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
        push    0x76f104
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007d996c], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bcac
        mov    ecx, dword ptr [g_007d9984]
        push    ecx
        push    0x76f0e0
        push    0x5b
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x46be30
        mov    dword ptr [g_007d9968], esi
        pop    esi
        ret    
L_bcac:
        mov    dword ptr [g_007d9968], 0
        pop    esi
        ret    
    }
}
