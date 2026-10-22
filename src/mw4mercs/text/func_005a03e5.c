/*
 * FUN_005a03e5 (extent 0x5a03e5-0x5a0650) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00783a64;
extern int    g_007f23d8;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005a0320(void);
extern void __cdecl FUN_005a0650(void);
extern void __cdecl FUN_005a0810(void);
extern void __cdecl FUN_005a0f40(void);
extern void __cdecl FUN_005a0f90(void);
extern void __cdecl FUN_005d5bf0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a03e5(void)
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005a0f40
        push    edi
        mov    ecx, esi
        call    FUN_005a0320
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0xb
        call    dword ptr [eax + 4]
        pop    esi
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
        mov    al, byte ptr [esi + 0x55d]
        test    al, al
        je    L_054f
        mov    al, byte ptr [esi + 0x55c]
        test    al, al
        je    L_054f
        mov    eax, dword ptr [esi + 0x548]
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x50
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        mov    ecx, dword ptr [esi + 0x54c]
        mov    edx, dword ptr [ecx + 0xd8]
        mov    eax, dword ptr [esp + 4]
        add    edx, 0x50
        push    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esi + 0x560], eax
        call    FUN_00419480
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        mov    edx, dword ptr [esi + 0x550]
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x50
        mov    dword ptr [esi + 0x564], ecx
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        mov    eax, dword ptr [esi + 0x554]
        mov    ecx, dword ptr [eax + 0xd8]
        mov    edx, dword ptr [esp + 4]
        add    ecx, 0x50
        push    ecx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esi + 0x568], edx
        call    FUN_00419480
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 8], eax
        mov    eax, dword ptr [esi + 0x558]
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [esp + 4], edx
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x50
        push    ecx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esi + 0x56c], edx
        call    FUN_00419480
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [esi + 0x570], edx
L_054f:
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esi + 0x55d], 0
        call    FUN_005a0f90
        fld    qword ptr [esp + 0x20]
        mov    edx, dword ptr [esi + 0xe0]
        fsub    qword ptr [esi + 0xe4]
        mov    eax, dword ptr [edx + 0x14]
        sub    eax, 0x12
        je    L_05ca
        dec    eax
        jne    L_0647
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005a0810
        fld    dword ptr [esi + 0x540]
        fcomp    dword ptr [g_00783a64]
        fnstsw  ax
        test    ah, 0x40
        jne    L_05b4
        mov    al, byte ptr [esi + 0x55c]
        test    al, al
        jne    L_0649
L_05b4:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0x10
        call    dword ptr [eax + 4]
        pop    esi
        add    esp, 0x18
        ret    8
L_05ca:
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005a0650
        fld    dword ptr [esi + 0x540]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_05f4
        mov    al, byte ptr [esi + 0x55c]
        test    al, al
        jne    L_0649
L_05f4:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
        add    esi, 0x518
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_0649
        mov    ecx, esi
        call    FUN_0041fd80
        mov    esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        je    L_0649
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_0649
        push    0
        mov    ecx, esi
        call    FUN_005d5bf0
        pop    esi
        add    esp, 0x18
        ret    8
L_0647:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_0649:
        pop    esi
        add    esp, 0x18
        ret    8
    }
}
