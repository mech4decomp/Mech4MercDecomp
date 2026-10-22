/*
 * FUN_00637f57 (extent 0x637f57-0x639330) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern int    g_007f2548;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_005bf170(void);
extern void __cdecl FUN_005e3cc0(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_00637f57(void)
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
        sub    esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x3c]
        push    edi
        mov    edi, dword ptr [esp + 0x44]
        lea    eax, [esi + 0x10]
        push    0x20
        xor    ebx, ebx
        push    eax
        mov    ecx, edi
        mov    byte ptr [esi + 0xb8], bl
        mov    dword ptr [eax], ebx
        call    FUN_0041eb40
        lea    eax, [esi + 0x30]
        push    0x20
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax], ebx
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x3c]
        add    eax, -0x4c
        cmp    eax, 0xb
        ja    L_928b
        jmp    dword ptr [eax*4 + 0x639330]
        mov    ecx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esp + 0x38]
        xor    ebp, edx
        mov    ebp, dword ptr [ebp]
        xor    ebp, 0x85739531
        cmp    dword ptr [ebp + eax*4 + 0x530], ebx
        je    L_9284
        mov    ecx, dword ptr [ecx]
        xor    ecx, edx
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + eax*4 + 0x530]
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    8
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x20], 0
        call    FUN_0041eb40
        push    0x10
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_0041eb40
        mov    cx, word ptr [esp + 0x1c]
        mov    al, byte ptr [esp + 0x18]
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        mov    word ptr [esp + 0x22], cx
        mov    ecx, dword ptr [esp + 0x18]
        mov    byte ptr [esp + 0x20], al
        mov    eax, dword ptr [edx]
        and    ecx, 0xff
        xor    eax, ebp
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        cmp    eax, ebx
        je    L_9284
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    eax, dword ptr [ebp + 4]
        cmp    dword ptr [eax], 0x421
        jne    L_809a
        mov    ebp, dword ptr [ebp + 0x280]
L_809a:
        mov    ecx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ecx]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_814c
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x63936c]
        jmp    dword ptr [edx*4 + 0x639360]
        mov    dword ptr [esp + 0x38], 0x40a00000
        mov    dword ptr [esp + 0x44], 0x40a00000
        mov    dword ptr [esp + 0x10], 0x40a00000
        mov    dword ptr [esp + 0x40], 0xc0a00000
        mov    dword ptr [esp + 0x3c], 0xc0a00000
        mov    dword ptr [esp + 0x14], 0xc0a00000
        jmp    L_817c
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_814c
        fld    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x30], edx
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp    L_817c
L_814c:
        mov    dword ptr [esp + 0x38], 0x41700000
        mov    dword ptr [esp + 0x44], 0x41700000
        mov    dword ptr [esp + 0x10], 0x41700000
        mov    dword ptr [esp + 0x40], 0xc1700000
        mov    dword ptr [esp + 0x3c], 0xc1700000
        mov    dword ptr [esp + 0x14], 0xc1700000
L_817c:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea    edx, [esi + 0x28]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        lea    edx, [esi + 0x2c]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        push    8
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x28], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0x20]
        xor    edx, eax
        mov    eax, dword ptr [edx]
        xor    eax, 0x85739531
        and    ecx, 0xff
        mov    eax, dword ptr [eax + ecx*4 + 0x530]
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    8
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, edi
        mov    byte ptr [esp + 0x20], 0
        call    FUN_0041eb40
        push    0x10
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_0041eb40
        mov    cl, byte ptr [esp + 0x18]
        mov    dx, word ptr [esp + 0x1c]
        mov    eax, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        mov    byte ptr [esp + 0x24], cl
        mov    ecx, dword ptr [esp + 0x18]
        mov    word ptr [esp + 0x26], dx
        mov    eax, dword ptr [eax]
        and    ecx, 0xff
        xor    eax, ebp
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        cmp    eax, ebx
        je    L_9284
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    eax, dword ptr [ebp + 4]
        cmp    dword ptr [eax], 0x421
        jne    L_82ce
        mov    ebp, dword ptr [ebp + 0x280]
L_82ce:
        mov    ecx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ecx]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_8380
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x63941c]
        jmp    dword ptr [edx*4 + 0x639410]
        mov    dword ptr [esp + 0x38], 0x40a00000
        mov    dword ptr [esp + 0x44], 0x40a00000
        mov    dword ptr [esp + 0x14], 0x40a00000
        mov    dword ptr [esp + 0x40], 0xc0a00000
        mov    dword ptr [esp + 0x3c], 0xc0a00000
        mov    dword ptr [esp + 0x10], 0xc0a00000
        jmp    L_83b0
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_8380
        fld    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x30], edx
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        jmp    L_83b0
L_8380:
        mov    dword ptr [esp + 0x38], 0x41700000
        mov    dword ptr [esp + 0x44], 0x41700000
        mov    dword ptr [esp + 0x14], 0x41700000
        mov    dword ptr [esp + 0x40], 0xc1700000
        mov    dword ptr [esp + 0x3c], 0xc1700000
        mov    dword ptr [esp + 0x10], 0xc1700000
L_83b0:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea    edx, [esi + 0x28]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea    edx, [esi + 0x2c]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        push    0x10
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    dl, byte ptr [ecx + 0x28]
        mov    ax, word ptr [esp + 0x38]
        mov    byte ptr [esp + 0x24], dl
        lea    edx, [esp + 0x24]
        push    edx
        mov    word ptr [esp + 0x2a], ax
        call    FUN_004ceeb0
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    8
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x24], 0
        call    FUN_0041eb40
        push    0x10
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_0041eb40
        mov    dl, byte ptr [esp + 0x1c]
        mov    ax, word ptr [esp + 0x38]
        mov    ecx, dword ptr [g_007dab44]
        mov    byte ptr [esp + 0x20], dl
        mov    edx, dword ptr [g_007dab40]
        mov    word ptr [esp + 0x22], ax
        mov    eax, dword ptr [ecx]
        xor    eax, edx
        mov    edx, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [eax + 0x14]
        and    edx, 0xff
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        cmp    eax, ebx
        je    L_9284
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    edx, dword ptr [ebp + 4]
        cmp    dword ptr [edx], 0x421
        jne    L_84fc
        mov    ebp, dword ptr [ebp + 0x280]
L_84fc:
        mov    eax, dword ptr [ebp + 4]
        mov    eax, dword ptr [eax]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_85ae
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x6394cc]
        jmp    dword ptr [ecx*4 + 0x6394c0]
        mov    dword ptr [esp + 0x40], 0x40a00000
        mov    dword ptr [esp + 0x3c], 0x40a00000
        mov    dword ptr [esp + 0x10], 0x40a00000
        mov    dword ptr [esp + 0x44], 0xc0a00000
        mov    dword ptr [esp + 0x14], 0xc0a00000
        mov    dword ptr [esp + 0x18], 0xc0a00000
        jmp    L_85de
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_85ae
        fld    dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x2c]
        mov    ecx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x30], ecx
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        jmp    L_85de
L_85ae:
        mov    dword ptr [esp + 0x40], 0x41700000
        mov    dword ptr [esp + 0x3c], 0x41700000
        mov    dword ptr [esp + 0x10], 0x41700000
        mov    dword ptr [esp + 0x44], 0xc1700000
        mov    dword ptr [esp + 0x14], 0xc1700000
        mov    dword ptr [esp + 0x18], 0xc1700000
L_85de:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    edx
        push    eax
        lea    ecx, [esi + 0x24]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    ecx, [esi + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esi + 0x2c]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    ebp, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 0x38]
        xor    eax, ebp
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx + edx*4 + 0x530]
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x1c]
        xor    edx, 0x85739531
        push    edx
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    ebp, dword ptr [g_007dab40]
        lea    eax, [esp + 0x38]
        push    eax
        lea    ecx, [esp + 0x44]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x4c]
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, ebp
        mov    ecx, dword ptr [edx + 0x1c]
        lea    eax, [esp + 0x48]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    3
        push    6
        lea    ebp, [esi + 0x24]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    4
        push    6
        lea    ebx, [esi + 0x2c]
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x50]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x40]
        push    edx
        jmp    L_88eb
        push    8
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, edi
        mov    byte ptr [esp + 0x40], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esp + 0x38]
        xor    ecx, edx
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        and    eax, 0xff
        mov    eax, dword ptr [edx + eax*4 + 0x530]
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x1c]
        xor    eax, 0x85739531
        push    eax
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    ebx, dword ptr [g_007dab40]
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x44]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x30]
        push    ecx
        xor    eax, ebx
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    3
        push    6
        lea    ebp, [esi + 0x24]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        mov    edx, dword ptr [esp + 0x50]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    4
        push    6
        lea    ebx, [esi + 0x2c]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        push    ebx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ebp]
        xor    eax, ecx
        mov    ecx, dword ptr [ebx]
        push    ecx
        push    edx
        jmp    L_890b
        push    0x10
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    dl, byte ptr [ecx + 0x28]
        mov    ax, word ptr [esp + 0x38]
        mov    byte ptr [esp + 0x40], dl
        lea    edx, [esp + 0x40]
        push    edx
        mov    word ptr [esp + 0x46], ax
        call    FUN_004ceeb0
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x1c]
        xor    edx, 0x85739531
        push    edx
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    ebp, dword ptr [g_007dab40]
        lea    eax, [esp + 0x44]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, ebp
        mov    ecx, dword ptr [edx + 0x1c]
        lea    eax, [esp + 0x2c]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    3
        push    6
        lea    ebp, [esi + 0x24]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    4
        push    6
        lea    ebx, [esi + 0x2c]
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    edx
L_88eb:
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ebx]
        xor    eax, ecx
        mov    ecx, dword ptr [ebp]
        push    edx
        push    ecx
L_890b:
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_005bf170
        fstp    dword ptr [esi + 0x28]
        jmp    L_928b
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    ebp, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 0x38]
        xor    eax, ebp
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx + edx*4 + 0x530]
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    0x10
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    dl, byte ptr [ecx + 0x28]
        mov    ax, word ptr [esp + 0x24]
        mov    byte ptr [esp + 0x20], dl
        lea    edx, [esp + 0x20]
        push    edx
        mov    word ptr [esp + 0x26], ax
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    eax, dword ptr [ebp + 4]
        cmp    dword ptr [eax], 0x421
        jne    L_89ab
        mov    ebp, dword ptr [ebp + 0x280]
L_89ab:
        mov    ecx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ecx]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_8a5d
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x63957c]
        jmp    dword ptr [edx*4 + 0x639570]
        mov    dword ptr [esp + 0x38], 0x40a00000
        mov    dword ptr [esp + 0x44], 0x40a00000
        mov    dword ptr [esp + 0x18], 0x40a00000
        mov    dword ptr [esp + 0x40], 0xc0a00000
        mov    dword ptr [esp + 0x3c], 0xc0a00000
        mov    dword ptr [esp + 0x14], 0xc0a00000
        jmp    L_8a8d
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_8a5d
        fld    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x30], edx
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp    L_8a8d
L_8a5d:
        mov    dword ptr [esp + 0x38], 0x41700000
        mov    dword ptr [esp + 0x44], 0x41700000
        mov    dword ptr [esp + 0x18], 0x41700000
        mov    dword ptr [esp + 0x40], 0xc1700000
        mov    dword ptr [esp + 0x3c], 0xc1700000
        mov    dword ptr [esp + 0x14], 0xc1700000
L_8a8d:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea    edx, [esi + 0x28]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x2c]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        push    8
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x2c], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0x24]
        xor    edx, eax
        mov    eax, dword ptr [edx]
        xor    eax, 0x85739531
        and    ecx, 0xff
        mov    eax, dword ptr [eax + ecx*4 + 0x530]
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    0x10
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    al, byte ptr [ecx + 0x28]
        mov    dx, word ptr [esp + 0x20]
        mov    byte ptr [esp + 0x1c], al
        lea    eax, [esp + 0x1c]
        push    eax
        mov    word ptr [esp + 0x22], dx
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    ecx, dword ptr [ebp + 4]
        cmp    dword ptr [ecx], 0x421
        jne    L_8b9f
        mov    ebp, dword ptr [ebp + 0x280]
L_8b9f:
        mov    edx, dword ptr [ebp + 4]
        mov    eax, dword ptr [edx]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_8c51
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x63962c]
        jmp    dword ptr [ecx*4 + 0x639620]
        mov    dword ptr [esp + 0x38], 0x40a00000
        mov    dword ptr [esp + 0x44], 0x40a00000
        mov    dword ptr [esp + 0x18], 0x40a00000
        mov    dword ptr [esp + 0x40], 0xc0a00000
        mov    dword ptr [esp + 0x3c], 0xc0a00000
        mov    dword ptr [esp + 0x14], 0xc0a00000
        jmp    L_8c81
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_8c51
        fld    dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x2c]
        mov    ecx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x30], ecx
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp    L_8c81
L_8c51:
        mov    dword ptr [esp + 0x38], 0x41700000
        mov    dword ptr [esp + 0x44], 0x41700000
        mov    dword ptr [esp + 0x18], 0x41700000
        mov    dword ptr [esp + 0x40], 0xc1700000
        mov    dword ptr [esp + 0x3c], 0xc1700000
        mov    dword ptr [esp + 0x14], 0xc1700000
L_8c81:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x44]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x44]
        push    edx
        push    eax
        lea    ecx, [esi + 0x24]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x50]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x40]
        push    edx
        push    eax
        lea    ecx, [esi + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    ecx, [esi + 0x2c]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        push    0x10
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    al, byte ptr [ecx + 0x28]
        mov    dx, word ptr [esp + 0x24]
        mov    byte ptr [esp + 0x20], al
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x26], dx
        call    FUN_004ceeb0
        cmp    eax, ebx
        je    L_9284
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
        push    0x10
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    dl, byte ptr [ecx + 0x28]
        mov    ax, word ptr [esp + 0x1c]
        mov    byte ptr [esp + 0x10], dl
        lea    edx, [esp + 0x10]
        push    edx
        mov    word ptr [esp + 0x16], ax
        call    FUN_004ceeb0
        mov    ebp, eax
        cmp    ebp, ebx
        je    L_9284
        push    ebp
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        mov    eax, dword ptr [ebp + 4]
        cmp    dword ptr [eax], 0x421
        jne    L_8d8c
        mov    ebp, dword ptr [ebp + 0x280]
L_8d8c:
        mov    ecx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ecx]
        add    eax, 0xfffffbdd
        cmp    eax, 0xa2
        ja    L_8e3e
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x6396dc]
        jmp    dword ptr [edx*4 + 0x6396d0]
        mov    dword ptr [esp + 0x38], 0x40a00000
        mov    dword ptr [esp + 0x44], 0x40a00000
        mov    dword ptr [esp + 0x18], 0x40a00000
        mov    dword ptr [esp + 0x40], 0xc0a00000
        mov    dword ptr [esp + 0x3c], 0xc0a00000
        mov    dword ptr [esp + 0x14], 0xc0a00000
        jmp    L_8e6e
        mov    eax, dword ptr [ebp + 0x124]
        cmp    eax, ebx
        je    L_8e3e
        fld    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x3c]
        fld    st(0)
        fadd    dword ptr [eax + 0x40]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x30], edx
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp    L_8e6e
L_8e3e:
        mov    dword ptr [esp + 0x38], 0x41700000
        mov    dword ptr [esp + 0x44], 0x41700000
        mov    dword ptr [esp + 0x18], 0x41700000
        mov    dword ptr [esp + 0x40], 0xc1700000
        mov    dword ptr [esp + 0x3c], 0xc1700000
        mov    dword ptr [esp + 0x14], 0xc1700000
L_8e6e:
        push    1
        push    ebx
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea    edx, [esi + 0x28]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea    edx, [esi + 0x2c]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_928b
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x38]
        xor    edx, 0x85739531
        cmp    dword ptr [edx + ecx*4 + 0x530], ebx
        je    L_8f19
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + ecx*4 + 0x530]
        push    ecx
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
L_8f19:
        lea    ebx, [esi + 0x1c]
        mov    ecx, ebx
        call    FUN_0041fcb0
        mov    edx, dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        mov    ecx, dword ptr [g_007b8d90]
        lea    ebp, [esi + 0x24]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [ebp], edx
        mov    edx, dword ptr [g_007dab44]
        mov    dword ptr [ebp + 4], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        push    ecx
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ebx, dword ptr [g_007dab40]
        lea    edx, [esp + 0x38]
        push    edx
        lea    eax, [esp + 0x44]
        push    eax
        mov    eax, dword ptr [g_007dab44]
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, ebx
        mov    ecx, dword ptr [ecx + 0x1c]
        lea    edx, [esp + 0x48]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    5
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x44]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x44]
        push    edx
        push    eax
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    6
        push    6
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea    ecx, [esi + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    7
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x50]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x40]
        push    edx
        push    eax
        lea    ecx, [esi + 0x2c]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    byte ptr [esi + 0xb9], 1
L_9002:
        lea    ecx, [esi + 0x14]
        call    FUN_0041fd80
        test    eax, eax
        jne    L_928b
        jmp    L_9284
        push    8
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, edi
        mov    byte ptr [esp + 0x40], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x38]
        xor    eax, ebp
        mov    edx, dword ptr [eax]
        and    ecx, 0xff
        xor    edx, 0x85739531
        mov    ebp, dword ptr [edx + ecx*4 + 0x530]
        cmp    ebp, ebx
        lea    ecx, [ecx*4 + 0x530]
        je    L_9070
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + ecx]
        push    ecx
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
L_9070:
        lea    ebx, [esi + 0x1c]
        mov    ecx, ebx
        call    FUN_0041fcb0
        mov    edx, dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        mov    ecx, dword ptr [g_007b8d90]
        lea    ebp, [esi + 0x24]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [ebp], edx
        mov    edx, dword ptr [g_007dab44]
        mov    dword ptr [ebp + 4], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        push    ecx
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ebx, dword ptr [g_007dab40]
        lea    edx, [esp + 0x40]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        mov    eax, dword ptr [g_007dab44]
        lea    ecx, [esp + 0x44]
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, ebx
        mov    ecx, dword ptr [ecx + 0x1c]
        lea    edx, [esp + 0x30]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    5
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x4c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    edx
        push    eax
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    6
        push    6
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea    ecx, [esi + 0x28]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    7
        push    6
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        lea    ecx, [esi + 0x2c]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        jmp    L_9002
        push    0x10
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007db094]
        mov    al, byte ptr [ecx + 0x28]
        mov    dx, word ptr [esp + 0x38]
        mov    byte ptr [esp + 0x40], al
        lea    eax, [esp + 0x40]
        push    eax
        mov    word ptr [esp + 0x46], dx
        call    FUN_004ceeb0
        cmp    eax, ebx
        je    L_9197
        push    eax
        lea    ecx, [esi + 0x14]
        call    FUN_0041fcd0
L_9197:
        lea    ebx, [esi + 0x1c]
        mov    ecx, ebx
        call    FUN_0041fcb0
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d90]
        lea    ebp, [esi + 0x24]
        mov    dword ptr [ebp], ecx
        mov    ecx, dword ptr [g_007dab44]
        mov    dword ptr [ebp + 8], eax
        mov    eax, dword ptr [g_007dab40]
        mov    dword ptr [ebp + 4], edx
        mov    edx, dword ptr [ecx]
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x1c]
        xor    eax, 0x85739531
        push    eax
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ebx, dword ptr [g_007dab40]
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x2c]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x2c]
        push    ecx
        xor    eax, ebx
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    5
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x50]
        mov    edx, dword ptr [esp + 0x48]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    6
        push    6
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea    eax, [esi + 0x28]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    7
        push    6
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x2c]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esi + 0x2c]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        lea    ecx, [esi + 0x14]
        call    FUN_0041fd80
        test    eax, eax
        jne    L_928b
L_9284:
        mov    byte ptr [esi + 0xb8], 1
L_928b:
        mov    al, byte ptr [esi + 0xb8]
        test    al, al
        jne    L_9328
        lea    ecx, [esi + 0x14]
        call    FUN_0041fd80
        lea    ecx, [esi + 0x1c]
        mov    ebx, eax
        call    FUN_0041fd80
        test    eax, eax
        je    L_9328
        mov    ecx, dword ptr [ebx + 0x3f8]
        mov    dword ptr [esp + 0x30], ecx
L_92b9:
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        je    L_9328
        mov    ebx, dword ptr [eax]
        test    ebx, ebx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x30], edx
        je    L_9328
        mov    ebp, dword ptr [ebx + 0x184]
        mov    ecx, ebp
        mov    eax, 1
        shl    eax, cl
        test    dword ptr [esi + 0x10], eax
        je    L_92b9
        mov    eax, dword ptr [g_007f2548]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_92b9
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fd80
        push    eax
        mov    ecx, ebx
        call    FUN_005e3cc0
        test    al, al
        je    L_931e
        lea    eax, [esi + ebp*4 + 0x34]
        push    3
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax], 0
        call    FUN_0041eb40
        jmp    L_92b9
L_931e:
        mov    dword ptr [esi + ebp*4 + 0x34], 0
        jmp    L_92b9
L_9328:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    
        // jump-table data @ 0x00639330 (0 relocated pointers)
        // jump-table data @ 0x00639360 (0 relocated pointers)
        // jump-table data @ 0x00639410 (0 relocated pointers)
        // jump-table data @ 0x006394C0 (0 relocated pointers)
        // jump-table data @ 0x00639570 (0 relocated pointers)
        // jump-table data @ 0x00639620 (0 relocated pointers)
        // jump-table data @ 0x006396D0 (0 relocated pointers)
    }
}
