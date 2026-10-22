/*
 * FUN_00664490 (482 B) — ABL object method: computes a movement/behavior
 * magnitude from a transform, builds transform/color objects via helper
 * thiscalls, then calls FUN_00662fb0 and two destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void *p, int g);
extern void __cdecl FUN_00419480(int a);
extern void __cdecl FUN_0040ca10(void *a, void *b);
extern float __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_006a6cb0(int a, int b, int c);
extern void __cdecl FUN_006a6600(int a, int b, float c, int d);
extern void __cdecl FUN_006a6aa0(float a, void *b, float c, void *d, float e, void *f);
extern void __cdecl FUN_006a7510(int a, int b, float c, float d);
extern void __cdecl FUN_00662fb0(void *p, void *a, void *b, int g, void *c);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_00665a90(void);

extern int   g_795440;   /* 0x00795440 */
extern int   g_795444;   /* 0x00795444 */

__declspec(naked) void __cdecl FUN_00664490(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc8
        mov     eax, dword ptr [g_795440]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_end
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0xc8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xac]
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fst     dword ptr [ebp + 8]
        fcomp   dword ptr [ebp + 0xc]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_535
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 8], ecx
L_535:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 8], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ebp - 0xc]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x24], ecx
        fstp    dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x20], edx
        fld     dword ptr [ebp - 0x24]
        lea     ecx, [ebp - 0x1c]
        fsub    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        push    1
        push    1
        fstp    dword ptr [ebp + 0xc]
        push    1
        lea     ecx, [ebp - 0x34]
        call    FUN_006a6cb0
        fld     dword ptr [ebp + 0xc]
        fadd    st(0), st(0)
        push    0
        lea     ecx, [ebp - 0x48]
        fstp    dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    0
        push    0
        call    FUN_006a6600
        push    1
        push    edi
        push    0
        push    3
        lea     ecx, [ebp - 0x5c]
        call    FUN_006a6600
        lea     eax, [ebp - 0x5c]
        push    eax
        push    0x3dcccccd
        lea     ecx, [ebp - 0x48]
        push    ecx
        push    0x3ecccccd
        lea     edx, [ebp - 0x34]
        push    edx
        push    0x3f000000
        lea     ecx, [ebp - 0x78]
        call    FUN_006a6aa0
        mov     eax, dword ptr [ebp + 8]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    1
        lea     ecx, [ebp - 0x98]
        call    FUN_006a7510
        mov     ecx, dword ptr [g_795444]
        push    2
        push    ecx
        lea     edx, [ebp - 0x78]
        push    edx
        lea     eax, [ebp - 0x98]
        push    eax
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x68]
        mov     dword ptr [ebp - 0x98], 0x795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x74]
        call    FUN_00665a90
        pop     edi
L_end:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
