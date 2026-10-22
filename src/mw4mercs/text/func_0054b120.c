/* func_0054b120.c - inline-asm transcription of FUN_0054b120 (2211 B) */

extern int g_007dc6b4;
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f1f84;
extern float g_0076c5b0;
extern float g_0077b9a8;
extern int g_007f26a4;
extern int g_007f268c;
extern char g_0076b768[];
extern char g_0077d024[];
extern char g_0077d014[];

extern void __cdecl FUN_004de980(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0062c600(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_006f2d90(void);
extern void __cdecl FUN_006f2320(void);
extern void __cdecl FUN_006f2f10(void);
extern void __cdecl FUN_006f2310(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006290a0(void);
extern void __cdecl FUN_00628ed0(void);
extern void __cdecl FUN_00630920(void);
extern void __cdecl FUN_0054bd70(void);
extern void __cdecl FUN_0054e8a0(void);
extern void __cdecl FUN_0054e910(void);
extern void __cdecl FUN_0054c650(void);
extern void __cdecl FUN_0054bf30(void);
extern void __cdecl FUN_006273c0(void);
extern void __cdecl FUN_00627390(void);
extern void __cdecl FUN_005ab1e0(void);
extern void __cdecl FUN_005fb9b0(void);
extern void __cdecl FUN_00602520(void);
extern void __cdecl FUN_005ba040(void);
extern void __cdecl FUN_006283b0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005564b0(void);
extern void __cdecl FUN_004c3d50(void);

void __declspec(naked) FUN_0054b120(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x24
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0x4ac]
        test    eax, eax
        push    esi
        push    edi
        jnz     L_54B143
        mov     ecx, dword ptr [g_007dc6b4]
        call    FUN_004de980
L_54B143:
        fld     qword ptr [ebp+0x8]
        fsub    qword ptr [ebx+0xe4]
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [ebx+0x30c]
        fcomp   dword ptr [ebx+0x308]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54B173
        fld     dword ptr [esp+0xc]
        fadd    dword ptr [ebx+0x30c]
        fstp    dword ptr [ebx+0x30c]
L_54B173:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x40]
        xor     ecx, 0x85739531
        jz      L_54B4DA
        mov     cl, byte ptr [ebx+0x5ac]
        test    cl, cl
        jz      L_54B4DA
        mov     ecx, dword ptr [eax+0x40]
        push    0x17
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     edx, dword ptr [ebx+0x5b8]
        mov     edi, eax
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x14], edi
        call    FUN_0062c600
        lea     esi, [ebx+0x5b0]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_54B4B8
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_007f1f84]
        push    ecx
        mov     ecx, dword ptr [eax+0x4]
        call    FUN_00415230
        test    al, al
        mov     ecx, esi
        jz      L_54B4A9
        call    FUN_0041fd80
        mov     cl, byte ptr [eax+0xdc]
        test    cl, cl
        jz      L_54B25E
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     edx, edx
        mov     dl, byte ptr [eax+0x14]
        xor     ecx, 0x85739531
        push    0
        push    0
        mov     eax, edx
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [ecx+edx*8+0x3588]
        lea     esi, [ecx+edx*8+0x3538]
        mov     ecx, dword ptr [edi+0x5c]
        push    eax
        call    FUN_00560420
        mov     esi, dword ptr [esi+0x54]
        test    esi, esi
        jnz     L_54B254
        mov     esi, 0x76b768
L_54B254:
        push    0
        push    0
        push    esi
        jmp     L_54B4D2
