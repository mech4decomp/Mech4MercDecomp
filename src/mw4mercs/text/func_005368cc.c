/*
 * FUN_005368cc (extent 0x5368cc-0x536de5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern int    g_007f1fb8;
extern int    g_007f1fbc;
extern int    g_007f1fc0;
extern int    g_007f1fc4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_0041dc10(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_0052e010(void);
extern void __cdecl FUN_00595c20(void);
extern void __cdecl FUN_00597c30(void);
extern void __cdecl FUN_0059b9f0(void);
extern void __cdecl FUN_0059d400(void);
extern void __cdecl FUN_0059eb70(void);
extern void __cdecl FUN_00614a80(void);
extern void __cdecl FUN_00615100(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_006fc4d0(void);

__declspec(naked) void FUN_005368cc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        lea    esi, [ecx + 0x205d24]
        mov    edi, 0x18
L_68dd:
        mov    ecx, esi
        call    FUN_0052e010
        add    esi, 0x22ac
        dec    edi
        jne    L_68dd
        mov    ecx, dword ptr [g_007f1fb8]
        xor    esi, esi
        cmp    ecx, esi
        je    L_6905
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [g_007f1fb8], esi
L_6905:
        mov    ecx, dword ptr [g_007f1fbc]
        cmp    ecx, esi
        je    L_691b
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fbc], esi
L_691b:
        mov    ecx, dword ptr [g_007f1fc0]
        cmp    ecx, esi
        je    L_6931
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [g_007f1fc0], esi
L_6931:
        mov    ecx, dword ptr [g_007f1fc4]
        cmp    ecx, esi
        je    L_6947
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fc4], esi
L_6947:
        push    0x779e08
        call    FUN_00595c20
        push    0x779de4
        mov    dword ptr [g_007f1fb8], eax
        call    FUN_00595c20
        push    0x779dc4
        mov    dword ptr [g_007f1fbc], eax
        call    FUN_00595c20
        push    0x779d9c
        mov    dword ptr [g_007f1fc0], eax
        call    FUN_00595c20
        mov    dword ptr [g_007f1fc4], eax
        mov    eax, dword ptr [g_007f1fb8]
        add    esp, 0x10
        lea    ecx, [eax + 0x10]
        call    FUN_00417a40
        mov    ecx, dword ptr [g_007dd268]
        pop    edi
        mov    dword ptr [ecx + 0x4099c], eax
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
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov    ebp, ecx
        push    edi
        lea    esi, [ebp + 0x205d24]
        mov    edi, 0x18
L_69c4:
        mov    ecx, esi
        call    FUN_0052e010
        add    esi, 0x22ac
        dec    edi
        jne    L_69c4
        mov    ecx, dword ptr [ebp + 0x50]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        push    0x77a0c8
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jne    L_6a04
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fb780
L_6a04:
        mov    esi, dword ptr [ebp + 0xb0]
        mov    eax, dword ptr [esp + 0x10]
        push    esi
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jne    L_6a44
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fb780
L_6a44:
        mov    eax, dword ptr [esp + 0x10]
        push    0x77b634
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jne    L_6a82
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fb780
L_6a82:
        push    0x77a0c8
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x14]
        push    esi
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        xor    ebx, ebx
        cmp    eax, ebx
        je    L_6ac6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6ac6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6ac6:
        mov    ecx, dword ptr [esp + 0x14]
        push    0x77a40c
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, ebx
        je    L_6afe
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6afe
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6afe:
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_6b1e
        mov    edx, dword ptr [esp + 0x14]
        push    1
        push    edx
        mov    ecx, eax
        call    FUN_0041d890
        mov    edi, eax
        jmp    L_6b20
L_6b1e:
        xor    edi, edi
L_6b20:
        mov    eax, dword ptr [g_007dd268]
        cmp    byte ptr [eax + 0x40da4], bl
        mov    ecx, dword ptr [g_007f1fb8]
        je    L_6bd5
        cmp    ecx, ebx
        je    L_6b47
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fb8], ebx
L_6b47:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_6b7c
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        je    L_6b72
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_6b72:
        push    0x11
        call    FUN_004c8e90
        add    esp, 4
L_6b7c:
        push    0x84
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_6ba3
        mov    ecx, dword ptr [g_007dd268]
        add    ecx, 0x40da5
        push    ecx
        mov    ecx, eax
        call    FUN_00614a80
        jmp    L_6ba5
L_6ba3:
        xor    eax, eax
L_6ba5:
        push    0x11
        push    eax
        call    FUN_004c8eb0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        add    esp, 8
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    dword ptr [g_007f1fb8], edx
        jmp    L_6d67
L_6bd5:
        cmp    ecx, ebx
        je    L_6be5
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [g_007f1fb8], ebx
L_6be5:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x44]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x44]
        je    L_6c1b
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        je    L_6c11
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_6c11:
        push    0x11
        call    FUN_004c8e90
        add    esp, 4
L_6c1b:
        mov    ecx, edi
        call    FUN_0041db30
        test    eax, eax
        je    L_6c9d
        mov    ecx, edi
        call    FUN_0041dc10
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        lea    ecx, [esp + 0x18]
        call    FUN_004129c0
        lea    ecx, [esp + 0x18]
        call    FUN_00412950
        push    0x84
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_6c68
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_00614a80
        jmp    L_6c6a
L_6c68:
        xor    eax, eax
L_6c6a:
        push    0x11
        push    eax
        call    FUN_004c8eb0
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 8
        cmp    eax, ebx
        je    L_6d67
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6d67
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_6d67
L_6c9d:
        mov    ecx, dword ptr [g_007f1fb8]
        cmp    ecx, ebx
        je    L_6cb3
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fb8], ebx
L_6cb3:
        push    0x84
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_6ce2
        mov    eax, dword ptr [ebp]
        push    0x77b628
        push    0x511c
        mov    ecx, ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov    ecx, esi
        call    FUN_00615100
        jmp    L_6ce4
L_6ce2:
        xor    eax, eax
L_6ce4:
        push    0x11
        push    eax
        call    FUN_004c8eb0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        add    esp, 8
        call    FUN_0059d400
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        call    FUN_00597c30
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x20]
        call    FUN_0059b9f0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        call    FUN_0059eb70
L_6d67:
        cmp    edi, ebx
        mov    ecx, dword ptr [g_007dd268]
        mov    byte ptr [ecx + 0x40da4], bl
        je    L_6d87
        mov    ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6d87:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        mov    eax, dword ptr [esp + 0x14]
        xor    ecx, 0x85739531
        cmp    eax, ebx
        mov    edx, dword ptr [ecx + 0x34]
        mov    dword ptr [g_007f1fb8], edx
        je    L_6dc2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6dc2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6dc2:
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        cmp    eax, ebx
        pop    ebx
        je    L_6de1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6de1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6de1:
        add    esp, 0xc
        ret    
    }
}
