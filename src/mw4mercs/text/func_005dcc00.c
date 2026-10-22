/*
 * FUN_005dcc00 (extent 0x5dcc00-0x5dccd7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5ec;
extern int    g_007f24d4;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_005dd280(void);
extern void __cdecl FUN_005def60(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_0064b7d0(void);
extern void __cdecl FUN_00652610(void);

__declspec(naked) void FUN_005dcc00(void)
{
    __asm {
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
        push    ecx
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        push    edi
        jne    L_ccd3
        mov    al, byte ptr [esi + 0x300]
        test    al, al
        je    L_cc33
        dec    dword ptr [g_007f24d4]
L_cc33:
        mov    ecx, dword ptr [esi + 0x2e4]
        test    ecx, ecx
        je    L_cc47
        push    0x7884d8
        call    FUN_0064b7d0
L_cc47:
        mov    ecx, dword ptr [esi + 0x30c]
        test    ecx, ecx
        mov    byte ptr [esi + 0x2f9], 1
        je    L_cc6d
        call    FUN_005def60
        cmp    al, 1
        jne    L_cca2
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x130]
        jmp    L_cca2
L_cc6d:
        push    0xfe
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fmul    dword ptr [g_0076d5ec]
        fstp    dword ptr [esp + 8]
        call    FUN_00415020
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_cca2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x130]
L_cca2:
        mov    edi, dword ptr [esi + 0x170]
        test    edi, edi
        je    L_ccd3
        call    FUN_005dd280
        test    eax, eax
        je    L_ccd3
        mov    eax, dword ptr [esi + 0x1d8]
        mov    ecx, dword ptr [esi + 0x1d4]
        mov    edx, dword ptr [edi + 0x30]
        push    eax
        push    ecx
        push    edx
        call    FUN_005dd280
        mov    ecx, eax
        call    FUN_00652610
L_ccd3:
        pop    edi
        pop    esi
        pop    ecx
        ret    
    }
}
