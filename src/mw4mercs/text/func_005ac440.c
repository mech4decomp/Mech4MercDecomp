/*
 * FUN_005ac440 (1682 B) - __fastcall (ECX = param), returns undefined in AL.
 *
 * CFLAGS: /O1
 */

extern double __stdcall FUN_00707e70(int param);
extern void __cdecl FUN_005ac070(int param);
extern void __stdcall FUN_00559be0(int param);
extern void __cdecl FUN_00417ad0(void);
extern char __cdecl FUN_0061c1a0(void);
extern void __cdecl FUN_005f5c00(void);
extern void __cdecl FUN_005acc20(void);
extern void __cdecl FUN_005acc60(void);
extern void __cdecl FUN_00628a70(int param);
extern void *__cdecl FUN_0041fd80(void);

__declspec(naked) void __fastcall FUN_005ac440(void *param)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f20cc;
extern int DAT_0076d040;
extern int DAT_0076c5b0;
extern int DAT_00782348;
extern int DAT_0076d588;
extern int DAT_0076d064;
extern int DAT_0076d584;
extern int DAT_00785970;
extern int DAT_0077dec8;
extern int DAT_00785968;
extern int DAT_0077a198;
extern int DAT_0077431c;
extern int DAT_00779d28;
__asm {
sub     esp, 0x14
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    ebp
        push    esi
        xor     eax, ebx
        mov     esi, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17FC]
        xor     ebp, ebp
        test    dl, dl
        push    edi
        mov     byte ptr [esp + 0x13], 0
        jz      L_483
        mov     edx, dword ptr [eax + 0xC]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        cmp     dword ptr [eax + 0x2C], ebp
        jnz     L_490
L_483:
        cmp byte ptr [DAT_007f20cc], 0x1
        jnz     L_797
L_490:
        cmp     dword ptr [esi + 0x5C], ebp
        jz      L_537
        fld     dword ptr [esi + 0x54]
        fsub dword ptr [DAT_0076d040]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_51a
        push    ebp
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x34]
        fcomp qword ptr [DAT_00782348]
        fnstsw  ax
        test    ah, 1
        jnz     L_537
        push    ebp
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x34]
        push    0xC0666666
        mov     ecx, esi
        call    FUN_005ac070
        fld     dword ptr [esi + 0x54]
        fsub dword ptr [DAT_0076d040]
        fcom dword ptr [DAT_0076c5b0]
        fst     dword ptr [esi + 0x54]
        fnstsw  ax
        test    ah, 1
        jz      L_501
        fstp    st(0)
        mov     dword ptr [esi + 0x54], ebp
        mov     dword ptr [esi + 0x28], 1
        jmp     L_537
L_501:
        fcomp   dword ptr [esi + 0x58]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_511
        mov     ecx, dword ptr [esi + 0x58]
        mov     dword ptr [esi + 0x54], ecx
L_511:
        mov     dword ptr [esi + 0x28], 1
        jmp     L_537
L_51a:
        mov     edx, dword ptr [esi + 0xA0]
        mov     ecx, dword ptr [edx + 0x3B0]
        cmp     ecx, ebp
        jz      L_531
        push    0x1B
        call    FUN_00559be0
L_531:
        mov     dword ptr [esi + 0x54], ebp
        mov     dword ptr [esi + 0x5C], ebp
L_537:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, ebp
        lea     edi, [esi + 0x14]
        jz      L_5c8
        push    ebp
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x2C]
        fcomp qword ptr [DAT_0076d588]
        fnstsw  ax
        test    ah, 1
        jnz     L_5c8
        push    ebp
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x2C]
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x1C], edi
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x785978
L_576:
        cmp     eax, ebp
        jz      L_5c8
        mov     edi, dword ptr [eax]
        cmp     edi, ebp
        jz      L_5c8
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_005ac070
        mov     edx, dword ptr [edi + 0x18]
        mov     cl, byte ptr [edi + 0x1C]
        inc     edx
        test    cl, cl
        mov     dword ptr [edi + 0x18], edx
        mov     eax, edx
        jnz     L_5b7
        cmp     eax, dword ptr [edi + 0x10]
        jl      L_5b7
        lea     ecx, [esp + 0x18]
        call    FUN_00417ad0
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x20]
        jmp     L_576