L_54B25E:
        cmp     dword ptr [ebx+0x5b8], 2
        jnz     L_54B472
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x24]
        xor     ecx, 0x85739531
        push    1
        mov     dword ptr [esp+0x18], ecx
        call    FUN_006f2d90
        test    eax, eax
        jz      L_54B430
        mov     ecx, dword ptr [esp+0x14]
        call    FUN_006f2320
        test    al, al
        jz      L_54B41F
        mov     ecx, dword ptr [esp+0x14]
        call    FUN_006f2f10
        test    eax, eax
        mov     dword ptr [esp+0x18], eax
        jz      L_54B441
        mov     ecx, dword ptr [esp+0x14]
        call    FUN_006f2310
        cmp     eax, 1
        jnz     L_54B35F
        mov     eax, dword ptr [esp+0x18]
        mov     esi, dword ptr [eax+0x2c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x77d024
        repne   scasb
        not     ecx
        dec     ecx
        add     edx, ecx
        mov     dword ptr [esp+0x20], edx
        inc     edx
        push    edx
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, esi
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77d024
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        or      ecx, 0xffffffff
        mov     edi, edx
        mov     dword ptr [esp+0x1c], edi
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [esp+0x1c]
        jmp     L_54B3FB
L_54B35F:
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edi, dword ptr [eax+0x2c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x77d014
        repne   scasb
        not     ecx
        dec     ecx
        add     edx, ecx
        mov     dword ptr [esp+0x1c], edx
        inc     edx
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     ecx, esi
        mov     dword ptr [esp+0x18], eax
        call    FUN_0041fd80
        mov     edi, dword ptr [eax+0x2c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp+0x18]
        mov     edx, edi
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77d014
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        or      ecx, 0xffffffff
        mov     edi, edx
        mov     dword ptr [esp+0x18], edi
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp+0x1c]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [esp+0x18]
L_54B3FB:
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x5c]
        push    0
        push    0
        push    esi
        mov     byte ptr [esi+eax], 0
        call    FUN_00560420
        push    esi
        call    FUN_004084e0
        mov     edi, dword ptr [esp+0x14]
        add     esp, 4
        jmp     L_54B441
L_54B41F:
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax+0x2c]
        push    0
        push    0
        push    eax
        jmp     L_54B439
L_54B430:
        push    0
        push    0
        push    0x76b768
L_54B439:
        mov     ecx, dword ptr [edi+0x5c]
        call    FUN_00560420
L_54B441:
        mov     ecx, dword ptr [esp+0x14]
        push    2
        call    FUN_006f2d90
        test    eax, eax
        jnz     L_54B4C9
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x40]
        push    0xd
        xor     ecx, 0x85739531
        call    FUN_006290a0
        jmp     L_54B4C9
L_54B472:
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax+0x2c]
        mov     ecx, dword ptr [edi+0x5c]
        push    0
        push    0
        push    eax
        call    FUN_00560420
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x40]
        push    0xd
        xor     ecx, 0x85739531
        call    FUN_00628ed0
        jmp     L_54B4C9
L_54B4A9:
        call    FUN_0041fd80
        mov     eax, dword ptr [eax+0x2c]
        push    0
        push    0
        push    eax
        jmp     L_54B4C1
L_54B4B8:
        push    0
        push    0
        push    0x76b768
L_54B4C1:
        mov     ecx, dword ptr [edi+0x5c]
        call    FUN_00560420
L_54B4C9:
        push    0
        push    0
        push    0x76b768
L_54B4D2:
        mov     ecx, dword ptr [edi+0x50]
        call    FUN_00560420
L_54B4DA:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx+0x40]
        add     ecx, 0x40
        xor     edx, 0x85739531
        jz      L_54B55D
        fld     dword ptr [ebx+0x320]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     L_54B55D
        fld     dword ptr [g_0077b9a8]
        fmul    dword ptr [esp+0xc]
        fsubr   dword ptr [ebx+0x320]
        fst     dword ptr [ebx+0x320]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54B537
        xor     esi, esi
        mov     dword ptr [ebx+0x320], esi
        jmp     L_54B539
L_54B537:
        xor     esi, esi
L_54B539:
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        cmp     dword ptr [eax+0x50], esi
        jz      L_54B55F
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ebx+0x320]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x50]
        push    edx
        call    FUN_00630920
        jmp     L_54B55F
L_54B55D:
        xor     esi, esi
