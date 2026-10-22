/*
 * FUN_005b4720 (576 B) — __thiscall method, RET 4 (1 stack param).
 *
 * Calls a virtual method on the sub-object at this+0x78, then does a series
 * of float comparisons/clamps on this+0x43c / this+0x440, with several
 * virtual calls through *this+0x114. Ends by scaling and storing results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b4720(void);

__declspec(naked) void __stdcall FUN_005b4720(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0077d0fc;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     edi, eax
        mov     al, byte ptr [esi + 0x2f8]
        xor     ebx, ebx
        cmp     al, bl
        jz      L4748
        mov     dword ptr [esi + 0x42c], ebx
        mov     dword ptr [esi + 0x448], ebx
L4748:
        fld     dword ptr [esi + 0x42c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L476d
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esi + 0x42c]
        jmp     L477b
L476d:
        fld     dword ptr [edi + 0x2c4]
        fmul    dword ptr [esi + 0x42c]
        fchs
L477b:
        fstp    dword ptr [esi + 0x43c]
        fld     dword ptr [esi + 0x43c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L47b9
        fld     dword ptr [esi + 0x440]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L47b9
        pop     edi
        mov     dword ptr [esi + 0x448], ebx
        mov     dword ptr [esi + 0x444], ebx
        pop     esi
        pop     ebx
        ret     0x4
L47b9:
        fld     dword ptr [esi + 0x440]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x43c]
        fnstsw  ax
        fcomp   dword ptr [esi + 0x440]
        test    ah, 0x1
        fnstsw  ax
        jnz     L485e
        test    ah, 0x41
        jnz     L480f
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x2d4]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L48e2
        jmp     L48d6
L480f:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 0x1
        jz      L48e2
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 0x2d8]
        fsubr   dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw  ax
        test    ah, 0x1
        jz      L48e2
        mov     ecx, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], ecx
        jmp     L48e2
L485e:
        test    ah, 0x1
        jz      L489a
        fld     dword ptr [edi + 0x2dc]
        fmul    dword ptr [edi + 0x2d4]
        fmul    dword ptr [esp + 0x10]
        fsubr   dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw  ax
        test    ah, 0x1
        jz      L48e2
        mov     edx, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], edx
        jmp     L48e2
L489a:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 0x41
        jnz     L48e2
        fld     dword ptr [edi + 0x2e0]
        fmul    dword ptr [edi + 0x2d8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L48e2
L48d6:
        mov     eax, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], eax
L48e2:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [edi + 0x2c4]
        fnstsw  ax
        test    ah, 0x1
        jz      L4903
        mov     ecx, dword ptr [edi + 0x2c4]
        mov     dword ptr [esi + 0x440], ecx
        jmp     L492a
L4903:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fcomp   dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 0x1
        jz      L492a
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        fstp    dword ptr [esi + 0x440]
L492a:
        fld     dword ptr [esi + 0x440]
        mov     ecx, dword ptr [esi + 0x440]
        fmul dword ptr [DAT_0077d0fc]
        pop     edi
        mov     dword ptr [esi + 0x170], ecx
        fstp    dword ptr [esi + 0x444]
        fld     dword ptr [esi + 0x43c]
        fmul dword ptr [DAT_0077d0fc]
        fstp    dword ptr [esi + 0x448]
        pop     esi
        pop     ebx
        ret     0x4
    }


}
