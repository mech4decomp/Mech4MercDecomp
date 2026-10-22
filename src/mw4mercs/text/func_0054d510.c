/*
 * FUN_0054d510 (1302 B) — __thiscall method on a large object.
 * ECX = this pointer, double param on stack (RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   DAT_007b46b8;
extern int   DAT_007b46bc;
extern float DAT_0076d070;
extern float DAT_0076d598;
extern float DAT_0076d064;
extern char  DAT_007b46b4;
extern float DAT_0076d978;
extern float DAT_0076c5b0;
extern int   DAT_007dc6b4;
extern float DAT_007704c0;

extern void __cdecl FUN_004de980(void);

__declspec(naked) void func_0054d510(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx

        mov     al, byte ptr [esi + 0x8FC]
        xor     ebx, ebx
        cmp     al, bl
        jnz     L_0054DA1D

        cmp     byte ptr [esi + 0x550], bl
        jz      L_0054D554

        mov     byte ptr [esi + 0x550], bl
        mov     dword ptr [esi + 0x2D8], ebx
        mov     dword ptr [esi + 0x2E0], ebx
        mov     dword ptr [esi + 0x2DC], ebx
        mov     dword ptr [esi + 0x4A0], ebx
        mov     dword ptr [esi + 0x4A4], ebx

L_0054D554:
        fld     dword ptr [esi + 0x178]

        mov     eax, dword ptr [DAT_007b46b8]

        fld     dword ptr [esi + 0x498]

        mov     ecx, dword ptr [DAT_007b46bc]

        fsub    dword ptr [DAT_0076d070]

        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        mov     ebp, 0x3F800000

        fadd    st(0), st(0)
        fst     dword ptr [esi + 0x498]

        fld     dword ptr [esi + 0x49C]
        fsub    dword ptr [DAT_0076d070]
        fadd    st(0), st(0)
        fst     dword ptr [esp + 0x1C]
        fstp    dword ptr [esi + 0x49C]

        fcom    dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D5BA

        mov     ecx, 0xBF800000
        fstp    st(0)
        mov     dword ptr [esi + 0x498], ecx
        jmp     L_0054D5D2

L_0054D5BA:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D5CD
        mov     dword ptr [esi + 0x498], ebp

L_0054D5CD:
        mov     ecx, 0xBF800000

L_0054D5D2:
        fld     dword ptr [esp + 0x1C]
        fcomp   dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D5EB
        mov     dword ptr [esi + 0x49C], ecx
        jmp     L_0054D602

L_0054D5EB:
        fld     dword ptr [esp + 0x1C]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D602
        mov     dword ptr [esi + 0x49C], ebp

L_0054D602:
        mov     al, byte ptr [esi + 0x4B1]
        fld     st(0)
        cmp     al, bl
        fmul    dword ptr [esi + 0x4A0]
        fst     dword ptr [esp + 0x0C]
        fstp    dword ptr [esi + 0x4A0]
        fmul    dword ptr [esi + 0x4A4]
        fst     dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x4A4]
        jz      L_0054DA1D

        fld     dword ptr [esp + 0x0C]
        mov     dword ptr [esp + 0x18], 0
        fadd    dword ptr [esi + 0x548]
        mov     dword ptr [esp + 0x1C], 0
        fst     dword ptr [esi + 0x548]

        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x54C]
        fst     dword ptr [esp + 0x0C]
        fstp    dword ptr [esi + 0x54C]

        fcom    dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D67D

        fstp    st(0)
        mov     dword ptr [esi + 0x548], ecx
        jmp     L_0054D690

L_0054D67D:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D690
        mov     dword ptr [esi + 0x548], ebp

L_0054D690:
        fld     dword ptr [esp + 0x0C]
        fcomp   dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D6A9
        mov     dword ptr [esi + 0x54C], ecx
        jmp     L_0054D6C0

L_0054D6A9:
        fld     dword ptr [esp + 0x0C]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D6C0
        mov     dword ptr [esi + 0x54C], ebp

L_0054D6C0:
        fld     dword ptr [esi + 0x54C]

        mov     edx, dword ptr [esi + 0x548]
        fld     qword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x0C], edx
        fsub    qword ptr [esi + 0xE4]
        fstp    dword ptr [esp + 0x20]

        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x28]

        fld     dword ptr [esp + 0x0C]
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D701

        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x0C], eax
        jmp     L_0054D718

L_0054D701:
        fld     dword ptr [esp + 0x0C]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D718
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x0C], ecx

L_0054D718:
        fcom    dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D72B

        fstp    st(0)
        fld     dword ptr [esp + 0x28]
        jmp     L_0054D73C

L_0054D72B:
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D73C
        fstp    st(0)
        fld     dword ptr [esp + 0x14]

L_0054D73C:
        fld     dword ptr [esp + 0x20]

        mov     al, byte ptr [DAT_007b46b4]

        cmp     al, bl
        fmul    dword ptr [DAT_0076d978]

        fld     st(0)
        fmul    dword ptr [esp + 0x0C]
        fstp    dword ptr [esp + 0x0C]
        fmulp   st(1), st(0)
        jnz     L_0054D761
        mov     dword ptr [esi + 0x54C], ebx

L_0054D761:
        mov     eax, dword ptr [esi + 0x188]
        cmp     eax, 1
        jnz     L_0054D778
        mov     edx, dword ptr [esi + 0x548]
        mov     dword ptr [esp + 0x18], edx
        jmp     L_0054D787

L_0054D778:
        cmp     eax, 2
        jnz     L_0054D787
        mov     eax, dword ptr [esi + 0x548]
        mov     dword ptr [esp + 0x1C], eax

L_0054D787:
        fld     dword ptr [esi + 0x548]

        mov     ecx, dword ptr [esi + 0x54C]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x20], ecx
        fnstsw  ax
        test    ah, 1
        jz      L_0054D7DE

        fld     dword ptr [esp + 0x10]
        fchs
        fld     dword ptr [esp + 0x0C]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D7BD

        fstp    dword ptr [esp + 0x0C]
        jmp     L_0054D7BF

L_0054D7BD:
        fstp    st(0)

L_0054D7BF:
        fld     dword ptr [esi + 0x548]
        fsub    dword ptr [esp + 0x0C]
        fst     dword ptr [esi + 0x548]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D818
        jmp     L_0054D812

L_0054D7DE:
        fld     dword ptr [esp + 0x0C]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D7F5
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x0C], edx

L_0054D7F5:
        fld     dword ptr [esi + 0x548]
        fsub    dword ptr [esp + 0x0C]
        fst     dword ptr [esi + 0x548]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D818

L_0054D812:
        mov     dword ptr [esi + 0x548], ebx

L_0054D818:
        fld     dword ptr [esi + 0x54C]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D861

        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x28]
        fcom    dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D846
        fstp    st(0)
        fld     dword ptr [esp + 0x28]

L_0054D846:
        fsubr   dword ptr [esi + 0x54C]
        fst     dword ptr [esi + 0x54C]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D891
        jmp     L_0054D88B

L_0054D861:
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D872
        fstp    st(0)
        fld     dword ptr [esp + 0x10]

L_0054D872:
        fsubr   dword ptr [esi + 0x54C]
        fst     dword ptr [esi + 0x54C]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D891

L_0054D88B:
        mov     dword ptr [esi + 0x54C], ebx

L_0054D891:
        mov     ecx, dword ptr [DAT_007dc6b4]

        push    edi
        call    FUN_004de980

        cmp     byte ptr [esi + 0x4A8], bl
        jnz     L_0054D917

        mov     ecx, dword ptr [esi + 0x384]
        mov     al, byte ptr [ecx + 0x2F8]
        cmp     al, bl
        lea     edi, [ecx + 0x2F8]
        jnz     L_0054D917

        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xC0]
        test    al, al
        jnz     L_0054D917

        fld     dword ptr [esi + 0x2D8]
        fsub    dword ptr [esp + 0x20]
        fst     dword ptr [esi + 0x2D8]

        fld     dword ptr [esi + 0x2E0]
        fsub    dword ptr [esp + 0x1C]
        fstp    dword ptr [esi + 0x2E0]

        fcom    dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D902

        fstp    st(0)
        mov     dword ptr [esi + 0x2D8], 0xBF800000
        jmp     L_0054D975

L_0054D902:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D975
        mov     dword ptr [esi + 0x2D8], ebp
        jmp     L_0054D975

L_0054D917:
        mov     eax, dword ptr [esi + 0x384]
        lea     edi, [eax + 0x2F8]
        cmp     byte ptr [edi], bl
        jnz     L_0054D975

        fld     dword ptr [esi + 0x2D8]
        fsub    dword ptr [esp + 0x1C]
        fstp    dword ptr [esi + 0x2D8]

        fld     dword ptr [esi + 0x2E0]
        fsub    dword ptr [esp + 0x20]

        fcom    dword ptr [DAT_0076d598]
        fst     dword ptr [esi + 0x2E0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D962

        fstp    st(0)
        mov     dword ptr [esi + 0x2E0], 0xBF800000
        jmp     L_0054D975

L_0054D962:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D975
        mov     dword ptr [esi + 0x2E0], ebp

L_0054D975:
        mov     cl, byte ptr [edi]
        cmp     cl, bl
        pop     edi
        jnz     L_0054D9BA

        fld     dword ptr [esi + 0x2DC]
        fsub    dword ptr [esp + 0x20]

        fcom    dword ptr [DAT_0076d598]
        fst     dword ptr [esi + 0x2DC]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D9A7

        fstp    st(0)
        mov     dword ptr [esi + 0x2DC], 0xBF800000
        jmp     L_0054D9BA

L_0054D9A7:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D9BA
        mov     dword ptr [esi + 0x2DC], ebp

L_0054D9BA:
        mov     eax, dword ptr [esi + 0x494]
        cmp     eax, ebx
        jz      L_0054DA1D
        cmp     cl, bl
        jnz     L_0054DA1D
        cmp     eax, ebx

        fld     dword ptr [esi + 0x2D4]

        jle     L_0054D9FA

        fadd    dword ptr [DAT_007704c0]
        fst     dword ptr [esi + 0x2D4]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054DA1D
        mov     dword ptr [esi + 0x2D4], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x8

L_0054D9FA:
        fsub    dword ptr [DAT_007704c0]
        fst     dword ptr [esi + 0x2D4]
        fcomp   dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 1
        jz      L_0054DA1D
        mov     dword ptr [esi + 0x2D4], 0xBF800000

L_0054DA1D:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x8
    }
}
