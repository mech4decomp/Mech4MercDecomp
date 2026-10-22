/*
 * FUN_0058fba7 (extent 0x58fba7-0x58fdb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076f5d8;
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0058d870(void);
extern void __cdecl FUN_00591020(void);

__declspec(naked) void FUN_0058fba7(void)
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
        mov    al, byte ptr [ecx + 0x884]
        test    al, al
        sete    al
        mov    byte ptr [ecx + 0x884], al
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
        mov    dl, byte ptr [ecx + 0x884]
        xor    eax, eax
        test    dl, dl
        sete    al
        ret    
        nop    
        nop    
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
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x3b0]
        fld    dword ptr [ecx + 0x370]
        mov    edx, 0x3f800000
        fadd    dword ptr [g_0076d070]
        mov    dword ptr [ecx + 0x378], edx
        mov    dword ptr [ecx + 0x37c], edx
        fstp    dword ptr [ecx + 0x370]
        fld    dword ptr [ecx + 0x36c]
        fcomp    dword ptr [g_0076f5d8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_fc4c
        mov    dword ptr [ecx + 0x36c], 0x3fc00000
L_fc4c:
        fld    dword ptr [ecx + 0x36c]
        mov    dword ptr [ecx + 0x378], edx
        fadd    dword ptr [g_0076d070]
        fst    dword ptr [ecx + 0x36c]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_fc7b
        mov    dword ptr [ecx + 0x36c], 0x3f000000
L_fc7b:
        mov    al, byte ptr [esi + 0x4a1]
        test    al, al
        je    L_fcbf
        push    0xc1a00000
        push    0
        push    0x41f00000
        lea    ecx, [esp + 0x1c]
        call    FUN_0040c9c0
        lea    ecx, [esp + 0x10]
        lea    eax, [esi + 0x670]
        mov    edx, 3
L_fca9:
        fld    dword ptr [ecx]
        add    eax, 4
        fadd    dword ptr [eax - 4]
        add    ecx, 4
        dec    edx
        fstp    dword ptr [eax - 4]
        jne    L_fca9
        pop    esi
        add    esp, 0x18
        ret    
L_fcbf:
        lea    eax, [esp + 4]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0058d870
        mov    edx, dword ptr [eax + 4]
        sub    esp, 0xc
        mov    ecx, esp
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx], edx
        mov    dword ptr [ecx + 8], eax
        lea    ecx, [esi + 0x6b0]
        call    FUN_00591020
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x10], 0x3f000000
        call    FUN_0058d870
        mov    edx, dword ptr [eax + 4]
        sub    esp, 0xc
        mov    ecx, esp
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx], edx
        mov    dword ptr [ecx + 8], eax
        lea    ecx, [esi + 0x708]
        call    FUN_00591020
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0058d870
        mov    edx, dword ptr [eax + 4]
        sub    esp, 0xc
        mov    ecx, esp
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx], edx
        mov    dword ptr [ecx + 8], eax
        lea    ecx, [esi + 0x760]
        call    FUN_00591020
        pop    esi
        add    esp, 0x18
        ret    
    }
}
