/* func_0054c650.c - inline-asm transcription of FUN_0054c650 (2340 B) */

extern float g_007b220c;
extern float g_0076c5b0;
extern float g_0076ed00;
extern int g_007dab44;
extern int g_007dab40;
extern char g_0077d010[];

extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_006276d0(void);
extern void __cdecl FUN_006275a0(void);
extern void __cdecl FUN_00627bb0(void);
extern void __cdecl FUN_00559960(void);
extern void __cdecl FUN_005eb260(void);
extern void __cdecl FUN_00559810(void);
extern void __cdecl FUN_00559ab0(void);
extern void __cdecl FUN_005eb380(void);
extern void __cdecl FUN_00627ba0(void);
extern void __cdecl FUN_00627b90(void);
extern void __cdecl FUN_005eb4a0(void);
extern void __cdecl FUN_005eb5c0(void);
extern void __cdecl FUN_005eb100(void);
extern void __cdecl FUN_005fd290(void);
extern void __cdecl FUN_004da490(void);
extern void __cdecl FUN_004da430(void);
extern void __cdecl FUN_004da3d0(void);
extern void __cdecl FUN_004db210(void);
extern void __cdecl FUN_00417ad0(void);

void __declspec(naked) FUN_0054c650(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x589]
        test    al, al
        push    edi
        jnz     L_54CF6A
        mov     al, byte ptr [esi+0x5ac]
        test    al, al
        jnz     L_54CF6A
        mov     edi, dword ptr [esi+0x384]
        xor     ebp, ebp
        mov     dword ptr [edi+0x434], ebp
        push    2
        mov     dword ptr [edi+0x438], ebp
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54C6C4
        fld     dword ptr [esi+0x2d8]
        mov     eax, dword ptr [esi+0x2d8]
        fabs
        fld     dword ptr [g_007b220c]
        mov     dword ptr [edi+0x430], eax
        fcompp
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_54C6C4
        mov     dword ptr [edi+0x430], ebp
L_54C6C4:
        push    1
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54C783
        mov     al, byte ptr [esi+0x428]
        fld     dword ptr [esi+0x2d4]
        test    al, al
        fst     dword ptr [edi+0x42c]
        jz      L_54C6FA
        fchs
        fstp    dword ptr [edi+0x42c]
        jmp     L_54C6FC
L_54C6FA:
        fstp    st(0)
L_54C6FC:
        fld     dword ptr [edi+0x42c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     L_54C766
        fld     dword ptr [edi+0x42c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_54C743
        fld     dword ptr [esi+0x63c]
        fadd    dword ptr [g_0076ed00]
        fcom    dword ptr [edi+0x42c]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_54C764
        fstp    dword ptr [edi+0x42c]
        jmp     L_54C766
L_54C743:
        fld     dword ptr [esi+0x640]
        fsub    dword ptr [g_0076ed00]
        fcom    dword ptr [edi+0x42c]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_54C764
        fstp    dword ptr [edi+0x42c]
        jmp     L_54C766
L_54C764:
        fstp    st(0)
L_54C766:
        fld     dword ptr [esi+0x2d4]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_54C783
        mov     dword ptr [edi+0x42c], ebp
L_54C783:
        mov     ecx, dword ptr [edi+0x410]
        mov     edx, dword ptr [edi+0x40c]
        sub     ecx, edx
        sar     ecx, 2
        jz      L_54C79A
        mov     edi, dword ptr [edx]
        jmp     L_54C79C
L_54C79A:
        xor     edi, edi
L_54C79C:
        xor     ebx, ebx
        cmp     edi, ebp
        jz      L_54CE71
        mov     ebx, dword ptr [edi+0x1e0]
        push    4
        mov     dword ptr [esp+0x1c], ebx
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54C830
        fld     dword ptr [esi+0x2e0]
        mov     eax, dword ptr [esi+0x2dc]
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [edi+0x1cc], eax
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     L_54C7EA
        push    0x17
        mov     ecx, esi
        call    FUN_00559be0
L_54C7EA:
        fld     dword ptr [esi+0x2dc]
        mov     ecx, dword ptr [esi+0x2e0]
        fabs
        fld     dword ptr [g_007b220c]
        mov     dword ptr [edi+0x1c8], ecx
        fcompp
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_54C813
        mov     dword ptr [edi+0x1cc], ebp
L_54C813:
        fld     dword ptr [esi+0x2e0]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_54C830
        mov     dword ptr [edi+0x1c8], ebp
L_54C830:
        push    0x10
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54C85A
        cmp     dword ptr [esi+0x564], ebp
        jnz     L_54C853
        mov     byte ptr [edi+0x1dc], 1
        jmp     L_54C85A
L_54C853:
        mov     byte ptr [edi+0x1dc], 0
L_54C85A:
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54CE71
        mov     eax, dword ptr [esi+0x2e4]
        cmp     eax, 2
        jnz     L_54C9BF
        mov     bl, byte ptr [esi+0x589]
        test    bl, bl
        mov     cl, 1
        jz      L_54C890
        xor     cl, cl
L_54C890:
        cmp     cl, byte ptr [esi+0x32d]
        jz      L_54C8E2
        mov     al, byte ptr [esi+0x330]
        test    al, al
        jz      L_54C8E2
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32d], cl
        jz      L_54C8E2
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54C8D7
        xor     ecx, 0x85739531
        call    FUN_006276d0
        jmp     L_54C8E2
L_54C8D7:
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_54C8E2:
        mov     al, byte ptr [esi+0x32f]
        test    al, al
        jz      L_54C91B
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x40]
        mov     byte ptr [esi+0x32f], 0
        jz      L_54C91B
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00627bb0
L_54C91B:
        test    bl, bl
        mov     cl, 1
        jz      L_54C923
        xor     cl, cl
