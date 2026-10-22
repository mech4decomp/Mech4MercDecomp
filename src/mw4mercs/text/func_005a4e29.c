/*
 * FUN_005a4e29 (extent 0x5a4e29-0x5a4fc7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f2058;
extern int    g_007f25bc;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005a51d0(void);
extern void __cdecl FUN_005f4620(void);
extern void __cdecl FUN_005fa480(void);

__declspec(naked) void FUN_005a4e29(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    byte ptr [ecx + 0x541], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    byte ptr [ecx + 0x540], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x540]
        xor    eax, eax
        cmp    dl, al
        je    L_4e68
        mov    dword ptr [ecx + 0x42c], eax
        mov    dword ptr [ecx + 0x448], eax
L_4e68:
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005f4620
        ret    4
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
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x44
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x4c]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005a51d0
        mov    al, byte ptr [esi + 0x541]
        test    al, al
        je    L_4f44
        lea    edx, [esp + 0x4c]
        push    edx
        lea    ecx, [esi + 0x370]
        mov    dword ptr [esp + 0x50], 3
        call    FUN_00416b60
        fld    dword ptr [eax + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4f3d
        mov    eax, dword ptr [esi + 0x78]
        push    ebx
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        push    0x78462c
        lea    ecx, [esp + 0x58]
        mov    edi, eax
        call    FUN_00412570
        lea    ecx, [esp + 0x54]
        push    ecx
        lea    ecx, [esi + 0x28c]
        call    FUN_00416b60
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x54]
        test    eax, eax
        je    L_4f15
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_4f15
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4f15:
        push    1
        add    edi, 0x290
        push    edi
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        push    1
        push    ebx
        push    edi
        mov    ecx, esi
        call    FUN_005fa480
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
        pop    edi
        pop    ebx
L_4f3d:
        mov    byte ptr [esi + 0x541], 0
L_4f44:
        pop    esi
        add    esp, 0x44
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4fbb
        mov    eax, dword ptr [g_007f25bc]
        mov    ecx, dword ptr [g_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x66a3c0
        push    0x62ec80
        push    0x66a150
        push    eax
        push    0x62df30
        push    0x5a5000
        push    0
        push    0
        push    ecx
        push    0x78463c
        push    0x42f
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2058], esi
        pop    esi
        ret    
L_4fbb:
        mov    dword ptr [g_007f2058], 0
        pop    esi
        ret    
    }
}