L_5b7:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebp
        jz      L_5c8
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x20], eax
        jmp     L_576
L_5c8:
        mov     edi, dword ptr [esi + 0xA0]
        mov     bl, byte ptr [edi + 0x2F8]
        test    bl, bl
        jz      L_5df
        mov     byte ptr [esi + 0x9C], 0
L_5df:
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_6e8
        fld     dword ptr [esi + 0x4C]
        fdiv    dword ptr [esi + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L_6e6
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_62a
        fcomp dword ptr [DAT_0076d584]
        fnstsw  ax
        test    ah, 1
        jnz     L_6e8
        jmp     L_62c
L_62a:
        fstp    st(0)
L_62c:
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_6e8
        mov     al, byte ptr [esi + 0x9C]
        test    al, al
        push    ebp
        jnz     L_659
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x8C]
        mov     byte ptr [esi + 0x9C], 1
        jmp     L_6ef
L_659:
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x8C]
        fcomp qword ptr [DAT_00785970]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6ef
        call    FUN_0061c1a0
        test    al, al
        jz      L_697
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xC]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        jz      L_6ef
L_697:
        mov     ecx, edi
        call    FUN_005f5c00
L_69e:
        mov     ecx, esi
        call    FUN_005acc20
        mov     ecx, esi
        call    FUN_005acc60
        mov     edi, dword ptr [esi + 0xA0]
        mov     eax, dword ptr [edi + 0x10]
        and     eax, 7
        cmp     eax, 4
        jz      L_6c5
        cmp     eax, ebp
        jnz     L_ac6
L_6c5:
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_7d5
        mov     dword ptr [esp + 0x14], 0
        jmp     L_80b
L_6e6:
        fstp    st(0)
L_6e8:
        mov     byte ptr [esi + 0x9C], 0
L_6ef:
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_78b
        fld     dword ptr [esi + 0x4C]
        fdiv    dword ptr [esi + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L_789
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_732
        fcomp dword ptr [DAT_0076d584]
        fnstsw  ax
        test    ah, 1
        jnz     L_78b
        jmp     L_734
L_732:
        fstp    st(0)
L_734:
        test    bl, bl
        jz      L_78b
        mov     al, byte ptr [edi + 0x4BC]
        cmp     al, 0x17
        jz      L_746
        cmp     al, 0x16
        jnz     L_78b
L_746:
        mov     al, byte ptr [esi + 0x9D]
        test    al, al
        push    ebp
        jnz     L_768
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x94]
        mov     byte ptr [esi + 0x9D], 1
        jmp     L_69e
L_768:
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x94]
        fcomp qword ptr [DAT_0077dec8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_69e
        jmp     L_697
L_789:
        fstp    st(0)
L_78b:
        mov     byte ptr [esi + 0x9D], 0
        jmp     L_69e
L_797:
        lea     eax, [esi + 0x14]
        mov     dword ptr [esp + 0x1C], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x785978
L_7ac:
        cmp     eax, ebp
        jz      L_69e
        mov     edi, dword ptr [eax]
        cmp     edi, ebp
        jz      L_69e
        lea     ecx, [esp + 0x18]
        call    FUN_00417ad0
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x20]
        jmp     L_7ac