L_54C923:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        jz      L_54C98B
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax+0x50]
        mov     al, byte ptr [edx+0x28]
        test    al, al
        jz      L_54C98B
        xor     cl, cl
L_54C950:
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jz      L_54C9B3
L_54C95A:
        test    cl, cl
        mov     byte ptr [esi+0x32e], cl
        jz      L_54C9AC
        mov     al, byte ptr [esi+0x588]
        test    al, al
        jz      L_54C9B3
        mov     al, byte ptr [esi+0x587]
        test    al, al
        mov     ecx, esi
        jz      L_54C99B
        call    FUN_00559960
        mov     ecx, edi
        call    FUN_005eb260
        jmp     L_54CE5E
L_54C98B:
        test    cl, cl
        jz      L_54C950
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jnz     L_54C9B3
        jmp     L_54C95A
L_54C99B:
        call    FUN_00559810
        mov     ecx, edi
        call    FUN_005eb260
        jmp     L_54CE5E
L_54C9AC:
        mov     ecx, esi
        call    FUN_00559ab0
L_54C9B3:
        mov     ecx, edi
        call    FUN_005eb260
        jmp     L_54CE5E
L_54C9BF:
        cmp     eax, 1
        jnz     L_54CB03
        mov     bl, byte ptr [esi+0x589]
        test    bl, bl
        mov     cl, al
        jz      L_54C9D6
        xor     cl, cl
L_54C9D6:
        cmp     cl, byte ptr [esi+0x32d]
        jz      L_54CA26
        mov     al, byte ptr [esi+0x330]
        test    al, al
        jz      L_54CA26
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32d], cl
        jz      L_54CA26
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54CA1B
        xor     ecx, 0x85739531
        call    FUN_006276d0
        jmp     L_54CA26
L_54CA1B:
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_54CA26:
        mov     al, byte ptr [esi+0x32f]
        test    al, al
        jz      L_54CA5F
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x40]
        mov     byte ptr [esi+0x32f], 0
        jz      L_54CA5F
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00627bb0
L_54CA5F:
        test    bl, bl
        mov     cl, 1
        jz      L_54CA67
        xor     cl, cl
L_54CA67:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        jz      L_54CACF
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax+0x50]
        mov     al, byte ptr [edx+0x28]
        test    al, al
        jz      L_54CACF
        xor     cl, cl
L_54CA94:
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jz      L_54CAF7
L_54CA9E:
        test    cl, cl
        mov     byte ptr [esi+0x32e], cl
        jz      L_54CAF0
        mov     al, byte ptr [esi+0x588]
        test    al, al
        jz      L_54CAF7
        mov     al, byte ptr [esi+0x587]
        test    al, al
        mov     ecx, esi
        jz      L_54CADF
        call    FUN_00559960
        mov     ecx, edi
        call    FUN_005eb380
        jmp     L_54CE5E
