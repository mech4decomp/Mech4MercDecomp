/*
 * FUN_005e37fc (extent 0x5e37fc-0x5e3d41) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00788ec0;
extern float  g_007b220c;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f84;
extern int    g_007f268c;
extern int    g_007f26a4;
extern int    g_007f26b0;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00421100(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00544e30(void);
extern void __cdecl FUN_005ef7f0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005fffa0(void);

__declspec(naked) void FUN_005e37fc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    7
        mov    esi, eax
        call    dword ptr [edx + 4]
        mov    ebp, dword ptr [esp + 0x5c]
        test    ebp, ebp
        je    L_38ea
        push    ebx
        mov    ecx, edi
        call    FUN_005f07c0
        mov    bl, byte ptr [eax + 0x14]
        mov    di, word ptr [eax + 0x16]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [esi + 0x54]
        add    eax, 0x14
        mov    eax, dword ptr [esi + 0x30]
        mov    dword ptr [esp + 0x14], eax
        lea    eax, [ebp + 0x14]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x64], edx
        mov    dword ptr [esp + 0x1c], 0x44
        mov    dword ptr [esp + 0x20], 4
        mov    dword ptr [esp + 0x24], 2
        mov    dword ptr [esp + 0x28], 0
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esp + 0x60]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x2c], ecx
        mov    al, 1
        lea    ecx, [esp + 0x18]
        mov    byte ptr [esp + 0x34], al
        mov    byte ptr [esp + 0x54], al
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x3c], 0x3f800000
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x48], 0xbf800000
        mov    dword ptr [esp + 0x4c], 0xbf800000
        mov    dword ptr [esp + 0x50], 0xbf800000
        mov    byte ptr [esp + 0x34], bl
        mov    word ptr [esp + 0x36], di
        mov    dword ptr [esp + 0x54], edx
        mov    dword ptr [esp + 0x5c], eax
        call    FUN_004d5b70
        pop    ebx
L_38ea:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x4c
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
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        push    edi
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    ebx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ebx + 0x14]
        mov    dl, byte ptr [ebx + 0xc]
        mov    ebp, dword ptr [ebx]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [ebx + 0x10]
        mov    dword ptr [esi + 0x1e4], eax
        mov    eax, dword ptr [esp + 0x24]
        mov    dword ptr [esi + 0x1e8], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [esi + 0x1e0], dl
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esi + 0x228], ecx
        lea    ecx, [esi + 0x1ec]
        push    ebp
        mov    dword ptr [esi + 0x22c], edx
        mov    dword ptr [esi + 0x230], eax
        call    FUN_0040c410
        lea    ecx, [ebp + 0xc]
        push    ecx
        lea    ecx, [esi + 0x1f8]
        call    FUN_00421100
        mov    eax, dword ptr [ebx + 4]
        mov    edx, dword ptr [ebp + 0x18]
        push    eax
        lea    ecx, [esi + 0x208]
        mov    dword ptr [esi + 0x204], edx
        call    FUN_0040c410
        mov    ecx, dword ptr [esp + 0x10]
        fld    dword ptr [ecx + 0x94]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_39b2
        mov    dword ptr [esi + 0x1e4], 0
        jmp    L_3ac4
L_39b2:
        fld    dword ptr [ecx + 0x94]
        fcomp    qword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_39e0
        fld    dword ptr [ecx + 0x94]
        fcomp    dword ptr [g_00788ec0]
        fnstsw  ax
        test    ah, 1
        jne    L_39e0
        xor    ebx, ebx
        mov    dword ptr [esi + 0x1e4], ebx
        jmp    L_39e2
L_39e0:
        xor    ebx, ebx
L_39e2:
        mov    ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        je    L_3a1b
        mov    ecx, esi
        call    FUN_005f07c0
        cmp    dword ptr [eax + 0x3d4], ebx
        je    L_3a1b
        mov    ecx, esi
        call    FUN_005f07c0
        mov    eax, dword ptr [eax + 0x3d4]
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x64]
        cmp    eax, 1
        jne    L_3a1b
        mov    dword ptr [esi + 0x1e4], ebx
L_3a1b:
        mov    ebp, dword ptr [esi + 0x1e4]
        cmp    ebp, ebx
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [g_007dab44]
        je    L_3a4b
        mov    edx, dword ptr [eax]
        xor    edx, ecx
        mov    edx, dword ptr [edx + 0x1c]
        xor    edx, 0x85739531
        cmp    ebp, edx
        jne    L_3b71
        mov    dword ptr [esi + 0x1e4], ebx
L_3a4b:
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [g_007f26b0]
        push    ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 4]
        call    FUN_00415230
        test    al, al
        je    L_3ac4
        mov    edx, dword ptr [g_007dab44]
        mov    ebx, dword ptr [edx]
        mov    eax, dword ptr [g_007dab40]
        mov    ecx, esi
        xor    ebx, eax
        call    FUN_005f07c0
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ecx, dword ptr [ebx + 0x20]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_005fffa0
        test    eax, eax
        je    L_3ac4
        mov    ecx, dword ptr [g_007b8d8c]
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [esi + 0x1e4], eax
        mov    eax, dword ptr [g_007b8d88]
        mov    dword ptr [esi + 0x228], eax
        mov    dword ptr [esi + 0x22c], ecx
        mov    dword ptr [esi + 0x230], edx
L_3ac4:
        mov    ecx, esi
        call    FUN_005ef7f0
        test    al, al
        je    L_3cad
        mov    ecx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0xb8]
        test    al, al
        je    L_3c99
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ebx, eax
        test    ebx, ebx
        je    L_3c5d
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_3c5d
        mov    ebp, dword ptr [ebx + 0x5d0]
        cmp    ebp, -1
        je    L_3c0a
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        mov    ebx, dword ptr [edx]
        xor    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        mov    ecx, dword ptr [ecx + 0x30]
        lea    edx, [ebp + ebp*8]
        lea    eax, [ebp + edx*4]
        mov    edx, dword ptr [ebx + 0xc]
        lea    eax, [eax + eax*2]
        lea    eax, [eax + eax*4]
        shl    eax, 2
        sub    eax, ebp
        add    ecx, eax
        mov    eax, dword ptr [edi]
        xor    edx, 0x85739531
        lea    ebx, [edx + ecx*4 + 0x206084]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [eax + 0x4c]
        add    dword ptr [ebx], ecx
        jmp    L_3c5d
L_3b71:
        mov    eax, dword ptr [g_007f26a4]
        mov    ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_3ac4
        mov    ecx, dword ptr [esi + 0x1d4]
        mov    eax, dword ptr [ebp]
        push    ecx
        mov    ecx, ebp
        call    dword ptr [eax + 0xa4]
        mov    ebp, dword ptr [ebp + 0x280]
        test    ebp, ebp
        je    L_3ac4
        mov    eax, dword ptr [ebp + 0x3dc]
        test    eax, eax
        je    L_3ac4
        mov    al, byte ptr [esi + 0x234]
        test    al, al
        jne    L_3ac4
        mov    al, byte ptr [esi + 0x220]
        test    al, al
        je    L_3ac4
        mov    edx, dword ptr [esi + 0xe0]
        cmp    dword ptr [edx + 0x14], 6
        je    L_3ac4
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 0x48]
        inc    eax
        cmp    eax, 3
        jle    L_3bf6
        mov    eax, 3
L_3bf6:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    dword ptr [esi + 0x224], eax
        jmp    L_3ac4
L_3c0a:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [edx]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + 0x14]
        xor    ebp, dword ptr [g_007dab40]
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 0x30]
        mov    ecx, ebx
        shl    ecx, 7
        add    ecx, ebx
        shl    ecx, 3
        sub    ecx, ebx
        lea    eax, [edx + ecx*2]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [edi]
        xor    ecx, 0x85739531
        lea    ebx, [ecx + eax*4 + 0x3618]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [ebx]
        mov    eax, dword ptr [eax + 0x4c]
        add    ecx, eax
        mov    dword ptr [ebx], ecx
L_3c5d:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    cl, byte ptr [eax + 0xdc]
        test    cl, cl
        je    L_3c99
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, esi
        xor    edi, edx
        call    FUN_005f07c0
        mov    ecx, dword ptr [edi + 0xc]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x14]
        xor    ecx, 0x85739531
        push    edx
        call    FUN_00544e30
L_3c99:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        add    esi, 0x1d4
        push    esi
        push    6
        call    dword ptr [eax + 4]
L_3cad:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0x14
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
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        je    L_3d01
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x1c]
        xor    edx, 0x85739531
        cmp    esi, edx
        je    L_3d01
L_3ce5:
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_3d07
        mov    esi, dword ptr [esi + 0xc4]
        test    esi, esi
        jne    L_3ce5
L_3d01:
        xor    al, al
        pop    esi
        ret    4
L_3d07:
        test    esi, esi
        je    L_3d01
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_3d01
        mov    eax, dword ptr [esi + 0x3dc]
        test    eax, eax
        je    L_3d01
        mov    al, 1
        pop    esi
        ret    4
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
        ret    
    }
}
