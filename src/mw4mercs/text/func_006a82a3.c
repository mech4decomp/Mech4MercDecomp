/*
 * FUN_006a82a3 (extent 0x6a82a3-0x6a845c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d8;
extern float  g_0076c5b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void FUN_006a82a3(void)
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
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, ecx
        push    0x796e48
        mov    ecx, esi
        call    FUN_00767d20
        push    0x76ff64
        mov    ecx, esi
        call    FUN_00767d20
        mov    eax, dword ptr [eax + 4]
        push    eax
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [edi + 0x38]
        add    esp, 4
        push    0x799e9c
        mov    ecx, esi
        call    FUN_00767d20
        mov    dword ptr [esp + 0x14], 0
        mov    eax, dword ptr [eax + 4]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x14]
        push    0x799e90
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_833a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_833a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_833a:
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_0066b370
        mov    dword ptr [edi + 0x30], eax
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop    edi
        pop    esi
        je    L_8368
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8368
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8368:
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        fadd    dword ptr [esi + 0x20]
        fst    dword ptr [esp + 0xc]
        fst    dword ptr [esi + 0x20]
        fcomp    dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_83cf
        mov    eax, dword ptr [esi + 0x34]
        mov    dword ptr [eax + 0x14], 0
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0x3c]
        call    FUN_00605740
        fld    dword ptr [esi + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_83bf
        mov    dword ptr [esi + 0x24], 0
        mov    al, 1
        pop    esi
        ret    0xc
L_83bf:
        fld    dword ptr [esp + 0xc]
        mov    al, 1
        fsub    dword ptr [esi + 0x10]
        fstp    dword ptr [esi + 0x24]
        pop    esi
        ret    0xc
L_83cf:
        xor    al, al
        pop    esi
        ret    0xc
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
        mov    esi, ecx
        fld    dword ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x34]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8408
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
L_8408:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006992f0
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8453
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
L_8453:
        xor    eax, eax
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
    }
}