L_54CACF:
        test    cl, cl
        jz      L_54CA94
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jnz     L_54CAF7
        jmp     L_54CA9E
L_54CADF:
        call    FUN_00559810
        mov     ecx, edi
        call    FUN_005eb380
        jmp     L_54CE5E
L_54CAF0:
        mov     ecx, esi
        call    FUN_00559ab0
L_54CAF7:
        mov     ecx, edi
        call    FUN_005eb380
        jmp     L_54CE5E
L_54CB03:
        cmp     eax, 3
        jnz     L_54CC18
        mov     al, byte ptr [esi+0x589]
        mov     byte ptr [esp+0x13], al
        mov     al, byte ptr [esi+0x32d]
        test    al, al
        jz      L_54CB5A
        mov     al, byte ptr [esi+0x330]
        test    al, al
        jz      L_54CB5A
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x40]
        xor     ecx, 0x85739531
        lea     eax, [edx+0x40]
        mov     byte ptr [esi+0x32d], 0
        jz      L_54CB5A
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_54CB5A:
        mov     ecx, dword ptr [esi+0x564]
        mov     al, byte ptr [esi+0x32f]
        cmp     ecx, ebp
        setz    cl
        cmp     al, cl
        jnz     L_54CB9E
        test    cl, cl
        jz      L_54CBDE
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_54CBDE
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00627ba0
        jmp     L_54CBDE
L_54CB9E:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32f], cl
        jz      L_54CBDE
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54CBD3
        xor     ecx, 0x85739531
        call    FUN_00627b90
        jmp     L_54CBDE
L_54CBD3:
        xor     ecx, 0x85739531
        call    FUN_00627bb0
L_54CBDE:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        mov     al, byte ptr [esi+0x32e]
        xor     ecx, edx
        add     ecx, 0x40
        test    al, al
        mov     dword ptr [esp+0x14], ecx
        jz      L_54CC0C
        mov     ecx, esi
        mov     byte ptr [esi+0x32e], 0
        call    FUN_00559ab0
L_54CC0C:
        mov     ecx, edi
        call    FUN_005eb4a0
        jmp     L_54CE5E
L_54CC18:
        cmp     eax, 4
        mov     cl, 1
        jnz     L_54CD3C
        mov     al, byte ptr [esi+0x589]
        test    al, al
        jz      L_54CC2F
        xor     cl, cl
L_54CC2F:
        cmp     cl, byte ptr [esi+0x32d]
        jz      L_54CC81
        mov     al, byte ptr [esi+0x330]
        test    al, al
        jz      L_54CC81
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32d], cl
        jz      L_54CC81
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54CC76
        xor     ecx, 0x85739531
        call    FUN_006276d0
        jmp     L_54CC81
L_54CC76:
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_54CC81:
        mov     ecx, dword ptr [esi+0x564]
        mov     al, byte ptr [esi+0x32f]
        cmp     ecx, ebp
        setz    cl
        cmp     al, cl
        jnz     L_54CCC4
        test    cl, cl
        jz      L_54CD02
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x40]
        jz      L_54CD02
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00627ba0
        jmp     L_54CD02
L_54CCC4:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32f], cl
        jz      L_54CD02
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54CCF7
        xor     ecx, 0x85739531
        call    FUN_00627b90
        jmp     L_54CD02
L_54CCF7:
        xor     ecx, 0x85739531
        call    FUN_00627bb0
L_54CD02:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        mov     al, byte ptr [esi+0x32e]
        xor     ecx, edx
        add     ecx, 0x40
        test    al, al
        mov     dword ptr [esp+0x14], ecx
        jz      L_54CD30
        mov     ecx, esi
        mov     byte ptr [esi+0x32e], 0
        call    FUN_00559ab0
L_54CD30:
        mov     ecx, edi
        call    FUN_005eb5c0
        jmp     L_54CE5E
L_54CD3C:
        mov     bl, byte ptr [esi+0x589]
        test    bl, bl
        jz      L_54CD48
        xor     cl, cl
