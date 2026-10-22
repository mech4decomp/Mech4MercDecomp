/*
 * FUN_0068D620 (501 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Computes a 9x2 table of float values via FUN_0068d820/FUN_00551870/
 * FUN_00656b60, with FPU loops and a -1.0 sentinel fill path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __fastcall FUN_005d6dc0(void *this, void *p);
extern int __fastcall FUN_005d8270(void *this, void *p);
extern int __fastcall FUN_0068d820(void *this, void *a, void *b, void *c);
extern void __cdecl FUN_00551870(int a);
extern float __fastcall FUN_00656b60(void *this, int a, int b, int c, int d, int e, int f);

extern float g_76c5b0;
extern float g_76d598;
extern float g_795434;

__declspec(naked) char __fastcall FUN_0068d620(void *this, void *param_1)
{
    __asm {
        sub     esp, 0x84
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x94]
        mov     ebx, dword ptr [esi + 4]
        mov     eax, dword ptr [esi + 8]
        push    edi
        mov     edi, ecx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_005d6dc0
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L688
        fmul    dword ptr [g_76d598]
        mov     dword ptr [esp + 0x4c], 0xbf800000
        mov     dword ptr [esp + 0x50], 0xbf800000
        lea     eax, [esp + 0x58]
        mov     ecx, 8
L675:
        fst     dword ptr [eax - 4]
        add     eax, 8
        dec     ecx
        fst     dword ptr [eax - 8]
        jnz     L675
        fstp    st(0)
        jmp     L6784
L688:
        fcomp   dword ptr [g_795434]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6ae
        mov     ecx, dword ptr [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_005d8270
        xor     al, al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x84
        ret     4
L6ae:
        mov     edx, dword ptr [edi + 0x38]
        xor     ebp, ebp
        mov     dword ptr [esp + 0x14], edx
        lea     edi, [esp + 0x50]
L6bb:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_0068d820
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        push    esi
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     ecx, ebx
        call    FUN_0068d820
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [esp + 0x30]
        call    FUN_00656b60
        fcom    dword ptr [g_76d598]
        fst     dword ptr [edi - 4]
        fnstsw  ax
        test    ah, 0x40
        jnz     L716
        mov     edx, dword ptr [esp + 0x10]
        fld     dword ptr [edx + 0x44]
        fadd    dword ptr [ebx + 0x44]
        fadd    st(0), st(1)
        fstp    dword ptr [edi - 4]
L716:
        push    ebp
        fstp    st(0)
        push    esi
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, ebx
        call    FUN_0068d820
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        push    esi
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        call    FUN_0068d820
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [esp + 0x30]
        call    FUN_00656b60
        fcom    dword ptr [g_76d598]
        fst     dword ptr [edi]
        fnstsw  ax
        test    ah, 0x40
        jnz     L771
        mov     edx, dword ptr [esp + 0x10]
        fld     dword ptr [edx + 0x44]
        fadd    dword ptr [ebx + 0x44]
        fadd    st(0), st(1)
        fstp    dword ptr [edi]
L771:
        inc     ebp
        fstp    st(0)
        add     edi, 8
        cmp     ebp, 9
        jl      L6bb
        mov     edi, dword ptr [esp + 0x18]
L6784:
        xor     ecx, ecx
        lea     eax, [esp + 0x50]
        mov     edx, 0xbf800000
L78f:
        cmp     dword ptr [eax - 4], edx
        jnz     L7a1
        cmp     dword ptr [eax], edx
        jnz     L7a1
        inc     ecx
        add     eax, 8
        cmp     ecx, 9
        jl      L78f
L7a1:
        cmp     ecx, 9
        jnz     L7bf
        mov     eax, dword ptr [esi]
        push    eax
        mov     ecx, edi
        call    FUN_005d8270
        xor     al, al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x84
        ret     4
L7bf:
        xor     eax, eax
        lea     ecx, [esp + 0x50]
        mov     edx, dword ptr [esi + 4]
L7c5:
        fld     dword ptr [ecx - 4]
        xor     ebx, ebx
        mov     edi, edx
        cmp     edx, edi
        setnz   bl
        mov     edx, ebx
        add     edx, eax
        fst     dword ptr [esi + edx*4 + 0x14]
        xor     ebx, ebx
        fstp    dword ptr [esi + edx*4 + 0x5c]
        mov     edx, dword ptr [esi + 4]
        mov     ebp, dword ptr [esi + 8]
        fld     dword ptr [ecx]
        cmp     edx, ebp
        setnz   bl
        add     ecx, 8
        mov     edx, ebx
        add     edx, eax
        add     eax, 2
        fst     dword ptr [esi + edx*4 + 0x14]
        cmp     eax, 0x12
        fstp    dword ptr [esi + edx*4 + 0x5c]
        __emit 0x7C   /* jl L7c5: MSVC6 miscomputes backward rel8 (emits 0xC2, ref 0xBF) */
        __emit 0xBF
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x84
        ret     4
    }
}
