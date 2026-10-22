/*
 * FUN_005DEF60 (257 B) — __fastcall (this in ECX). Reads a global object
 * pointer chain, computes several float thresholds via FUN_005def30 /
 * FUN_00415020, and sets this->0x20 to a state code (0..3) based on
 * comparisons, returning 0 or 1 in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_005def30(int, int);
extern double __cdecl FUN_00415020(void);

/* extern data symbols for absolute-memory loads */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) int __cdecl FUN_005def60(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, [eax]
        xor     ecx, edx
        mov     esi, [ecx + 0x20]
        xor     esi, 0x85739531
        mov     edx, [esi + 0x2270]
        push    0xff
        push    edx
        call    FUN_005def30
        fstp    dword ptr [esp + 0x10]
        add     esp, 0x8
        call    FUN_00415020
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L3C
        mov     eax, [esi + 0x2274]
        push    0x100
        push    eax
        call    FUN_005def30
        fstp    dword ptr [esp + 0x10]
        mov     ecx, [esi + 0x2278]
        push    0x101
        push    ecx
        call    FUN_005def30
        fstp    dword ptr [esp + 0x1c]
        add     esp, 0x10
        call    FUN_00415020
        fcom    dword ptr [esp + 0x8]
        mov     ecx, 0x1
        fnstsw  ax
        /* __emit: TEST CL,AH (84 E1) - MSVC6 swaps operands to TEST AH,CL (84 CC) */
        __emit 0x84
        __emit 0xE1
        jz      LFD
        mov     dword ptr [edi + 0x20], 0x0
        fstp    st(0)
        pop     edi
        mov     al, cl
        pop     esi
        add     esp, 0x8
        ret
LFD:
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x8]
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L1B
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     al, cl
        pop     esi
        add     esp, 0x8
        ret
L1B:
        mov     al, byte ptr [edi + 0x1c]
        test    al, al
        jz      L2D
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     al, cl
        pop     esi
        add     esp, 0x8
        ret
L2D:
        mov     dword ptr [edi + 0x20], 0x2
        pop     edi
        mov     al, cl
        pop     esi
        add     esp, 0x8
        ret
L3C:
        mov     al, byte ptr [edi + 0x1c]
        test    al, al
        jz      L52
        mov     dword ptr [edi + 0x20], 0x1
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x8
        ret
L52:
        mov     dword ptr [edi + 0x20], 0x3
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x8
        ret
    }
}
