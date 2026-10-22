/*
 * FUN_006780b9 (extent 0x6780b9-0x678277) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_00501d90(void);
extern void __cdecl FUN_00674770(void);
extern void __cdecl FUN_00674890(void);

__declspec(naked) void FUN_006780b9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00674890
        mov    ecx, dword ptr [esi + 0x10]
        add    esp, 0x14
        cmp    ecx, 0xb
        jne    L_811d
        test    bl, bl
        jne    L_811d
        mov    ax, word ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    edx, dword ptr [esi]
        mov    word ptr [esp + 0x18], ax
        lea    eax, [esp + 0x18]
        push    eax
        mov    word ptr [esp + 0x1e], cx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    al, 1
L_811d:
        pop    edi
        pop    esi
        pop    ebx
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0x38
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00674770
        add    esp, 4
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00674890
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    esp, 0x14
        cmp    eax, 0xb
        jne    L_81d7
        test    bl, bl
        jne    L_81a1
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [edx + 4]
        mov    cl, 1
L_81a1:
        fld    dword ptr [edi + 0x34]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_81d7
        fld    dword ptr [edi + 0x34]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797c74
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    
L_81d7:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x60
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        mov    dword ptr [eax], 0x60
        pop    esi
        ret    
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
        call    FUN_00501d90
        mov    eax, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 4
        mov    dword ptr [esp + 0xc], 0
        jne    L_8272
        push    0x785990
        lea    ecx, [esp + 0x10]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_8272
        push    eax
        push    0x773250
        mov    ecx, edi
        call    FUN_00411c40
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_8272
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8272
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8272:
        pop    edi
        pop    esi
        ret    4
    }
}
