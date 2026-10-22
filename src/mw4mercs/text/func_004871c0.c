/*
 * FUN_004871c0 (1606 B) - MLR effect factory / material loader (__thiscall).
 * Reads a material type, allocates the matching effect object via a big
 * type-dispatch chain, and stores it into the effect buffer.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0044d070(void);
extern void __cdecl FUN_0044d140(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_00450bd0(void);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_00458660(void);
extern void __cdecl FUN_00439e40(void);
extern void __cdecl FUN_00439f10(void);
extern void __cdecl FUN_0043e480(void);
extern void __cdecl FUN_0043e550(void);
extern void __cdecl FUN_00442180(void);
extern void __cdecl FUN_00442230(void);
extern void __cdecl FUN_00431900(void);
extern void __cdecl FUN_004319d0(void);
extern void __cdecl FUN_00435e00(void);
extern void __cdecl FUN_00435ed0(void);
extern void __cdecl FUN_00455070(void);
extern void __cdecl FUN_004554a0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_00424170(void);
extern void __cdecl FUN_004242a0(void);

extern int g_007b8c0c;
extern int g_007b2434;
extern char g_007b95a8;
extern int g_007da5e4;
extern int g_007d99b0;
extern int g_007d9998;
extern int g_007b98bc;
extern int g_007b98b4;
extern int g_007b98d0;
extern int g_007b98cc;
extern int g_007d9900;
extern int g_007d98f8;
extern int g_007d9950;
extern int g_007b9840;
extern int g_007b9838;
extern int g_007d9968;
extern int g_007b9854;
extern int g_007b9850;
extern int g_007d9984;
extern int g_007b9870;
extern int g_007b986c;
extern int g_007d9910;
extern int g_007b9814;
extern int g_007b9810;
extern int g_007d9928;
extern int g_007b9828;
extern int g_007b9824;
extern int g_007d993c;
extern int g_007b98e4;
extern int g_007b98e0;
extern int g_007b956c;
extern int g_007b97f8;
extern int g_007da728;
extern int g_007da848;
extern int g_007da72c;
extern int g_007da730;
extern int g_007b9644;

__declspec(naked) void FUN_004871c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     dword ptr [ebp - 0x4], edi
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [edi + 0x14], eax
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        mov     dword ptr [edi + 0x18], eax
        cmp     dword ptr [ebp + 0x10], 0xf
        mov     dword ptr [edi], 0x76fcc8
        jge     L_487209
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        call    dword ptr [edx + 0x20]
        mov     cl, byte ptr [ebp + 0x8]
        lea     esi, [edi + 0x1c]
        mov     byte ptr [esi], cl
        jmp     L_487217
L_487209:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ecx]
        push    0x1
        lea     esi, [edi + 0x1c]
        push    esi
        call    dword ptr [edx + 0x20]
L_487217:
        mov     ebx, dword ptr [edi + 0x18]
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     esi, eax
        cmp     esi, ebx
        jz      L_487298
        test    esi, esi
        jbe     L_48727d
        lea     ecx, [esi*0x4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [edx + 0x14]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        jz      L_487275
        cmp     esi, ebx
        mov     ecx, esi
        jc      L_48724c
        mov     ecx, ebx
L_48724c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_487266
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_487259:
        mov     ebx, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_487259
L_487266:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx + 0x14]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_487275:
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [edx + 0x14], edi
        jmp     L_487290
L_48727d:
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x14], 0x0
L_487290:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ecx + 0x18], esi
        mov     edi, ecx
L_487298:
        test    esi, esi
        mov     dword ptr [ebp + 0x8], 0x0
        jle     L_4877fa
L_4872a7:
        mov     edi, dword ptr [ebp + 0x10]
        xor     esi, esi
        test    edi, edi
        jle     L_4872d0
        cmp     edi, 0x2
        jg      L_4872d0
        push    0x76fc98
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4877c8
        int     3
        jmp     L_4877c8
L_4872d0:
        mov     esi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp - 0x8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [g_007b8c0c]
        mov     eax, dword ptr [edx + ecx*0x4]
        push    edi
        push    esi
        call    dword ptr [eax + 0x14]
        mov     esi, eax
        mov     eax, dword ptr [g_007b2434]
        add     esp, 0x8
        test    eax, eax
        jz      L_4876bb
        cmp     byte ptr [g_007b95a8], 0x1
        jnz     L_4876bb
        mov     eax, dword ptr [g_007da5e4]
        mov     edi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_48734a
        mov     eax, dword ptr [g_007d99b0]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_48734a
        mov     eax, dword ptr [g_007d9998]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jz      L_4876bb
L_48734a:
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [ebp - 0xc]
        xor     eax, eax
        xor     edx, edx
        xor     edi, edi
        test    ecx, ecx
        jle     L_4877c8
        mov     ebx, dword ptr [ebp - 0x10]
L_48736d:
        cmp     byte ptr [eax + ebx*0x1], 0x3
        jnz     L_487376
        inc     edx
        jmp     L_487377
L_487376:
        inc     edi
L_487377:
        inc     eax
        cmp     eax, ecx
        jl      L_48736d
        test    edx, edx
        jle     L_4877c8
        test    edi, edi
        jnz     L_4877c8
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [g_007d9998]
        mov     edi, esi
        jnz     L_4873e8
        mov     eax, dword ptr [g_007b98bc]
        push    eax
        call    FUN_006f4950
        push    0x78
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4873d4
        mov     ecx, dword ptr [g_007b98b4]
        push    ecx
        mov     ecx, eax
        call    FUN_0044d070
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_0044d140
        jmp     L_48769f
L_4873d4:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_0044d140
        jmp     L_48769f
L_4873e8:
        cmp     eax, dword ptr [g_007d99b0]
        jnz     L_487440
        mov     edx, dword ptr [g_007b98d0]
        push    edx
        call    FUN_006f4950
        push    0x70
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_48742c
        mov     ecx, dword ptr [g_007b98cc]
        push    ecx
        mov     ecx, eax
        call    FUN_00450b10
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00450bd0
        jmp     L_48769f
L_48742c:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00450bd0
        jmp     L_48769f
L_487440:
        cmp     eax, dword ptr [g_007da5e4]
        jnz     L_487498
        mov     edx, dword ptr [g_007d9900]
        push    edx
        call    FUN_006f4950
        push    0x64
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_487484
        mov     ecx, dword ptr [g_007d98f8]
        push    ecx
        mov     ecx, eax
        call    FUN_00458560
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00458660
        jmp     L_48769f
L_487484:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00458660
        jmp     L_48769f
L_487498:
        cmp     eax, dword ptr [g_007d9950]
        jnz     L_4874f3
        mov     edx, dword ptr [g_007b9840]
        push    edx
        call    FUN_006f4950
        push    0x9c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4874df
        mov     ecx, dword ptr [g_007b9838]
        push    ecx
        mov     ecx, eax
        call    FUN_00439e40
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00439f10
        jmp     L_48769f
L_4874df:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00439f10
        jmp     L_48769f
L_4874f3:
        cmp     eax, dword ptr [g_007d9968]
        jnz     L_48754e
        mov     edx, dword ptr [g_007b9854]
        push    edx
        call    FUN_006f4950
        push    0x94
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_48753a
        mov     ecx, dword ptr [g_007b9850]
        push    ecx
        mov     ecx, eax
        call    FUN_0043e480
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_0043e550
        jmp     L_48769f
L_48753a:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_0043e550
        jmp     L_48769f
L_48754e:
        cmp     eax, dword ptr [g_007d9984]
        jnz     L_4875a9
        mov     edx, dword ptr [g_007b9870]
        push    edx
        call    FUN_006f4950
        push    0x88
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_487595
        mov     ecx, dword ptr [g_007b986c]
        push    ecx
        mov     ecx, eax
        call    FUN_00442180
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00442230
        jmp     L_48769f
L_487595:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00442230
        jmp     L_48769f
L_4875a9:
        cmp     eax, dword ptr [g_007d9910]
        jnz     L_487604
        mov     edx, dword ptr [g_007b9814]
        push    edx
        call    FUN_006f4950
        push    0xbc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4875f0
        mov     ecx, dword ptr [g_007b9810]
        push    ecx
        mov     ecx, eax
        call    FUN_00431900
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_004319d0
        jmp     L_48769f
L_4875f0:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_004319d0
        jmp     L_48769f
L_487604:
        cmp     eax, dword ptr [g_007d9928]
        jnz     L_487659
        mov     edx, dword ptr [g_007b9828]
        push    edx
        call    FUN_006f4950
        push    0xb4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_487648
        mov     ecx, dword ptr [g_007b9824]
        push    ecx
        mov     ecx, eax
        call    FUN_00435e00
        mov     esi, eax
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00435ed0
        jmp     L_48769f
L_487648:
        xor     esi, esi
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_00435ed0
        jmp     L_48769f
L_487659:
        cmp     eax, dword ptr [g_007d993c]
        jnz     L_48769f
        mov     edx, dword ptr [g_007b98e4]
        push    edx
        call    FUN_006f4950
        push    0xa8
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_487690
        mov     ecx, dword ptr [g_007b98e0]
        push    ecx
        mov     ecx, eax
        call    FUN_00455070
        mov     esi, eax
        jmp     L_487692
L_487690:
        xor     esi, esi
L_487692:
        call    FUN_006f49a0
        push    edi
        mov     ecx, esi
        call    FUN_004554a0
L_48769f:
        dec     word ptr [edi + 0x8]
        cmp     word ptr [edi + 0x8], 0x0
        jnz     L_4877c8
        test    edi, edi
        jz      L_4877c8
        jmp     L_4877c0
L_4876bb:
        mov     eax, dword ptr [g_007b956c]
        test    eax, eax
        jbe     L_4877c8
        mov     eax, dword ptr [g_007b97f8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_4877c8
        mov     eax, dword ptr [g_007da728]
        test    eax, eax
        mov     edi, esi
        jnz     L_48773b
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    0x76fc8c
        call    FUN_0048f380
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    0x76fc80
        mov     dword ptr [g_007da728], eax
        call    FUN_0048f380
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    0x76fc70
        mov     dword ptr [g_007da72c], eax
        call    FUN_0048f380
        mov     dword ptr [g_007da730], eax
        mov     eax, dword ptr [g_007da728]
        test    eax, eax
        jz      L_4877c8
L_48773b:
        mov     eax, dword ptr [g_007da72c]
        test    eax, eax
        jz      L_4877c8
        mov     eax, dword ptr [g_007b9828]
        push    eax
        call    FUN_006f4950
        push    0x8c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_487776
        mov     ecx, dword ptr [g_007b9644]
        push    ecx
        mov     ecx, eax
        call    FUN_00424170
        mov     esi, eax
        jmp     L_487778
L_487776:
        xor     esi, esi
L_487778:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007da728]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [g_007da72c]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [esi + 0x80], eax
        mov     eax, dword ptr [g_007da730]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esi + 0x88], ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0x84], edx
        call    FUN_004242a0
        dec     word ptr [edi + 0x8]
        cmp     word ptr [edi + 0x8], 0x0
        jnz     L_4877c8
        test    edi, edi
        jz      L_4877c8
L_4877c0:
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
L_4877c8:
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [edx + ecx*0x4], esi
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x1c]
        add     eax, 0x1c
        inc     ecx
        mov     dword ptr [ebp + 0x8], ecx
        cmp     ecx, edx
        jl      L_4872a7
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     esi
        mov     word ptr [eax + 0x10], 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4877fa:
        mov     word ptr [edi + 0x10], 0x1
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
