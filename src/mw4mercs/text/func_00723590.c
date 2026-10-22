/*
 * FUN_00723590 (extent 0x723590-0x7238cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b46c;
extern int    g_0076b470;
extern int    g_0076b56c;
extern float  g_0076d064;
extern float  g_0076d588;
extern int    g_00857f44;
extern char   g_00858894;
extern int    g_00858940;
extern int    g_00858944;
extern char   g_00858954;
extern int    g_00858a4c;
extern char   g_00858ae0;
extern char   g_00858ae1;
extern int    g_00858bf8;
extern int    g_00858c10;
extern int    g_00858c14;
extern char   g_0087dd0a;
extern float  g_0087dd1c;
extern float  g_0087dd20;
extern int    g_0087dd28;
extern int    g_0087dd38;
extern int    g_0087dd3c;
extern int    g_0087dd40;
extern int    g_0087dd44;
extern int    g_0087dd48;
extern int    g_0087dd4c;
extern char   g_0087dd50;
extern char   g_0087dd51;
extern char   g_0087dd60;
extern int    g_0087e1ec;
extern int    g_0087e1f0;
extern void __cdecl FUN_00723a30(void);
extern void __cdecl FUN_007554a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00723590(void)
{
    __asm {
        mov    al, byte ptr [g_00858ae1]
        sub    esp, 0x1c
        test    al, al
        push    ebx
        push    ebp
        push    esi
        je    L_3896
        mov    al, byte ptr [g_00858ae0]
        test    al, al
        je    L_3896
        mov    al, byte ptr [g_0087dd60]
        test    al, al
        je    L_3607
        mov    eax, dword ptr [g_00858944]
        dec    eax
        mov    dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        mov    byte ptr [g_0087dd60], 0
        fmul    dword ptr [g_0087dd1c]
        fiadd    dword ptr [g_00858c14]
        call    FUN_0075db4a
        mov    ecx, dword ptr [g_00858940]
        dec    ecx
        mov    dword ptr [esp + 0xc], ecx
        fild    dword ptr [esp + 0xc]
        push    eax
        fmul    dword ptr [g_0087dd20]
        fiadd    dword ptr [g_00858c10]
        call    FUN_0075db4a
        push    eax
        call    dword ptr [g_0076b46c]
L_3607:
        lea    edx, [esp + 0x10]
        push    edx
        call    dword ptr [g_0076b470]
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_3645
        mov    ecx, dword ptr [g_00858bf8]
        lea    eax, [esp + 0x18]
        push    eax
        push    ecx
        call    dword ptr [g_0076b56c]
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x1c]
        sub    eax, esi
        mov    dword ptr [esp + 0x10], eax
        jmp    L_365f
L_3645:
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, dword ptr [g_00858c10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [g_00858c14]
        sub    eax, esi
        mov    dword ptr [esp + 0x10], eax
L_365f:
        mov    ebx, dword ptr [g_00858940]
        sub    ecx, edx
        xor    ebp, ebp
        xor    edx, edx
        cmp    eax, ebp
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [g_00858a4c], edx
        jge    L_3689
        neg    eax
        mov    edx, eax
        mov    dword ptr [g_00858a4c], edx
        mov    dword ptr [esp + 0x10], ebp
        jmp    L_36a3
L_3689:
        lea    esi, [ebx - 1]
        cmp    eax, esi
        jl    L_36a3
        sub    eax, ebx
        inc    eax
        cmp    eax, ebp
        jbe    L_369f
        mov    edx, eax
        mov    dword ptr [g_00858a4c], edx
L_369f:
        mov    dword ptr [esp + 0x10], esi
L_36a3:
        cmp    ecx, ebp
        mov    esi, dword ptr [g_00858944]
        push    edi
        jge    L_36c0
        neg    ecx
        cmp    ecx, edx
        jbe    L_36ba
        mov    dword ptr [g_00858a4c], ecx
L_36ba:
        mov    dword ptr [esp + 0x18], ebp
        jmp    L_36d9
L_36c0:
        lea    edi, [esi - 1]
        cmp    ecx, edi
        jl    L_36d9
        sub    ecx, esi
        lea    eax, [ecx + 1]
        cmp    eax, edx
        jbe    L_36d5
        mov    dword ptr [g_00858a4c], eax
L_36d5:
        mov    dword ptr [esp + 0x18], edi
L_36d9:
        fild    dword ptr [esp + 0x14]
        dec    ebx
        mov    dword ptr [esp + 0x10], ebx
        dec    esi
        fadd    qword ptr [g_0076d588]
        pop    edi
        fild    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0xc], esi
        fdivp st(1), st(0)
        fstp    dword ptr [g_0087dd3c]
        fild    dword ptr [esp + 0x14]
        fadd    qword ptr [g_0076d588]
        fild    dword ptr [esp + 0xc]
        fdivp st(1), st(0)
        fst    dword ptr [g_0087dd38]
        fld    dword ptr [g_0087dd3c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jne    L_372d
        mov    dword ptr [g_0087dd3c], 0x3f800000
L_372d:
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jne    L_3744
        mov    dword ptr [g_0087dd38], 0x3f800000
L_3744:
        mov    eax, dword ptr [g_00857f44]
        cmp    eax, ebp
        jne    L_3766
        pop    esi
        mov    dword ptr [g_0087dd44], ebp
        mov    dword ptr [g_0087dd4c], ebp
        mov    dword ptr [g_0087dd48], ebp
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    
L_3766:
        lea    edx, [esp + 0x18]
        push    edx
        push    0x10
        mov    ebx, 1
        push    eax
        mov    byte ptr [g_0087dd0a], bl
        call    FUN_007554a0
        cmp    eax, ebp
        mov    byte ptr [g_0087dd0a], 0
        jge    L_3796
        pop    esi
        pop    ebp
        mov    byte ptr [g_00858894], bl
        pop    ebx
        add    esp, 0x1c
        ret    
L_3796:
        mov    al, byte ptr [g_0087dd50]
        test    al, al
        push    5
        je    L_37e2
        call    FUN_00723a30
        mov    esi, eax
        neg    esi
        sbb    esi, esi
        push    4
        and    esi, 0x10
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 8
        push    3
        or    esi, eax
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 4
        push    ebx
        or    esi, eax
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 2
        or    esi, eax
        push    2
        jmp    L_3821
L_37e2:
        call    FUN_00723a30
        mov    esi, eax
        neg    esi
        sbb    esi, esi
        push    4
        and    esi, 0x10
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 8
        push    3
        or    esi, eax
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 4
        push    2
        or    esi, eax
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        and    eax, 2
        or    esi, eax
        push    ebx
L_3821:
        call    FUN_00723a30
        neg    eax
        sbb    eax, eax
        neg    eax
        or    esi, eax
        mov    al, byte ptr [g_0087dd51]
        test    al, al
        mov    dword ptr [g_0087dd28], esi
        je    L_387c
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, ecx
        cdq    
        mov    esi, 0x78
        idiv    esi
        test    edx, edx
        jne    L_386a
        mov    eax, 0x88888889
        imul    ecx
        add    edx, ecx
        sar    edx, 6
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        mov    dword ptr [g_0087dd44], edx
        jmp    L_3882
L_386a:
        mov    eax, ecx
        cdq    
        idiv    dword ptr [g_0087dd40]
        neg    eax
        mov    dword ptr [g_0087dd44], eax
        jmp    L_3882
L_387c:
        mov    dword ptr [g_0087dd44], ebp
L_3882:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [g_0087dd4c], ecx
        mov    dword ptr [g_0087dd48], edx
L_3896:
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_0087e1ec]
        mov    edx, dword ptr [g_0087e1f0]
        lea    eax, [ecx + 1]
        and    eax, 0xff
        cmp    eax, edx
        je    L_38c8
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx*4 + 0x87e1f4], edx
        mov    dword ptr [g_0087e1ec], eax
L_38c8:
        ret    4
    }
}
