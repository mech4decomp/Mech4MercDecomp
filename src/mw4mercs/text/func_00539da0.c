/*
 * FUN_00539da0 (extent 0x539da0-0x53a0b2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5ac;
extern float  g_0076c5b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_00539690(void);
extern void __cdecl FUN_00539f90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00539da0(void)
{
    __asm {
        mov    al, byte ptr [esp + 8]
        sub    esp, 0x28
        push    esi
        test    al, al
        mov    eax, dword ptr [esp + 0x30]
        push    edi
        mov    esi, ecx
        jne    L_9dc2
        mov    ecx, dword ptr [g_007db094]
        cmp    al, byte ptr [ecx + 0x28]
        jne    L_9f7d
L_9dc2:
        mov    ecx, dword ptr [esp + 0x38]
        lea    edx, [esp + 0x3c]
        push    edx
        push    ecx
        push    eax
        mov    ecx, esi
        call    FUN_00539f90
        push    0
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x3c], al
        call    FUN_0041ee70
        push    1
        lea    edx, [esp + 0x3c]
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_0041f030
        push    1
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0041f030
        push    1
        lea    ecx, [esp + 0x38]
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_0041f030
        mov    edx, dword ptr [esp + 0x40]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        cmp    ecx, 0xde
        jbe    L_9e2f
        mov    ecx, 0xde
L_9e2f:
        push    ecx
        mov    byte ptr [ecx + edx - 1], 0
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_0041f030
        mov    edx, dword ptr [esp + 8]
        push    0
        lea    ecx, [esp + 0xc]
        call    dword ptr [edx + 0xc]
        mov    al, byte ptr [esp + 0x38]
        test    al, al
        mov    dword ptr [esp + 0x10], 0xffffffec
        je    L_9ecf
        mov    eax, dword ptr [esp + 0x34]
        fld    dword ptr [g_0076c5b0]
        and    eax, 0xff
        fst    dword ptr [esp + 0x40]
        mov    ecx, eax
        shl    ecx, 7
        add    ecx, eax
        shl    ecx, 3
        sub    ecx, eax
        lea    eax, [esi + ecx*8 + 0x35c8]
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        jbe    L_9eff
        mov    eax, dword ptr [eax + 8]
L_9e8b:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    ecx
        jne    L_9e8b
        fstp    dword ptr [esp + 0x40]
L_9e97:
        push    0
        call    FUN_00707e70
        mov    eax, dword ptr [esp + 0x34]
        and    eax, 0xff
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        fsub    qword ptr [esi + edx*8 + 0x35d4]
        fadd    dword ptr [esp + 0x40]
        fcomp    dword ptr [g_0076c5ac]
        fnstsw  ax
        test    ah, 1
        jne    L_9f74
L_9ecf:
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        je    L_9f03
        mov    edx, dword ptr [g_007db094]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x28]
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00539690
        lea    ecx, [esp + 8]
        call    FUN_0041ef60
        pop    edi
        pop    esi
        add    esp, 0x28
        ret    0x10
L_9eff:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_9e97
L_9f03:
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x20]
        mov    esi, dword ptr [g_007dab40]
        sub    eax, ecx
        mov    ecx, dword ptr [g_007db094]
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x28]
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, esi
        lea    esi, [ecx + 0x14]
        mov    ecx, dword ptr [esi]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    edi, dword ptr [ecx + edx*4 + 0x3c44]
        add    ecx, 0x3c3c
        shl    eax, 3
        add    edi, eax
        mov    dword ptr [ecx + edx*4 + 8], edi
        mov    edi, dword ptr [ecx + 0xc00]
        add    edi, eax
        push    1
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [ecx + 0xc00], edi
        mov    ecx, dword ptr [esi]
        push    0x1b
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004ce190
L_9f74:
        lea    ecx, [esp + 8]
        call    FUN_0041ef60
L_9f7d:
        pop    edi
        pop    esi
        add    esp, 0x28
        ret    0x10
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
        mov    edx, dword ptr [g_007db094]
        push    ebx
        mov    bl, byte ptr [esp + 0xc]
        test    bl, bl
        push    esi
        jne    L_9fb0
        cmp    al, byte ptr [edx + 0x28]
        jne    L_9fcd
        pop    esi
        xor    al, al
        pop    ebx
        ret    0xc
L_9fb0:
        cmp    al, byte ptr [edx + 0x28]
        jne    L_9fcd
        mov    dl, byte ptr [ecx + 0x16]
        test    dl, dl
        je    L_9fcd
        mov    edx, dword ptr [ecx + 0x50]
        mov    esi, dword ptr [edx + 0x10]
        test    esi, esi
        je    L_9fcd
        pop    esi
        xor    al, al
        pop    ebx
        ret    0xc
L_9fcd:
        and    eax, 0xff
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        mov    eax, dword ptr [ecx + edx*8 + 0x3584]
        test    eax, eax
        jne    L_a004
        cmp    bl, 7
        je    L_a0ab
        cmp    bl, 8
        je    L_a0ab
        mov    bl, 7
        pop    esi
        mov    al, bl
        pop    ebx
        ret    0xc
L_a004:
        mov    esi, dword ptr [eax + 0x170]
        test    esi, esi
        jne    L_a017
        mov    bl, 3
        pop    esi
        mov    al, bl
        pop    ebx
        ret    0xc
L_a017:
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        je    L_a02f
        cmp    bl, 3
        je    L_a02f
        cmp    bl, 5
        je    L_a02f
        mov    bl, 3
        jmp    L_a09e
L_a02f:
        cmp    bl, 4
        jne    L_a062
        mov    eax, dword ptr [esi + 0x4cc]
        cmp    eax, 8
        je    L_a0a9
        mov    ecx, dword ptr [ecx + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        je    L_a0a9
        mov    ecx, dword ptr [eax + 0x514]
        mov    edx, dword ptr [esp + 0x14]
        pop    esi
        mov    al, bl
        mov    byte ptr [edx], cl
        pop    ebx
        ret    0xc
L_a062:
        cmp    bl, 5
        jne    L_a099
        mov    eax, dword ptr [esi + 0x4cc]
        cmp    eax, 8
        jne    L_a076
L_a072:
        mov    bl, 3
        jmp    L_a09e
L_a076:
        mov    ecx, dword ptr [ecx + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        je    L_a072
        mov    eax, dword ptr [eax + 0x514]
        mov    ecx, dword ptr [esp + 0x14]
        mov    byte ptr [ecx], al
        pop    esi
        mov    al, bl
        pop    ebx
        ret    0xc
L_a099:
        cmp    bl, 3
        jne    L_a0ab
L_a09e:
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_a0ab
L_a0a9:
        mov    bl, 2
L_a0ab:
        pop    esi
        mov    al, bl
        pop    ebx
        ret    0xc
    }
}
