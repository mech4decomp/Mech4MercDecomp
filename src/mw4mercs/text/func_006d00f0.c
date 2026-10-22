/*
 * FUN_006d00f0 (1929 B) — Large object constructor (this in ECX, __thiscall,
 * RET 0x14). Stores 4 scalar params, zero-initializes several member tables,
 * then (re)allocates a series of member arrays sized by (width*height):
 *   +0x7c  array of 8-byte slots
 *   +0xa4  array of 0x34-byte records
 *   +0xac  array of 0x34-byte records
 *   +0xb4  array of 0x34-byte records
 *   +0x84/+0x8c/+0x94  byte arrays
 *   +0x9c  array (FUN_00429930)
 * and finally builds a small image-name table via sprintf (IAT 0x76b420).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006cf340(void *this_);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_006e04d0(void *this_);
extern void __fastcall FUN_006e0620(void *this_, void *arg);
extern void __fastcall FUN_006d4770(void *this_, void *a, void *b);
extern void __fastcall FUN_006d2980(void *this_, void *arg);
extern void __cdecl FUN_006d2760(int a);
extern void __fastcall FUN_006d2720(void *this_);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00406c90(void *p, int size, int count, void *ctor);
extern void __cdecl FUN_00429930(int a);
extern void __fastcall FUN_006d28f0(void *this_, int a);
extern void __cdecl FUN_006d27d0(int a);
extern void __fastcall FUN_006d2860(void *this_, int a);
extern void __cdecl FUN_006f4950(int a);
extern void __fastcall FUN_0048f9e0(void *this_, void *a, int b, int c, int d);
extern void __cdecl FUN_006f49a0(void);

extern int g_7b95a4;
extern int g_7da848;
extern void *g_76b420;

__declspec(naked) void * __fastcall FUN_006d00f0(void *this_)
{
    __asm {
        sub     esp, 0x120
        mov     eax, dword ptr [esp + 0x124]
        mov     edx, dword ptr [esp + 0x12c]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x12c]
        push    ebp
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x138]
        push    esi
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [ebx + 0xc], eax
        push    edi
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [ebx + 0x8], edx
        lea     eax, [ebx + 0x2c]
        mov     ecx, 0x5
        xor     ebp, ebp
L_6d0131:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_6d0131
        lea     eax, [ebx + 0x54]
        mov     ecx, 0x5
L_6d0144:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_6d0144
        mov     dword ptr [ebx + 0x7c], ebp
        mov     dword ptr [ebx + 0x80], ebp
        lea     eax, [ebx + 0x84]
        mov     ecx, 0x4
L_6d0163:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_6d0163
        lea     eax, [ebx + 0xa4]
        mov     ecx, 0x3
L_6d0179:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_6d0179
        lea     ecx, [ebx + 0xc4]
        call    FUN_006cf340
        push    0x118
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_6d01ab
        mov     ecx, eax
        call    FUN_006e04d0
        mov     esi, eax
        jmp     L_6d01ad
L_6d01ab:
        xor     esi, esi
L_6d01ad:
        mov     edi, dword ptr [esp + 0x144]
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebx + 0xc0], esi
        call    FUN_006e0620
        push    0x130
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_6d01de
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_006d4770
        jmp     L_6d01e0
L_6d01de:
        xor     eax, eax
L_6d01e0:
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        mov     edi, dword ptr [ebx + 0x80]
        cmp     esi, edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebx + 0xbc], eax
        mov     dword ptr [esp + 0x10], esi
        jz      L_6d02a8
        cmp     esi, ebp
        jbe     L_6d0291
        lea     ecx, [esi*8 + 0x4]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_6d023e
        lea     ecx, [esi - 0x1]
        cmp     ecx, ebp
        lea     edx, [eax + 0x4]
        mov     dword ptr [eax], esi
        mov     eax, edx
        jl      L_6d0238
        inc     ecx
L_6d022d:
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_6d022d
L_6d0238:
        mov     dword ptr [esp + 0x14], edx
        jmp     L_6d0242
L_6d023e:
        mov     dword ptr [esp + 0x14], ebp
L_6d0242:
        cmp     dword ptr [ebx + 0x7c], ebp
        jz      L_6d0288
        cmp     esi, edi
        jnc     L_6d024d
        mov     edi, esi
L_6d024d:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      L_6d027a
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [ebx + 0x7c]
        lea     esi, [eax + edi*8]
        sub     ebp, eax
        inc     edi
L_6d0261:
        lea     eax, [esi + ebp]
        push    eax
        mov     ecx, esi
        call    FUN_006d2980
        dec     edi
        sub     esi, 0x8
        test    edi, edi
        ja      L_6d0261
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
L_6d027a:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        jz      L_6d0288
        push    0x3
        call    FUN_006d2760
L_6d0288:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x7c], ecx
        jmp     L_6d02a2
L_6d0291:
        mov     ecx, dword ptr [ebx + 0x7c]
        cmp     ecx, ebp
        jz      L_6d029f
        push    0x3
        call    FUN_006d2760
L_6d029f:
        mov     dword ptr [ebx + 0x7c], ebp
L_6d02a2:
        mov     dword ptr [ebx + 0x80], esi
L_6d02a8:
        mov     ebp, dword ptr [ebx + 0x4]
        imul    ebp, dword ptr [ebx]
        cmp     ebp, dword ptr [ebx + 0xa8]
        jz      L_6d038e
        test    ebp, ebp
        jbe     L_6d036f
        lea     edx, [ebp + ebp*2]
        lea     eax, [ebp + edx*4]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_6d0303
        lea     eax, [ebp - 0x1]
        test    eax, eax
        mov     esi, edi
        jl      L_6d02ff
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6d02ea:
        mov     ecx, esi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L_6d02ea
L_6d02ff:
        mov     esi, edi
        jmp     L_6d0305
L_6d0303:
        xor     esi, esi
L_6d0305:
        mov     edx, dword ptr [ebx + 0xa4]
        test    edx, edx
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x1c], edx
        jz      L_6d0367
        mov     eax, dword ptr [ebx + 0xa8]
        cmp     ebp, eax
        mov     ecx, ebp
        jc      L_6d0325
        mov     ecx, eax
L_6d0325:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_6d035e
        lea     eax, [ecx + ecx*2]
        sub     edx, esi
        lea     eax, [ecx + eax*4]
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esi + eax*4]
        lea     edx, [ecx + 0x1]
L_6d033e:
        mov     ecx, dword ptr [esp + 0x14]
        lea     esi, [ecx + eax]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d033e
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x10]
L_6d035e:
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
L_6d0367:
        mov     dword ptr [ebx + 0xa4], esi
        jmp     L_6d0388
L_6d036f:
        mov     edx, dword ptr [ebx + 0xa4]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0xa4], 0x0
L_6d0388:
        mov     dword ptr [ebx + 0xa8], ebp
L_6d038e:
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0xb0]
        mov     dword ptr [esp + 0x1c], esi
        jz      L_6d046e
        test    esi, esi
        jbe     L_6d044f
        lea     eax, [esi + esi*2]
        lea     ecx, [esi + eax*4]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L_6d03eb
        lea     eax, [esi - 0x1]
        test    eax, eax
        mov     edi, ebp
        jl      L_6d03e7
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_6d03d2:
        mov     ecx, edi
        call    FUN_006d2720
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x34
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L_6d03d2
L_6d03e7:
        mov     edi, ebp
        jmp     L_6d03ed
L_6d03eb:
        xor     edi, edi
L_6d03ed:
        mov     ebp, dword ptr [ebx + 0xac]
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], edi
        jz      L_6d0447
        mov     ecx, dword ptr [ebx + 0xb0]
        cmp     esi, ecx
        jnc     L_6d0407
        mov     ecx, esi
L_6d0407:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_6d0438
        lea     eax, [ecx + ecx*2]
        lea     edx, [ecx + eax*4]
        lea     eax, [edi + edx*4]
        sub     ebp, edi
        lea     edx, [ecx + 0x1]
L_6d041c:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d041c
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x1c]
L_6d0438:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d0447:
        mov     dword ptr [ebx + 0xac], edi
        jmp     L_6d0468
L_6d044f:
        mov     eax, dword ptr [ebx + 0xac]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0xac], 0x0
L_6d0468:
        mov     dword ptr [ebx + 0xb0], esi
L_6d046e:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [ecx], 0x100
        jle     L_6d0547
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        mov     ebp, dword ptr [ebx + 0xb8]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], esi
        jz      L_6d0547
        test    esi, esi
        jbe     L_6d0528
        lea     edx, [esi + esi*2]
        lea     eax, [esi + edx*4]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_6d04c6
        push    0x6d2720
        push    esi
        push    0x34
        push    edi
        call    FUN_00406c90
        jmp     L_6d04c8
L_6d04c6:
        xor     edi, edi
L_6d04c8:
        mov     edx, dword ptr [ebx + 0xb4]
        test    edx, edx
        mov     dword ptr [esp + 0x18], edi
        jz      L_6d0520
        cmp     esi, ebp
        mov     ecx, esi
        jc      L_6d04de
        mov     ecx, ebp
L_6d04de:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_6d0511
        lea     eax, [ecx + ecx*2]
        mov     ebp, edx
        lea     eax, [ecx + eax*4]
        lea     eax, [edi + eax*4]
        sub     ebp, edi
        lea     edx, [ecx + 0x1]
L_6d04f5:
        lea     esi, [eax + ebp]
        mov     edi, eax
        dec     edx
        mov     ecx, 0xd
        sub     eax, 0x34
        test    edx, edx
        rep     movsd
        ja      L_6d04f5
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
L_6d0511:
        mov     eax, dword ptr [ebx + 0xb4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d0520:
        mov     dword ptr [ebx + 0xb4], edi
        jmp     L_6d0541
L_6d0528:
        mov     ecx, dword ptr [ebx + 0xb4]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0xb4], 0x0
L_6d0541:
        mov     dword ptr [ebx + 0xb8], esi
L_6d0547:
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x88]
        jz      L_6d05be
        test    esi, esi
        jbe     L_6d059f
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x84]
        add     esp, 0x4
        test    edi, edi
        mov     ebp, eax
        jz      L_6d0597
        mov     eax, dword ptr [ebx + 0x88]
        cmp     esi, eax
        jnc     L_6d057a
        mov     eax, esi
L_6d057a:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_6d058e
L_6d0581:
        mov     cl, byte ptr [edi + eax]
        mov     edx, eax
        mov     byte ptr [eax + ebp], cl
        dec     eax
        test    edx, edx
        jnz     L_6d0581
L_6d058e:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6d0597:
        mov     dword ptr [ebx + 0x84], ebp
        jmp     L_6d05b8
L_6d059f:
        mov     eax, dword ptr [ebx + 0x84]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x84], 0x0
L_6d05b8:
        mov     dword ptr [ebx + 0x88], esi
L_6d05be:
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x90]
        jz      L_6d0635
        test    esi, esi
        jbe     L_6d0616
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x8c]
        add     esp, 0x4
        test    edi, edi
        mov     ebp, eax
        jz      L_6d060e
        mov     eax, dword ptr [ebx + 0x90]
        cmp     esi, eax
        jnc     L_6d05f1
        mov     eax, esi
L_6d05f1:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_6d0605
L_6d05f8:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jnz     L_6d05f8
L_6d0605:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6d060e:
        mov     dword ptr [ebx + 0x8c], ebp
        jmp     L_6d062f
L_6d0616:
        mov     edx, dword ptr [ebx + 0x8c]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8c], 0x0
L_6d062f:
        mov     dword ptr [ebx + 0x90], esi
L_6d0635:
        mov     esi, dword ptr [ebx + 0x4]
        imul    esi, dword ptr [ebx]
        cmp     esi, dword ptr [ebx + 0x98]
        jz      L_6d06ac
        test    esi, esi
        jbe     L_6d068d
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x94]
        add     esp, 0x4
        test    edi, edi
        mov     ebp, eax
        jz      L_6d0685
        mov     eax, dword ptr [ebx + 0x98]
        cmp     esi, eax
        jnc     L_6d0668
        mov     eax, esi
L_6d0668:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_6d067c
L_6d066f:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jnz     L_6d066f
L_6d067c:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6d0685:
        mov     dword ptr [ebx + 0x94], ebp
        jmp     L_6d06a6
L_6d068d:
        mov     edx, dword ptr [ebx + 0x94]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x94], 0x0
L_6d06a6:
        mov     dword ptr [ebx + 0x98], esi
L_6d06ac:
        mov     eax, dword ptr [ebx + 0x4]
        imul    eax, dword ptr [ebx]
        lea     ecx, [ebx + 0x9c]
        push    eax
        call    FUN_00429930
        mov     eax, dword ptr [ebx + 0x4]
        imul    eax, dword ptr [ebx]
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jle     L_6d0743
        mov     eax, dword ptr [ebx + 0xac]
        mov     ecx, dword ptr [ebx + 0x7c]
        mov     ebp, dword ptr [ebx + 0xa4]
        mov     edx, dword ptr [ebx + 0x9c]
        mov     esi, dword ptr [ebx + 0x94]
        add     eax, 0x8
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        add     ebp, 0x8
        mov     dword ptr [esp + 0x1c], edx
L_6d06fb:
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        call    FUN_006d28f0
        mov     eax, dword ptr [ebx + 0x8c]
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [eax + edi], 0x0
        mov     eax, dword ptr [esp + 0x1c]
        mov     byte ptr [esi], 0x0
        mov     byte ptr [eax + edi], 0x0
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], esi
        mov     dword ptr [eax], esi
        add     eax, 0x34
        add     edx, 0x8
        inc     edi
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x10]
        inc     esi
        add     ebp, 0x34
        cmp     edi, eax
        mov     dword ptr [esp + 0x14], edx
        jl      L_6d06fb
L_6d0743:
        mov     ecx, dword ptr [ebx + 0xbc]
        mov     esi, dword ptr [ecx]
        xor     eax, eax
        cmp     esi, 0x100
        setg    al
        add     eax, 0x4
        cmp     eax, 0x2
        mov     dword ptr [esp + 0x28], eax
        jle     L_6d086a
        mov     eax, 0xffffffe8
        lea     edi, [ebx + 0x64]
        sub     eax, ebx
        lea     esi, [ebx + 0x1a]
        mov     dword ptr [esp + 0x14], 0x3
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], eax
L_6d0783:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dl, 0x6
        shl     dl, cl
        xor     eax, eax
        lea     ecx, [edi - 0x28]
        mov     byte ptr [esi], dl
        mov     byte ptr [esi + 0x5], 0x0
        mov     byte ptr [esi + 0xa], 0x0
        mov     byte ptr [esi + 0xf], 0x1
        mov     al, byte ptr [esi]
        push    eax
        call    FUN_006d27d0
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_006d2860
        mov     edx, dword ptr [g_7b95a4]
        push    edx
        call    FUN_006f4950
        mov     al, byte ptr [esi]
        xor     ebp, ebp
        test    al, al
        jbe     L_6d0842
        mov     eax, dword ptr [esp + 0x18]
        lea     ebx, [eax + esi]
        mov     ecx, ebx
        mov     eax, 0x20
        shl     eax, cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [eax]
        add     eax, -0x28
        mov     eax, dword ptr [eax]
        sub     eax, edi
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x20], eax
L_6d07f3:
        push    ebp
        push    ebx
        lea     edx, [esp + 0x38]
        push    0x79e980
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x10
        push    0x42
        push    eax
        push    0x0
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [g_7da848]
        call    FUN_0048f9e0
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + edi], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [edi], 0x0
        inc     ebp
        add     edi, 0x4
        cmp     ebp, eax
        jl      L_6d07f3
        mov     ebx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x10]
L_6d0842:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x28]
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        add     edi, 0x8
        add     eax, esi
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], edi
        jl      L_6d0783
L_6d086a:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x120
        ret     0x14
    }
}
