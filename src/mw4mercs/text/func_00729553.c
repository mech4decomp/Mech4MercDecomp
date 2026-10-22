/*
 * FUN_00729553 (extent 0x729553-0x7299b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern float  g_0076d064;
extern float  g_0076f5d8;
extern float  g_00770168;
extern float  g_007a5640;
extern float  g_007b7118;
extern int    g_008816c8;
extern int    g_008816cc;
extern int    g_008816d0;
extern float  g_008816d8;
extern char   g_008816dc;
extern char   g_008816dd;
extern int    g_008816e0;
extern char   g_008816e4;
extern char   g_008816e5;
extern char   g_008816e6;
extern char   g_008816e7;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fbc60(void);

__declspec(naked) void FUN_00729553(void)
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x204
        mov    al, byte ptr [g_008816e7]
        test    al, al
        jne    L_99b1
        mov    eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        mov    esi, dword ptr [eax]
        push    edi
L_957e:
        cmp    byte ptr [esi], 0x2f
        jne    L_99a9
        mov    edi, dword ptr [g_0076b2b0]
        push    6
        push    esi
        push    0x7a583c
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_969f
        mov    al, byte ptr [esi + 6]
        add    esi, 6
        cmp    al, 0x3c
        lea    edi, [ebp - 0x104]
        je    L_95c6
        push    0x7a567c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_95c7
        int 3    
        jmp    L_95c7
L_95c6:
        inc    esi
L_95c7:
        mov    al, byte ptr [esi]
        test    al, al
        je    L_95db
L_95cd:
        cmp    al, 0x3e
        je    L_95db
        inc    esi
        mov    byte ptr [edi], al
        mov    al, byte ptr [esi]
        inc    edi
        test    al, al
        jne    L_95cd
L_95db:
        cmp    byte ptr [esi], 0x3e
        mov    byte ptr [edi], 0
        je    L_95f7
        push    0x7a567c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_95f8
        int 3    
        jmp    L_95f8
L_95f7:
        inc    esi
L_95f8:
        lea    ecx, [ebp - 0x104]
        push    ecx
        lea    edx, [ebp - 0x204]
        push    edx
        call    FUN_006fbc60
        mov    ebx, dword ptr [g_008816c8]
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [ebp - 0x204]
        repne scasb
        not    ecx
        dec    ecx
        test    ebx, ebx
        mov    dword ptr [ebp - 4], ecx
        je    L_9684
L_9628:
        mov    ecx, dword ptr [ebp - 4]
        push    ecx
        lea    edx, [ebp - 0x204]
        lea    eax, [ebx + 0xc]
        push    edx
        push    eax
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        je    L_9676
        xor    eax, eax
        or    ecx, 0xffffffff
        lea    edi, [ebp - 0x104]
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        lea    eax, [ebp - 0x104]
        push    eax
        lea    eax, [ebx + 0xc]
        push    eax
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        je    L_9676
        mov    ebx, dword ptr [ebx + 4]
        test    ebx, ebx
        jne    L_9628
        jmp    L_9684
L_9676:
        test    ebx, ebx
        mov    dword ptr [g_008816cc], ebx
        jne    L_957e
L_9684:
        push    0x7a5658
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_957e
        int 3    
        jmp    L_957e
L_969f:
        push    7
        push    esi
        push    0x7a5834
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_96fa
        add    esi, 7
        xor    ecx, ecx
        mov    edx, 8
L_96ba:
        movsx    eax, byte ptr [esi]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + 0x8aa610]
        shl    ecx, 4
        inc    esi
        mov    eax, ebx
        cmp    eax, 0x30
        jb    L_96d5
        cmp    eax, 0x39
        jbe    L_96df
L_96d5:
        cmp    eax, 0x61
        jb    L_96ec
        cmp    eax, 0x66
        ja    L_96ec
L_96df:
        sub    eax, 0x30
        cmp    eax, 9
        jbe    L_96ea
        sub    eax, 0x27
L_96ea:
        add    ecx, eax
L_96ec:
        dec    edx
        jne    L_96ba
        mov    dword ptr [g_008816d0], ecx
        jmp    L_957e
L_96fa:
        push    6
        push    esi
        push    0x7a582c
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_982a
        mov    al, byte ptr [esi + 6]
        add    esi, 6
        xor    cl, cl
        cmp    al, 0x3c
        jne    L_971e
        mov    cl, 1
        inc    esi
L_971e:
        mov    al, byte ptr [esi]
        xor    bl, bl
        cmp    al, 0x2d
        jne    L_9729
        mov    bl, 1
        inc    esi
L_9729:
        movsx    edx, byte ptr [esi]
        movsx    eax, byte ptr [esi + 1]
        sub    edx, 0x30
        inc    esi
        mov    dword ptr [ebp - 4], edx
        add    eax, -0x30
        test    eax, eax
        fild    dword ptr [ebp - 4]
        mov    dword ptr [ebp - 4], eax
        fstp    dword ptr [g_008816d8]
        jl    L_9765
        cmp    eax, 9
        jg    L_9765
        fld    dword ptr [g_008816d8]
        inc    esi
        fmul    dword ptr [g_00770168]
        fiadd    dword ptr [ebp - 4]
        fstp    dword ptr [g_008816d8]
L_9765:
        test    cl, cl
        je    L_9783
        cmp    byte ptr [esi], 0x3e
        je    L_9782
        push    0x7a56f4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9783
        int 3    
        jmp    L_9783
L_9782:
        inc    esi
L_9783:
        mov    eax, dword ptr [g_008816cc]
        test    eax, eax
        jne    L_97a3
        push    0x7a56c0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_979e
        int 3    
L_979e:
        mov    eax, dword ptr [g_008816cc]
L_97a3:
        test    bl, bl
        mov    ecx, dword ptr [eax + 0x75c]
        je    L_97df
        test    ecx, ecx
        jne    L_97d1
        fild    dword ptr [eax + 0x128]
        fld    st(0)
        fmul    dword ptr [g_007a5640]
        fdiv    dword ptr [g_008816d8]
        fdivr st(0), st(1)
        fstp    dword ptr [g_008816d8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_97f3
L_97d1:
        fld    dword ptr [g_008816d8]
        fmul    dword ptr [g_0076f5d8]
        jmp    L_97ed
L_97df:
        fild    dword ptr [eax + 0x128]
        test    ecx, ecx
        fmul    dword ptr [g_008816d8]
L_97ed:
        fstp    dword ptr [g_008816d8]
L_97f3:
        fild    dword ptr [eax + 0x128]
        fdivr    dword ptr [g_008816d8]
        fst    dword ptr [g_007b7118]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x40
        jne    L_981e
        mov    byte ptr [g_008816dc], 1
        jmp    L_957e
L_981e:
        mov    byte ptr [g_008816dc], 0
        jmp    L_957e
L_982a:
        push    0xf
        push    esi
        push    0x7a581c
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_9848
        add    esi, 0xf
        mov    byte ptr [g_008816e4], al
        jmp    L_957e
L_9848:
        push    0xf
        push    esi
        push    0x7a580c
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_9868
        add    esi, 0xf
        mov    byte ptr [g_008816e4], 1
        jmp    L_957e
L_9868:
        push    7
        push    esi
        push    0x7a5804
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_9888
        add    esi, 7
        mov    byte ptr [g_008816dd], 1
        jmp    L_957e
L_9888:
        push    7
        push    esi
        push    0x7a57fc
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_98a6
        add    esi, 7
        mov    byte ptr [g_008816dd], al
        jmp    L_957e
L_98a6:
        push    0xb
        push    esi
        push    0x7a57f0
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_98c4
        add    esi, 0xb
        mov    dword ptr [g_008816e0], eax
        jmp    L_957e
L_98c4:
        push    0xc
        push    esi
        push    0x7a57e0
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_98e7
        add    esi, 0xc
        mov    dword ptr [g_008816e0], 1
        jmp    L_957e
L_98e7:
        push    0xd
        push    esi
        push    0x7a57d0
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_990a
        add    esi, 0xd
        mov    dword ptr [g_008816e0], 2
        jmp    L_957e
L_990a:
        push    0xd
        push    esi
        push    0x7a57c0
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_992d
        add    esi, 0xd
        mov    dword ptr [g_008816e0], 3
        jmp    L_957e
L_992d:
        push    7
        push    esi
        push    0x7a57b8
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_994d
        add    esi, 7
        mov    byte ptr [g_008816e5], 1
        jmp    L_957e
L_994d:
        push    7
        push    esi
        push    0x7a57b0
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_996b
        add    esi, 7
        mov    byte ptr [g_008816e5], al
        jmp    L_957e
L_996b:
        push    9
        push    esi
        push    0x7a57a4
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_9989
        add    esi, 9
        mov    byte ptr [g_008816e6], al
        jmp    L_957e
L_9989:
        push    9
        push    esi
        push    0x7a5798
        call    edi
        add    esp, 0xc
        test    eax, eax
        jne    L_99a9
        add    esi, 9
        mov    byte ptr [g_008816e6], 1
        jmp    L_957e
L_99a9:
        mov    eax, dword ptr [ebp + 8]
        pop    edi
        mov    dword ptr [eax], esi
        pop    esi
        pop    ebx
L_99b1:
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