L_54B55F:
        mov     ecx, dword ptr [ebx+0x384]
        mov     eax, dword ptr [ecx+0x444]
        mov     edx, dword ptr [ecx+0x440]
        mov     dword ptr [ebx+0x628], eax
        mov     eax, dword ptr [ecx+0x448]
        mov     dword ptr [ebx+0x630], eax
        mov     dword ptr [ebx+0x624], edx
        mov     edx, dword ptr [ecx+0x43c]
        lea     eax, [ebx+0x638]
        push    eax
        lea     eax, [ebx+0x634]
        mov     dword ptr [ebx+0x62c], edx
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+0x13c]
        mov     ecx, dword ptr [ebx+0x384]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebx+0x648]
        push    eax
        lea     eax, [ebx+0x644]
        push    eax
        call    dword ptr [edx+0x140]
        mov     ecx, dword ptr [ebx+0x384]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebx+0x640]
        push    eax
        lea     eax, [ebx+0x63c]
        push    eax
        call    dword ptr [edx+0x144]
        fld     dword ptr [ebx+0x36c]
        fsub    dword ptr [esp+0xc]
        mov     ecx, dword ptr [ebx+0x384]
        mov     eax, dword ptr [ecx+0xd8]
        mov     edx, dword ptr [eax+0x8c]
        fst     dword ptr [ebx+0x36c]
        add     eax, 0x80
        fld     dword ptr [ebx+0x370]
        mov     dword ptr [ebx+0x534], edx
        fsub    dword ptr [esp+0xc]
        mov     edx, dword ptr [eax+0x1c]
        mov     eax, dword ptr [eax+0x2c]
        mov     dword ptr [ebx+0x53c], eax
        mov     eax, dword ptr [ecx+0x4c4]
        fst     dword ptr [esp+0x20]
        fstp    dword ptr [ebx+0x370]
        mov     dword ptr [ebx+0x544], eax
        fld     dword ptr [ebx+0x374]
        mov     dword ptr [ebx+0x538], edx
        fsub    dword ptr [esp+0xc]
        mov     edx, dword ptr [ecx+0x4c0]
        mov     dword ptr [ebx+0x540], edx
        mov     byte ptr [ebx+0x32c], 0
        fst     dword ptr [esp+0x1c]
        fstp    dword ptr [ebx+0x374]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54B67C
        mov     dword ptr [ebx+0x36c], esi
L_54B67C:
        fld     dword ptr [esp+0x20]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54B693
        mov     dword ptr [ebx+0x370], esi
L_54B693:
        fld     dword ptr [esp+0x1c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54B6AA
        mov     dword ptr [ebx+0x374], esi
L_54B6AA:
        cmp     dword ptr [ebx+0x55c], esi
        jz      L_54B6C3
        mov     ecx, dword ptr [ebp+0xc]
        mov     edx, dword ptr [ebp+0x8]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_0054bd70
        jmp     L_54B73A
L_54B6C3:
        mov     eax, dword ptr [ebx+0xe0]
        mov     eax, dword ptr [eax+0x14]
        cmp     eax, 5
        jnz     L_54B6E3
        fld     dword ptr [esp+0xc]
        fadd    dword ptr [ebx+0x5a8]
        fstp    dword ptr [ebx+0x5a8]
        jmp     L_54B6E8
L_54B6E3:
        cmp     eax, 8
        jnz     L_54B6F9
L_54B6E8:
        mov     esi, dword ptr [ebp+0xc]
        mov     edi, dword ptr [ebp+0x8]
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_0054e8a0
        jmp     L_54B731
L_54B6F9:
        cmp     eax, 6
        jz      L_54B73A
        cmp     eax, 7
        jnz     L_54B714
        mov     ecx, dword ptr [ebp+0xc]
        mov     edx, dword ptr [ebp+0x8]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_0054e910
        jmp     L_54B73A
L_54B714:
        cmp     eax, 4
        jz      L_54B73A
        mov     esi, dword ptr [ebp+0xc]
        mov     edi, dword ptr [ebp+0x8]
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_0054e8a0
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_0054c650
L_54B731:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_0054bf30
L_54B73A:
        mov     edi, dword ptr [ebx+0x384]
        mov     eax, dword ptr [edi+0x410]
        mov     edx, dword ptr [edi+0x40c]
        sub     eax, edx
        sar     eax, 2
        jz      L_54B7F3
        mov     ecx, edx
        mov     esi, dword ptr [ecx]
        test    esi, esi
        jz      L_54B7F3
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_54B7F3
        mov     edx, dword ptr [esi+0x198]
        mov     ecx, dword ptr [eax]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_006273c0
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [esi+0x19c]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x40]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00627390
        lea     ecx, [edi+0x400]
        call    FUN_0041fd80
        mov     eax, dword ptr [eax+0xd8]
        fld     dword ptr [eax+0x98]
        mov     ecx, dword ptr [ebx+0x304]
        test    ecx, ecx
        fst     dword ptr [esp+0x28]
        fstp    dword ptr [ebx+0x2fc]
        jz      L_54B7F3
        mov     edx, dword ptr [esp+0x28]
        push    edx
        call    FUN_005ab1e0
        fstp    dword ptr [ebx+0x300]
