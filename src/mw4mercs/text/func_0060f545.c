/*
 * FUN_0060f545 (extent 0x60f545-0x60f9f8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0b8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_00547490(void);
extern void __cdecl FUN_00547560(void);
extern void __cdecl FUN_0060fa00(void);
extern void __cdecl FUN_0060fcf0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006fb7a0(void);
extern void __cdecl FUN_006fb7c0(void);
extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_006fc620(void);

__declspec(naked) void FUN_0060f545(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ecx], 0
        mov    eax, 1
        ret    8
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
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 4]
        xor    edx, ecx
        lea    ecx, [edx + 0x44]
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x2c]
        test    esi, esi
        mov    dword ptr [eax], 0
        pop    esi
        je    L_f5b1
        mov    ecx, dword ptr [ecx]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x2c]
        mov    ecx, dword ptr [edx + 0x2c]
        mov    dword ptr [eax], ecx
L_f5b1:
        mov    eax, 1
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [eax + 8]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [edx]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax + 4]
        mov    ebx, dword ptr [ecx]
        mov    eax, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax]
        push    1
        push    esi
        mov    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x2c], esi
        mov    dword ptr [esp + 0x1c], ecx
        call    FUN_00547490
        add    esp, 8
        test    al, al
        jne    L_f604
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_f604:
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        je    L_f9e9
        lea    ebp, [edi + 0x30]
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_f9e9
        mov    edx, dword ptr [esp + 0x34]
        push    edx
        lea    ecx, [esp + 0x38]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x34]
        push    ebx
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    ecx, dword ptr [esp + 0x34]
        push    0x76cb8c
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    edx, dword ptr [esp + 0x34]
        push    esi
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov    dword ptr [esp + 0x2c], eax
        je    L_f6a8
        inc    byte ptr [eax - 1]
L_f6a8:
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [edi + 8]
        call    FUN_00412740
        mov    ecx, dword ptr [esp + 0x2c]
        push    0x779f4c
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x10]
        lea    edx, [esp + 0x10]
        push    edx
        call    FUN_0060fa00
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x2c]
        mov    esi, edx
L_f6f9:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_f71d
        test    cl, cl
        je    L_f719
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_f71d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_f6f9
L_f719:
        xor    eax, eax
        jmp    L_f722
L_f71d:
        sbb    eax, eax
        sbb    eax, -1
L_f722:
        test    eax, eax
        jne    L_f750
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x34]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_f750:
        mov    eax, dword ptr [esp + 0x2c]
        mov    esi, dword ptr [g_0076b2ac]
        push    edx
        push    eax
        call    esi
        add    esp, 8
        test    eax, eax
        je    L_f7a5
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        je    L_f7a5
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        jne    L_f7a5
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x34]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xd4a
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_f7a5:
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_004d2a90
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_f7c6
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_f7c6:
        mov    ecx, ebp
        call    FUN_0041fcb0
        mov    eax, dword ptr [esp + 0x2c]
        push    1
        push    eax
        call    FUN_00547560
        add    esp, 8
        test    al, al
        jne    L_f808
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x34]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_f808:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_f878
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edx
        call    FUN_006faca0
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fb7c0
        mov    ecx, dword ptr [esp + 0x2c]
        push    1
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        call    FUN_006fc400
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f86c
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        call    FUN_006fc620
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_006fc580
L_f86c:
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_006f4230
        jmp    L_f89f
L_f878:
        mov    edx, dword ptr [esp + 0x2c]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        je    L_f890
        mov    eax, dword ptr [esp + 0x2c]
        push    eax
        call    FUN_006fb7c0
L_f890:
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        call    FUN_006fb7a0
L_f89f:
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [g_007db0b8]
        push    1
        push    0
        push    0
        push    0x3f
        push    6
        push    0
        push    eax
        call    FUN_004d2d00
        push    eax
        mov    ecx, ebp
        call    FUN_0041fcd0
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x3c]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [edi + 0x38], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    esi, dword ptr [ecx + 0xc]
        xor    esi, 0x85739531
        lea    ecx, [esi + 0xf4]
        call    FUN_0060fcf0
        mov    eax, dword ptr [edi + 0x40]
        test    eax, eax
        jne    L_f998
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esi + 0xc4], 0xffffffff
        call    FUN_00412570
        mov    eax, dword ptr [eax]
        push    0x76cb8c
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esi + 0xc8]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f962
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f962
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f962:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f97d
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f97d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f97d:
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_f998
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f998
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f998:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_f9b3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f9b3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f9b3:
        mov    eax, dword ptr [esp + 0x2c]
        test    eax, eax
        je    L_f9ce
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f9ce
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f9ce:
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_f9e9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f9e9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f9e9:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x18
        ret    0xc
    }
}
