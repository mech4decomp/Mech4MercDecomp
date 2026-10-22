/*
 * FUN_00539ceb (extent 0x539ceb-0x539f85) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5ac;
extern float  g_0076c5b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e790(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_00539690(void);
extern void __cdecl FUN_00539f90(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00539ceb(void)
{
    __asm {
        /* __emit: 0x539CEB-0x539D10 is prior fn's jump-table DATA (9 x 4-byte
           little-endian entries) + nop pad, not code. gen_bigfunc mis-disassembled
           it; emit the exact reference bytes (incl. 0x00 high bytes). */
        __emit 0x90
        __emit 0x0B
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0x4D
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0x28
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0x4D
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0x76
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0xE5
        __emit 0x9B
        __emit 0x53
        __emit 0x00
        __emit 0x50
        __emit 0x9C
        __emit 0x53
        __emit 0x00
        __emit 0xB4
        __emit 0x9C
        __emit 0x53
        __emit 0x00
        __emit 0x5F
        __emit 0x9C
        __emit 0x53
        __emit 0x00
        sub    esp, 0x30
        push    esi
        push    0x77b684
        mov    esi, ecx
        call    FUN_006fc4d0
        test    al, al
        je    L_9d9b
        push    0
        push    0x77b684
        lea    ecx, [esp + 0xc]
        call    FUN_0041de80
        push    0
        push    0xde
        lea    eax, [esi + 0x309c]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esi + 0x3098], 0
        call    FUN_0041e790
        test    al, al
        je    L_9d92
L_9d59:
        mov    edx, dword ptr [esi + 0x3098]
        inc    edx
        mov    eax, edx
        cmp    eax, 5
        mov    dword ptr [esi + 0x3098], edx
        je    L_9d92
        lea    ecx, [eax + eax*8]
        lea    eax, [eax + ecx*4]
        push    0
        lea    edx, [eax + eax*2]
        push    0xde
        lea    eax, [esi + edx*2 + 0x309c]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0041e790
        test    al, al
        jne    L_9d59
L_9d92:
        lea    ecx, [esp + 4]
        call    FUN_0041dec0
L_9d9b:
        pop    esi
        add    esp, 0x30
        ret    
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
    }
}