L_54B7F3:
        lea     esi, [ebx+0x2b0]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_54B891
        mov     eax, dword ptr [ebx+0x384]
        test    eax, eax
        jz      L_54B891
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        lea     eax, [ecx+0xc]
        jz      L_54B891
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax+0x17]
        test    cl, cl
        jnz     L_54B891
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_007f26a4]
        push    ecx
        mov     ecx, dword ptr [eax+0x4]
        call    FUN_00415230
        cmp     al, 1
        jnz     L_54B891
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, eax
        mov     ecx, dword ptr [esi+0x280]
        test    ecx, ecx
        jz      L_54B871
        mov     edx, dword ptr [ebx+0x384]
        push    edx
        jmp     L_54B88C
L_54B871:
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L_54B891
        mov     eax, dword ptr [ebx+0x384]
        push    eax
        mov     ecx, esi
L_54B88C:
        call    FUN_005fb9b0
L_54B891:
        mov     al, byte ptr [ebx+0x339]
        test    al, al
        jz      L_54B8BE
        mov     ecx, dword ptr [ebx+0x384]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        call    FUN_00602520
L_54B8BE:
        lea     edi, [ebx+0x6a0]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_54B96F
        mov     ecx, dword ptr [ebx+0x384]
        mov     ecx, dword ptr [ecx+0x3d4]
        test    ecx, ecx
        jz      L_54B9BA
        call    FUN_005ba040
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_54B91A
        mov     ecx, dword ptr [eax]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_006283b0
L_54B91A:
        test    esi, esi
        jz      L_54B9BA
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
        push    0x1d
        mov     ecx, ebx
        call    FUN_00559be0
        mov     ecx, ebx
        call    FUN_005564b0
        test    al, al
        jz      L_54B959
        mov     edx, dword ptr [esi+0xd8]
        mov     ecx, dword ptr [ebx+0x6b0]
        push    edx
        call    FUN_004c3d50
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_54B959:
        mov     ecx, dword ptr [ebx+0x6b0]
        push    0
        call    FUN_004c3d50
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_54B96F:
        mov     ecx, dword ptr [ebx+0x6b0]
        add     ecx, 0x27c
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_54B9BA
        mov     ecx, ebx
        call    FUN_005564b0
        test    al, al
        jz      L_54B9BA
        mov     eax, dword ptr [ebx+0x384]
        mov     ecx, dword ptr [eax+0x3d4]
        test    ecx, ecx
        jz      L_54B9BA
        call    FUN_005ba040
        test    eax, eax
        jz      L_54B9BA
        mov     ecx, dword ptr [eax+0xd8]
        push    ecx
        mov     ecx, dword ptr [ebx+0x6b0]
        call    FUN_004c3d50
L_54B9BA:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