L_54CD48:
        cmp     cl, byte ptr [esi+0x32d]
        jz      L_54CD9A
        mov     al, byte ptr [esi+0x330]
        test    al, al
        jz      L_54CD9A
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax+0x40]
        add     eax, 0x40
        xor     edx, 0x85739531
        mov     byte ptr [esi+0x32d], cl
        jz      L_54CD9A
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_54CD8F
        xor     ecx, 0x85739531
        call    FUN_006276d0
        jmp     L_54CD9A
L_54CD8F:
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_54CD9A:
        mov     al, byte ptr [esi+0x32f]
        test    al, al
        jz      L_54CDD3
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x40]
        mov     byte ptr [esi+0x32f], 0
        jz      L_54CDD3
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00627bb0
L_54CDD3:
        test    bl, bl
        mov     cl, 1
        jz      L_54CDDB
        xor     cl, cl
L_54CDDB:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        jz      L_54CE39
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax+0x50]
        mov     al, byte ptr [edx+0x28]
        test    al, al
        jz      L_54CE39
        xor     cl, cl
L_54CE08:
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jz      L_54CE57
L_54CE12:
        test    cl, cl
        mov     byte ptr [esi+0x32e], cl
        jz      L_54CE50
        mov     al, byte ptr [esi+0x588]
        test    al, al
        jz      L_54CE57
        mov     al, byte ptr [esi+0x587]
        test    al, al
        mov     ecx, esi
        jz      L_54CE49
        call    FUN_00559960
        jmp     L_54CE57
L_54CE39:
        test    cl, cl
        jz      L_54CE08
        mov     al, byte ptr [esi+0x32e]
        test    al, al
        jnz     L_54CE57
        jmp     L_54CE12
L_54CE49:
        call    FUN_00559810
        jmp     L_54CE57
L_54CE50:
        mov     ecx, esi
        call    FUN_00559ab0
L_54CE57:
        mov     ecx, edi
        call    FUN_005eb100
L_54CE5E:
        mov     ebx, dword ptr [esp+0x18]
        cmp     ebx, dword ptr [edi+0x1e0]
        jz      L_54CE71
        mov     byte ptr [esi+0x4b0], 1
L_54CE71:
        cmp     dword ptr [esi+0x564], ebp
        jnz     L_54CF18
        cmp     edi, ebp
        jz      L_54CE8D
        cmp     ebx, dword ptr [edi+0x1e0]
        jz      L_54CF18
L_54CE8D:
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_54CF18
        mov     eax, dword ptr [esi+0x2e4]
        cmp     eax, 4
        jnz     L_54CEC4
        mov     edi, dword ptr [esi+0x384]
        push    ebp
        mov     ecx, edi
        call    FUN_005fd290
        mov     ecx, edi
        call    FUN_004da490
        jmp     L_54CF11
L_54CEC4:
        cmp     eax, 2
        jz      L_54CECE
        cmp     eax, 1
        jnz     L_54CEE5
L_54CECE:
        mov     edi, dword ptr [esi+0x384]
        push    ebp
        mov     ecx, edi
        call    FUN_005fd290
        mov     ecx, edi
        call    FUN_004da430
        jmp     L_54CF11
L_54CEE5:
        cmp     eax, 3
        mov     edi, dword ptr [esi+0x384]
        jnz     L_54CF02
        push    1
        mov     ecx, edi
        call    FUN_005fd290
        mov     ecx, edi
        call    FUN_004da490
        jmp     L_54CF11
L_54CF02:
        push    ebp
        mov     ecx, edi
        call    FUN_005fd290
        mov     ecx, edi
        call    FUN_004da3d0
L_54CF11:
        mov     ecx, edi
        call    FUN_004db210
L_54CF18:
        lea     eax, [esi+0x2f0]
        mov     dword ptr [esp+0x20], eax
        mov     eax, dword ptr [eax]
        cmp     eax, ebp
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x1c], 0x77d010
        jz      L_54CF6A
        mov     edi, dword ptr [eax]
        cmp     edi, ebp
        jz      L_54CF6A
        mov     ebx, dword ptr [esi+0x2f8]
        mov     ecx, dword ptr [esi+0x384]
        mov     edx, dword ptr [edi+0x10]
        mov     eax, dword ptr [ecx]
        dec     ebx
        push    edx
        mov     dword ptr [esi+0x2f8], ebx
        call    dword ptr [eax+0x118]
        lea     ecx, [esp+0x1c]
        call    FUN_00417ad0
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
L_54CF6A:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     8
    }
}
