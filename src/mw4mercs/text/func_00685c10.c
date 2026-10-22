/*
 * FUN_00685C10 (897 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Collision/placement check for a HUD element: builds candidate strings,
 * tests 4 neighboring cells via FUN_005d8c20, and does FPU distance
 * comparisons to decide placement validity.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_00685870(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005d8c20(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);

extern void *g_7b220c;          /* global pointer @ 0x7b220c */
extern float g_788100;          /* float constant @ 0x788100 */
extern float g_786dd8;          /* float constant @ 0x786dd8 */
extern float g_7880fc;          /* float constant @ 0x7880fc */
extern float g_76c5b0;          /* float constant 0.0 @ 0x76c5b0 */
extern float g_788104;          /* float constant @ 0x788104 */

__declspec(naked) unsigned char __cdecl FUN_00685c10(void)
{
    __asm {
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0xbf800000
        push    0xbf800000
        mov     edi, ecx
        push    0xbf800000
        lea     ecx, [esp + 0x48]
        call    FUN_0040c9c0
        mov     al, byte ptr [edi + 0x3c]
        test    al, al
        jnz     L_85c53
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x60]
        jmp     L_85d01
    L_85c53:
        mov     ecx, dword ptr [edi + 0x64]
        test    ecx, ecx
        jz      L_85c6e
        lea     eax, [esp + 0x60]
        push    eax
        call    FUN_00685870
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0040ccd0
    L_85c6e:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x78]
        call    FUN_00587830
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        push    eax
        lea     edx, [esp + 0x44]
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_85ca5
        lea     eax, [esp + 0x3c]
        jmp     L_85d06
    L_85ca5:
        mov     esi, dword ptr [edi + 0x54]
        mov     ebx, dword ptr [edi + 0x60]
        cmp     ebx, esi
        jz      L_85ceb
        mov     edx, dword ptr [edi + 0x50]
        mov     ecx, esi
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        jbe     L_85ceb
        lea     eax, [ebx + 0x18]
        cmp     eax, esi
        jnz     L_85d06
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x84]
        jmp     L_85d01
    L_85ceb:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x90]
    L_85d01:
        call    FUN_00587830
    L_85d06:
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x30]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_0040c410
        mov     eax, dword ptr [g_7b220c]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        mov     dword ptr [esp + 0x48], 0xbf800000
        mov     dword ptr [esp + 0x4c], 0xbf800000
        mov     dword ptr [esp + 0x50], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_85f82
        mov     esi, dword ptr [esp + 0x94]
        fld     dword ptr [esi]
        fmul    dword ptr [g_788100]
        call    FUN_0075db4a
        fld     dword ptr [esi + 0x8]
        fmul    dword ptr [g_788100]
        mov     ebx, eax
        call    FUN_0075db4a
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0x28]
        and     eax, 0xfffffffe
        xor     esi, esi
        test    al, 0x80
        jz      L_85d8d
        mov     esi, 0x80
    L_85d8d:
        test    al, 0x10
        jz      L_85d96
        add     esi, 0x41
        jmp     L_85dd4
    L_85d96:
        test    al, 0x1
        jz      L_85d9f
        add     esi, 0x60
        jmp     L_85dd4
    L_85d9f:
        test    al, 0x2
        jz      L_85da8
        add     esi, 0x44
        jmp     L_85dd4
    L_85da8:
        test    al, 0x8
        jz      L_85db1
        add     esi, 0x48
        jmp     L_85dd4
    L_85db1:
        test    al, 0x4
        jz      L_85dba
        add     esi, 0x60
        jmp     L_85dd4
    L_85dba:
        test    al, 0x20
        jz      L_85dc3
        add     esi, 0x42
        jmp     L_85dd4
    L_85dc3:
        test    al, 0x40
        jz      L_85dcc
        add     esi, 0x60
        jmp     L_85dd4
    L_85dcc:
        test    ah, 0x1
        jz      L_85dd4
        add     esi, 0x50
    L_85dd4:
        mov     edi, dword ptr [edi + 0x34]
        push    esi
        push    0x0
        push    ebp
        lea     eax, [ebx + 0x1]
        push    eax
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jz      L_85f82
        push    esi
        push    0x0
        push    ebp
        lea     ecx, [ebx + -0x1]
        push    ecx
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jz      L_85f82
        push    esi
        push    0x0
        lea     edx, [ebp + -0x1]
        push    edx
        push    ebx
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jz      L_85f82
        push    esi
        push    0x0
        inc     ebp
        push    ebp
        push    ebx
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jz      L_85f82
        mov     esi, dword ptr [esp + 0x94]
        mov     eax, dword ptr [esp + 0x98]
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        push    esi
        fld     dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x4c]
        fmul    dword ptr [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x2c]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jz      L_85eb3
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x80
        ret     0x8
    L_85eb3:
        fld     dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x24]
        fmul    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x24]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        call    FUN_0040cb00
        fld     dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fxch
        fsqrt
        fxch
        fxch
        fmulp   st(1), st(0)
        fdivr   dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x8]
        fadd    dword ptr [g_786dd8]
        fmul    dword ptr [g_7880fc]
        call    FUN_0075db4a
        fld     dword ptr [esi]
        fadd    dword ptr [g_786dd8]
        mov     ebx, eax
        shl     ebx, 0x9
        fmul    dword ptr [g_7880fc]
        call    FUN_0075db4a
        fcomp   dword ptr [g_76c5b0]
        mov     edx, dword ptr [edi + 0x3c]
        add     ebx, eax
        mov     eax, dword ptr [edx + 0x8]
        shl     ebx, 0x1
        sub     eax, ebx
        mov     cl, byte ptr [eax]
        fnstsw  ax
        test    cl, 0x80
        jz      L_85f5d
        test    ah, 0x41
        jz      L_85f82
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x80
        ret     0x8
    L_85f5d:
        test    ah, 0x41
        jz      L_85f82
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_788104]
        fnstsw  ax
        test    ah, 0x1
        jz      L_85f82
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x80
        ret     0x8
    L_85f82:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x80
        ret     0x8
    }
}
