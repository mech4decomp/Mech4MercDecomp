/*
 * FUN_00584dcc (extent 0x584dcc-0x584e44) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f206c;
extern int    g_007f20c4;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005f9990(void);

__declspec(naked) void FUN_00584dcc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f9990
        mov    eax, dword ptr [g_007f206c]
        mov    edi, dword ptr [edi + 4]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        je    L_4e01
        pop    edi
        mov    dword ptr [esi + 0x99c], 0
        pop    esi
        ret    4
L_4e01:
        mov    eax, dword ptr [g_007f20c4]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        je    L_4e18
        dec    dword ptr [esi + 0x98c]
L_4e18:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x578]
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
        mov    eax, dword ptr [ecx + 0xe0]
        cmp    dword ptr [eax + 0x14], 0xf
        je    L_4e43
        mov    byte ptr [ecx + 0x52d], 1
L_4e43:
        ret    
    }
}
