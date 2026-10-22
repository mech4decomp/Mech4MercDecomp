/*
 * FUN_004da60c (extent 0x4da60c-0x4da66b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004d64d0(void);
extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_004da360(void);

__declspec(naked) void FUN_004da60c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x150]
        test    eax, eax
        setne    al
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x154], 1
        call    FUN_004da360
        mov    eax, dword ptr [esp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_004da2f0
        mov    esi, dword ptr [esi + 0x164]
        cmp    esi, -1
        je    L_a667
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx]
        push    esi
        push    1
        xor    ecx, 0x85739531
        call    FUN_004d64d0
L_a667:
        pop    esi
        ret    8
    }
}