L_7d5:
        fld     dword ptr [esi + 0x4C]
        fdiv    dword ptr [esi + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_7f2
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L_807
L_7f2:
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_807
        fstp    st(0)
        fld dword ptr [DAT_0076d064]
L_807:
        fstp    dword ptr [esp + 0x14]
L_80b:
        mov     ebp, dword ptr [edi + 0x3B0]
        test    ebp, ebp
        jz      L_836
        mov     ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        push    ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00628a70
L_836:
        fld     dword ptr [esp + 0x14]
        fcomp dword ptr [DAT_00785968]
        fnstsw  ax
        test    ah, 1
        jz      L_8e0
        test    ebp, ebp
        jz      L_85f
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_85f
        push    3
        mov     ecx, ebp
        call    FUN_00559be0
L_85f:
        fld     dword ptr [esp + 0x14]
        fcomp dword ptr [DAT_0077a198]
        fnstsw  ax
        test    ah, 1
        jnz     L_895
L_870:
        fld     dword ptr [esp + 0x14]
        fcomp dword ptr [DAT_0077431c]
        fnstsw  ax
        test    ah, 1
        jz      L_895
        test    ebp, ebp
        jz      L_895
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_895
        push    5
L_88e:
        mov     ecx, ebp
        call    FUN_00559be0
L_895:
        fld     dword ptr [esi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_9fc
        fld     dword ptr [esi + 0x4C]
        fdiv    dword ptr [esi + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L_9fa
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_904
        fcomp dword ptr [DAT_0077431c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_9fc
        jmp     L_906
L_8e0:
        fld     dword ptr [esp + 0x14]
        fcomp dword ptr [DAT_0077a198]
        fnstsw  ax
        test    ah, 1
        jz      L_870
        test    ebp, ebp
        jz      L_895
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_895
        push    4
        jmp     L_88e
L_904:
        fstp    st(0)
L_906:
        test    ebp, ebp
        mov     byte ptr [esp + 0x13], 1
        jz      L_91f
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_91f
        push    6
        mov     ecx, ebp
        call    FUN_00559be0
L_91f:
        mov     al, byte ptr [esi + 0x60]
        test    al, al
        push    0
        jnz     L_96e
        call    FUN_00707e70
        fcomp   qword ptr [esi + 0x84]
        fnstsw  ax
        test    ah, 1
        jnz     L_ac6
        push    0
        call    FUN_00707e70
        fadd qword ptr [DAT_0076d588]
        push    0
        fstp    qword ptr [esi + 0x84]
        call    FUN_00707e70
        fadd    dword ptr [esi + 0x70]
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        mov     byte ptr [esi + 0x60], 1
        fstp    qword ptr [esi + 0x74]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
L_96e:
        call    FUN_00707e70
        fcomp   qword ptr [esi + 0x74]
        fnstsw  ax
        test    ah, 1
        jnz     L_ac6
        mov     ecx, dword ptr [edi + 0x2FC]
        test    ecx, ecx
        mov     byte ptr [esi + 0x60], 0
        mov     byte ptr [esi + 0x62], 0
        jz      L_9b3
        mov     al, byte ptr [edi + 0xDC]
        test    al, al
        jnz     L_9b3
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xF4]
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax + 0xB0]
        jmp     L_9bf
L_9b3:
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0xB0]
L_9bf:
        test    al, al
        jz      L_ac6
        mov     ecx, dword ptr [edi + 0x3B0]
        test    ecx, ecx
        mov     byte ptr [esi + 0x9C], 0
        jz      L_ac6
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jnz     L_ac6
        push    9
        call    FUN_00559be0
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
L_9fa:
        fstp    st(0)
L_9fc:
        lea     edi, [esi + 0x44]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_a22
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xE0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_a22:
        mov     al, byte ptr [esi + 0x60]
        test    al, al
        jz      L_a2d
        mov     byte ptr [esi + 0x60], 0
L_a2d:
        mov     al, byte ptr [esi + 0x62]
        test    al, al
        jz      L_a38
        mov     byte ptr [esi + 0x62], 0
L_a38:
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        jz      L_ac6
        mov     al, byte ptr [esi + 0x61]
        test    al, al
        jnz     L_a5e
        push    0
        call    FUN_00707e70
        fadd qword ptr [DAT_00779d28]
        mov     byte ptr [esi + 0x61], 1
        fstp    qword ptr [esi + 0x7C]
L_a5e:
        push    0
        call    FUN_00707e70
        fcomp   qword ptr [esi + 0x7C]
        fnstsw  ax
        test    ah, 1
        jnz     L_ac6
        mov     edi, dword ptr [esi + 0xA0]
        mov     al, byte ptr [edi + 0x2F8]
        test    al, al
        mov     byte ptr [esi + 0x60], 0
        mov     byte ptr [esi + 0x10], 0
        mov     byte ptr [esi + 0x61], 0
        jz      L_ac6
        mov     eax, dword ptr [edi]
        push    0
        mov     ecx, edi
        call    dword ptr [eax + 0xB0]
        mov     al, byte ptr [edi + 0x2F8]
        test    al, al
        jz      L_ab5
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        mov     byte ptr [esi + 0x61], 1
        mov     byte ptr [esi + 0x10], 1
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
L_ab5:
        mov     ecx, dword ptr [edi + 0x3B0]
        test    ecx, ecx
        jz      L_ac6
        push    0xA
        call    FUN_00559be0
L_ac6:
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }


}
