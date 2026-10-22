/*
 * FUN_00530B70 (1105 B) — __thiscall, 1 arg (ret 4). Teardown/rebuild of a
 * large game object: frees sub-objects, re-initializes a grid of entries,
 * and resets a set of global state words.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0053D720(void);
extern void __cdecl FUN_0053CF80(void);
extern void __cdecl FUN_0053CF40(void);
extern void __cdecl FUN_005E13C0(void);
extern void __cdecl FUN_006F8F80(void);
extern void __cdecl FUN_00565E00(void);
extern void __cdecl FUN_00566380(void);
extern void __cdecl FUN_005647E0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_005648D0(void);
extern void __cdecl FUN_004CE190(void);
extern void __cdecl FUN_0061B120(void);
extern void __cdecl FUN_0061B5E0(void);
extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_0061B700(void);
extern void __cdecl FUN_0061B7B0(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0041EF60(void);
extern void __cdecl FUN_004D4210(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0061D710(void);
extern void __cdecl FUN_006069C0(void);
extern void __cdecl FUN_004D2BF0(void);
extern void __cdecl FUN_00511920(void);
extern void __cdecl FUN_00511D10(void);
extern void __cdecl FUN_00511C80(void);
extern void __cdecl FUN_0050F530(void);
extern void __cdecl FUN_005116E0(void);
extern void __cdecl FUN_005117E0(void);

extern unsigned int g_7DAB44;
extern unsigned int g_7DAB40;
extern float g_77B2A8;
extern unsigned int g_7F27B0;
extern unsigned int g_858A38;
extern unsigned int g_7DB0B8;
extern unsigned int g_7DA884;
extern unsigned int g_7DD268;
extern unsigned int g_7F293C;
extern unsigned int g_7DDD38;

__declspec(naked) void FUN_00530B70(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x16]
        test    al, al
        je      l_530B8E
        call    FUN_0053D720
        mov     ecx, edi
        call    FUN_0053CF80
        jmp     l_530B93
    l_530B8E:
        call    FUN_0053CF40
    l_530B93:
        mov     byte ptr [edi + 0x3530], 0
        call    FUN_005E13C0
        mov     al, byte ptr [edi + 0x16]
        test    al, al
        je      l_530E94
        xor     ebp, ebp
        mov     dword ptr [edi + 0x18], ebp
        xor     esi, esi
        lea     ebx, [edi + 0x205d34]
    l_530BB7:
        push    1
        push    ebx
        lea     eax, [esi + 0x100]
        push    eax
        call    FUN_006F8F80
        inc     esi
        add     ebx, 0x22ac
        cmp     esi, 0x18
        jl      l_530BB7
        mov     al, byte ptr [edi + 0x17]
        test    al, al
        je      l_530C05
        call    FUN_00565E00
        call    FUN_00566380
        call    FUN_005647E0
        push    0x77b2b8
        push    0x77b29c
        push    0x77b294
        call    FUN_00563550
        push    eax
        call    FUN_005648D0
        add     esp, 0x10
    l_530C05:
        mov     ecx, dword ptr [edi + 0x3088]
        cmp     ecx, ebp
        je      l_530C1B
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
        mov     dword ptr [edi + 0x3088], ebp
    l_530C1B:
        mov     dword ptr [edi + 0x3084], ebp
        xor     esi, esi
        lea     ebx, [edi + 0x3541]
    l_530C29:
        cmp     byte ptr [ebx], 0
        je      l_530C54
        mov     eax, dword ptr [g_7DAB44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7DAB40]
        push    1
        push    ebp
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x14]
        push    0x2e
        push    esi
        xor     ecx, 0x85739531
        mov     byte ptr [ebx], 0
        call    FUN_004CE190
    l_530C54:
        inc     esi
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      l_530C29
        mov     edx, dword ptr [g_7DAB44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7DAB40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        cmp     dword ptr [edx + 0xa0], ebp
        je      l_530E7C
        mov     esi, dword ptr [edi + 0x307c]
        mov     ecx, esi
        call    FUN_0061B120
        push    0x77b2ac
        mov     ecx, esi
        call    FUN_0061B5E0
        push    ebp
        lea     ecx, [esp + 0x44]
        call    FUN_0041EE70
        push    ebp
        lea     ecx, [esp + 0x1c]
        call    FUN_0041EE70
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        call    FUN_0061B700
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_0061B7B0
        mov     edx, dword ptr [esp + 0x40]
        push    ebp
        lea     ecx, [esp + 0x44]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     ebp, 0xffffffec
        push    0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x4c], ebp
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x30]
        sub     esi, eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], 0
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x20], ebp
        fmul    dword ptr [g_77B2A8]
        call    FUN_0075DB4A
        lea     ecx, [eax + eax*2]
        lea     ecx, [ecx + ecx*4]
        lea     ecx, [ecx + ecx*4]
        lea     ecx, [ecx + ecx*4]
        shl     ecx, 3
        cmp     ecx, esi
        mov     dword ptr [edi + 0x3084], eax
        jae     l_530D39
        inc     eax
        mov     dword ptr [edi + 0x3084], eax
    l_530D39:
        mov     ebx, dword ptr [edi + 0x3084]
        inc     ebx
        lea     edx, [ebx + ebx*4]
        lea     eax, [edx*8 + 4]
        push    eax
        mov     dword ptr [edi + 0x3084], ebx
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      l_530D86
        lea     ebp, [eax + 4]
        mov     dword ptr [eax], ebx
        lea     eax, [ebx - 1]
        test    eax, eax
        mov     esi, ebp
        jl      l_530D7D
        lea     ebx, [eax + 1]
    l_530D6E:
        push    0
        mov     ecx, esi
        call    FUN_0041EE70
        add     esi, 0x28
        dec     ebx
        jne     l_530D6E
    l_530D7D:
        mov     esi, ebp
        mov     ebp, 0xffffffec
        jmp     l_530D88
    l_530D86:
        xor     esi, esi
    l_530D88:
        mov     eax, dword ptr [esp + 0x58]
        mov     ebx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esi]
        sub     eax, ebx
        push    eax
        push    ecx
        mov     ecx, esi
        mov     dword ptr [edi + 0x3088], esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x3084]
        mov     dword ptr [esi + 8], ebp
        mov     ebx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, 1
        sub     ebx, edx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x10], eax
        jle     l_530E27
        mov     eax, dword ptr [esp + 0x2c]
        add     esi, 0x28
        mov     ebp, 0xbb8
    l_530DD5:
        cmp     ebx, ebp
        jge     l_530DE0
        mov     ebp, ebx
    l_530DE0:
        mov     edx, dword ptr [esi]
        push    ebp
        push    eax
        mov     ecx, esi
        sub     ebx, ebp
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     dword ptr [esi + 8], 0xffffffec
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, ebp
        cmp     eax, ecx
        mov     dword ptr [esp + 0x2c], eax
        jbe     l_530E11
        mov     dword ptr [esp + 0x30], eax
    l_530E11:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x3084]
        inc     ecx
        add     esi, 0x28
        cmp     ecx, edx
        mov     dword ptr [esp + 0x10], ecx
        /* __emit: MSVC6 miscomputes backward jl rel-offset (B3 vs ref AE)
           because a call-reloc sits between branch and target */
        __emit 0x7C
        __emit 0xAE
    l_530E27:
        xor     esi, esi
        lea     ebx, [edi + 0x3538]
    l_530E2F:
        cmp     byte ptr [ebx], 0
        je      l_530E59
        mov     ecx, dword ptr [g_7DAB44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_7DAB40]
        push    1
        push    0
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    0x2c
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004CE190
    l_530E59:
        inc     esi
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      l_530E2F
        lea     ecx, [esp + 0x18]
        call    FUN_0041EF60
        lea     ecx, [esp + 0x40]
        call    FUN_0041EF60
        xor     ebp, ebp
    l_530E7C:
        mov     ecx, dword ptr [edi + 0x307c]
        cmp     ecx, ebp
        je      l_530E96
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [edi + 0x307c], ebp
        jmp     l_530E96
    l_530E94:
        xor     ebp, ebp
    l_530E96:
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [edi + 0x350c], 0
        call    FUN_004D4210
        mov     eax, dword ptr [edi + 0x204d20]
        cmp     eax, ebp
        je      l_530EC2
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [edi + 0x204d20], ebp
    l_530EC2:
        call    FUN_0061D710
        mov     edx, dword ptr [g_7DAB44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7DAB40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x7c], 0
        mov     ecx, dword ptr [g_7F27B0]
        mov     dword ptr [g_858A38], 0x535260
        call    FUN_006069C0
        mov     ecx, dword ptr [g_7DB0B8]
        call    FUN_004D2BF0
        mov     ecx, dword ptr [g_7DA884]
        cmp     ecx, ebp
        je      l_530F12
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_530F12:
        mov     ecx, dword ptr [g_7DD268]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     bl, bl
        cmp     eax, 6
        jne     l_530F24
        mov     bl, 1
    l_530F24:
        call    FUN_00511920
        mov     ecx, dword ptr [g_7DD268]
        call    FUN_00511D10
        mov     ecx, dword ptr [g_7DD268]
        call    FUN_00511C80
        test    bl, bl
        je      l_530F4E
        mov     ecx, dword ptr [g_7DD268]
        call    FUN_0050F530
    l_530F4E:
        mov     eax, dword ptr [g_7DAB44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7DAB40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [g_7DD268]
        xor     edx, 0x85739531
        cmp     eax, ebp
        mov     byte ptr [edx + 0x14], 0
        je      l_530F89
        call    FUN_005116E0
        jmp     l_530F8E
    l_530F89:
        call    FUN_005117E0
    l_530F8E:
        mov     eax, dword ptr [g_7F293C]
        cmp     eax, ebp
        je      l_530FA6
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [g_7F293C], ebp
    l_530FA6:
        mov     eax, dword ptr [g_7DDD38]
        mov     dword ptr [edi + 0x302c], ebp
        pop     edi
        pop     esi
        cmp     eax, ebp
        pop     ebp
        pop     ebx
        je      l_530FBB
        call    eax
    l_530FBB:
        add     esp, 0x58
        ret     4
    }
}
