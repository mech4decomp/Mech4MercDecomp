/*
 * FUN_005d72b0 (1451 B) — __thiscall (ECX = this, 2 stack params, RET 0x8).
 * Large object constructor: builds node lists, allocates sub-objects,
 * registers mission strings, and returns this. Calls many helpers.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004d5b10(int);
extern void __cdecl FUN_005d9f70(void *);
extern void __cdecl FUN_005d9f90(void *);
extern void __cdecl FUN_005cb210(void *);
extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005da360(int, void *);
extern void __cdecl FUN_0040c410(void *);
extern void __cdecl FUN_005da5d0(int, void *);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_005d69d0(void *, void *);
extern void __cdecl FUN_005d6b10(void);
extern void __cdecl FUN_005da6d0(int, void *);
extern void __cdecl FUN_0068f020(void *, void *);
extern void __cdecl FUN_004e27f0(void *, void *, void *, void *);
extern void __cdecl FUN_00657700(void *);
extern void __cdecl FUN_00657ed0(void *);
extern void __cdecl FUN_0068cc50(void *);
extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_005d6bf0(void *);

__declspec(naked) void *__fastcall FUN_005d72b0(int param1, int param2)
{
    

extern int DAT_007f2464;
extern int DAT_0076d598;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b2e0;
extern int DAT_007f23e0;
extern int DAT_007f23e4;
extern int DAT_007f23e8;
extern int DAT_007f23ec;
extern int DAT_007f23f0;
__asm {
sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x2c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_004d5b10
        lea     edx, [esp + 0x3c]
        lea     ecx, [ebx + 0x10]
        push    edx
        call    FUN_005d9f70
        lea     eax, [esp + 0x3c]
        lea     ecx, [ebx + 0x1c]
        push    eax
        call    FUN_005d9f90
        lea     ecx, [esp + 0x3c]
        lea     esi, [ebx + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_005cb210
        mov edx, dword ptr [DAT_007f2464]
        push    edx
        mov     dword ptr [ebx], 0x788198
        call    FUN_006f4950
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi]
        xor     ebp, ebp
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebx + 0x48], ebp
        mov     dword ptr [ebx + 0x38], ebp
        mov     dword ptr [ebx + 0x3c], ebp
        mov     dword ptr [ebx + 0x40], ebp
        mov     dword ptr [ebx + 0x44], ebp
        mov     dword ptr [ebx + 0x50], 0x3f800000
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        jnz     l_7355
        lea     edx, [esp + 0x20]
        push    edx
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x2c], 0xbf800000
        push    0xa
        jmp     l_7373
    l_7355:
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x2c], 0xbf800000
        push    eax
    l_7373:
        mov     ecx, esi
        call    FUN_005da360
        mov     eax, dword ptr [esp + 0x1c]
        xor     ebp, ebp
        test    eax, eax
        jle     l_73ac
        mov     esi, dword ptr [esi]
    l_7386:
        mov     edx, dword ptr [edi]
        push    0xc
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        call    FUN_0040c410
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebp
        add     esi, 0xc
        cmp     ebp, eax
        jl      l_7386
    l_73ac:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        xor     ecx, ecx
        cmp     eax, ecx
        jnz     l_73d1
        mov     dword ptr [esp + 0x3c], ecx
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    0xa
        jmp     l_73db
    l_73d1:
        lea     edx, [esp + 0x3c]
        push    edx
        mov     dword ptr [esp + 0x40], ecx
        push    eax
    l_73db:
        lea     ecx, [ebx + 0x1c]
        call    FUN_005da5d0
        mov     eax, dword ptr [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     l_74a4
        mov     ebp, dword ptr [esp + 0x10]
    l_73f5:
        push    0x54
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_740e
        push    ebp
        push    edi
        mov     ecx, eax
        call    FUN_005d69d0
        jmp     l_7410
    l_740e:
        xor     eax, eax
    l_7410:
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     edx, dword ptr [eax + 0x8]
        lea     esi, [ecx + ebx*0x4]
        mov     dword ptr [esi], eax
        add     eax, 0x8
        mov     dword ptr [esp + 0x20], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 0x8]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x2c], edx
        call    FUN_0040c410
        fld     dword ptr [esp + 0x2c]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_7477
        fld     dword ptr [esp + 0x30]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_7477
        fld     dword ptr [esp + 0x34]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_7477
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx], ebx
        jmp     l_7497
    l_7477:
        mov     ebp, dword ptr [esi]
        test    ebp, ebp
        jz      l_748d
        mov     ecx, ebp
        call    FUN_005d6b10
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    l_748d:
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x0
    l_7497:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        cmp     ebx, eax
        jl      l_73f5
    l_74a4:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jnz     l_74d5
        mov     esi, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     ebp, [esi + 0x10]
        push    0xa
        mov     ecx, ebp
        mov     dword ptr [esp + 0x44], eax
        call    FUN_005da6d0
        jmp     l_74f5
    l_74d5:
        lea     edx, [esp + 0x3c]
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        lea     ebp, [eax + 0x10]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x44], 0x0
        call    FUN_005da6d0
        mov     esi, dword ptr [esp + 0x10]
    l_74f5:
        mov     eax, dword ptr [esp + 0x18]
        xor     ebx, ebx
        test    eax, eax
        jle     l_7560
    l_74ff:
        push    0xb0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_751b
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_0068f020
        jmp     l_751d
    l_751b:
        xor     eax, eax
    l_751d:
        mov     ecx, dword ptr [ebp]
        lea     esi, [ecx + ebx*0x4]
        mov     edx, eax
        mov     ecx, dword ptr [edx + 0xc]
        mov     dword ptr [esi], eax
        or      eax, -1
        cmp     ecx, eax
        jz      l_753e
        mov     ecx, edx
        cmp     dword ptr [ecx + 0x10], eax
        jz      l_753e
        mov     edx, ecx
        mov     dword ptr [edx], ebx
        jmp     l_7553
    l_753e:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_754d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_754d:
        mov     dword ptr [esi], 0x0
    l_7553:
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jl      l_74ff
    l_7560:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov eax, dword ptr [DAT_007dab40]
        push    0x80da58
        push    0x80da60
        xor     ecx, eax
        mov     ecx, dword ptr [ecx + 0x1c]
        push    0x80da54
        push    0x80da5c
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_75a8
        push    edi
        mov     ecx, eax
        call    FUN_00657700
        jmp     l_75aa
    l_75a8:
        xor     eax, eax
    l_75aa:
        push    0x14
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_75c5
        push    edi
        mov     ecx, eax
        call    FUN_00657ed0
        jmp     l_75c7
    l_75c5:
        xor     eax, eax
    l_75c7:
        push    0xc
        mov     dword ptr [esi + 0x40], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_75e2
        push    edi
        mov     ecx, eax
        call    FUN_0068cc50
        jmp     l_75e4
    l_75e2:
        xor     eax, eax
    l_75e4:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [esi + 0x48], eax
        call    dword ptr [edx + 0x8]
        cmp     eax, 0x4
        jc      l_7605
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x50]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        jmp     l_77c7
    l_7605:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x5c]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_00412570
        lea     ecx, [esp + 0x3c]
        call    FUN_004128e0
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x788210
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        mov     ecx, dword ptr [esp + 0x40]
        push    0x788210
        push    ecx
        call dword ptr [DAT_0076b2e0]
        add     esp, 0xc
        test    eax, eax
        jnz     l_77a6
        lea     ecx, [esp + 0x3c]
        call    FUN_004129c0
        lea     ecx, [esp + 0x3c]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x3c]
        mov esi, dword ptr [DAT_007f23e0]
        mov     eax, edi
    l_767a:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_76a2
        test    cl, cl
        jz      l_769e
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_76a2
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_767a
    l_769e:
        xor     eax, eax
        jmp     l_76a7
    l_76a2:
        sbb     eax, eax
        sbb     eax, -1
    l_76a7:
        test    eax, eax
        jz      l_7797
        mov esi, dword ptr [DAT_007f23e4]
        mov     eax, edi
    l_76b7:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_76df
        test    cl, cl
        jz      l_76db
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_76df
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_76b7
    l_76db:
        xor     eax, eax
        jmp     l_76e4
    l_76df:
        sbb     eax, eax
        sbb     eax, -1
    l_76e4:
        test    eax, eax
        jz      l_7797
        mov esi, dword ptr [DAT_007f23e8]
        mov     eax, edi
    l_76f4:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_771c
        test    cl, cl
        jz      l_7718
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_771c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_76f4
    l_7718:
        xor     eax, eax
        jmp     l_7721
    l_771c:
        sbb     eax, eax
        sbb     eax, -1
    l_7721:
        test    eax, eax
        jz      l_7797
        mov esi, dword ptr [DAT_007f23ec]
        mov     eax, edi
    l_772d:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_7755
        test    cl, cl
        jz      l_7751
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_7755
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_772d
    l_7751:
        xor     eax, eax
        jmp     l_775a
    l_7755:
        sbb     eax, eax
        sbb     eax, -1
    l_775a:
        test    eax, eax
        jz      l_7797
        mov esi, dword ptr [DAT_007f23f0]
        mov     eax, edi
    l_7766:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_778e
        test    cl, cl
        jz      l_778a
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_778e
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_7766
    l_778a:
        xor     eax, eax
        jmp     l_7793
    l_778e:
        sbb     eax, eax
        sbb     eax, -1
    l_7793:
        test    eax, eax
        jnz     l_77aa
    l_7797:
        mov     eax, dword ptr [esp + 0x10]
        add     eax, 0x50
        mov     dword ptr [eax], 0x3fa66666
        jmp     l_77aa
    l_77a6:
        mov     edi, dword ptr [esp + 0x3c]
    l_77aa:
        test    edi, edi
        jz      l_77c3
        mov     cl, byte ptr [edi - 1]
        lea     eax, [edi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_77c3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_77c3:
        mov     esi, dword ptr [esp + 0x10]
    l_77c7:
        mov     eax, dword ptr [esp + 0x14]
        xor     ecx, ecx
        test    eax, eax
        jle     l_77ec
        mov     eax, dword ptr [esi + 0x1c]
    l_77d4:
        mov     edx, dword ptr [eax]
        test    edx, edx
        jz      l_77e0
        fld     dword ptr [esi + 0x50]
        fstp    dword ptr [edx + 0x50]
    l_77e0:
        mov     edx, dword ptr [esp + 0x14]
        inc     ecx
        add     eax, 0x4
        cmp     ecx, edx
        jl      l_77d4
    l_77ec:
        mov     eax, dword ptr [esp + 0x18]
        xor     edi, edi
        test    eax, eax
        jle     l_783e
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax + 0x10]
        add     eax, 0x10
    l_7800:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_7832
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      l_781c
        mov     edx, ecx
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x4]
        push    edx
        call    FUN_005d6bf0
    l_781c:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      l_7832
        mov     edx, ecx
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        push    edx
        call    FUN_005d6bf0
    l_7832:
        mov     eax, dword ptr [esp + 0x18]
        inc     edi
        add     esi, 0x4
        cmp     edi, eax
        jl      l_7800
    l_783e:
        mov     esi, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 0x34], 0x0
        mov     byte ptr [esi + 0x4c], 0x0
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }


}
