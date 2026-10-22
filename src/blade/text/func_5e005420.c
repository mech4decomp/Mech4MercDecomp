/*
 * FUN_5e005420 (360 B) — DirectDraw wrapper dispatcher.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params: param_1, param_2, param_3).
 * Computes flag bits from float comparisons, then dispatches to
 * FUN_5e0045b0/47a0/4990/4b90/4d80/4f80/5050/2340 based on param_3 bits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern void __cdecl FUN_5e0045b0(void);
extern void __cdecl FUN_5e0047a0(void);
extern void __cdecl FUN_5e004990(void);
extern void __cdecl FUN_5e004b90(void);
extern void __cdecl FUN_5e004d80(void);
extern void __cdecl FUN_5e004f80(void);
extern void __cdecl FUN_5e005050(void);
extern void __cdecl FUN_5e002340(void);

__declspec(naked) void __stdcall FUN_5e005420(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        test    bl, 0x1
        mov     edi, ecx
        jz      L_54d9
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        call    FUN_5e0045b0
        test    eax, eax
        jz      L_5582
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x14]
        xor     ecx, ecx
        fld     dword ptr [edx + 0x24]
        fcomp   dword ptr [edx + 0x30]
        fnstsw ax
        test ah, 0x41
        jz      L_546d
        fld     dword ptr [esi + 0x24]
        fcomp   dword ptr [esi + 0x30]
        fnstsw ax
        test ah, 0x41
        jnz     L_5472
    L_546d:
        mov     ecx, 0x8
    L_5472:
        fld     dword ptr [edx + 0x24]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jnz     L_5492
        fld     dword ptr [esi + 0x24]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_5495
    L_5492:
        or      ecx, 0x4
    L_5495:
        fld     dword ptr [edx + 0x28]
        fcomp   dword ptr [edx + 0x30]
        fnstsw ax
        test ah, 0x41
        jz      L_54af
        fld     dword ptr [esi + 0x28]
        fcomp   dword ptr [esi + 0x30]
        fnstsw ax
        test ah, 0x41
        jnz     L_54b2
    L_54af:
        or      ecx, 0x20
    L_54b2:
        fld     dword ptr [edx + 0x28]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jnz     L_54d2
        fld     dword ptr [esi + 0x28]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_54d5
    L_54d2:
        or      ecx, 0x10
    L_54d5:
        or      ebx, ecx
        jmp     L_54e1
    L_54d9:
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
    L_54e1:
        test    bl, 0x2
        jz      L_54fd
        push    esi
        push    edx
        call    FUN_5e0047a0
        test    eax, eax
        jz      L_5582
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
    L_54fd:
        test    bl, 0x4
        jz      L_5515
        push    esi
        push    edx
        call    FUN_5e004990
        test    eax, eax
        jz      L_5582
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
    L_5515:
        test    bl, 0x8
        jz      L_552d
        push    esi
        push    edx
        call    FUN_5e004b90
        test    eax, eax
        jz      L_5582
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
    L_552d:
        test    bl, 0x10
        jz      L_5545
        push    esi
        push    edx
        call    FUN_5e004d80
        test    eax, eax
        jz      L_5582
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
    L_5545:
        test    bl, 0x20
        jz      L_5555
        push    esi
        push    edx
        call    FUN_5e004f80
        test    eax, eax
        jz      L_5582
    L_5555:
        lea     edx, [esp + 0x10]
        push    0x1
        push    edx
        mov     ecx, edi
        call    FUN_5e005050
        lea     eax, [esp + 0x14]
        push    0x1
        push    eax
        mov     ecx, edi
        call    FUN_5e005050
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_5e002340
    L_5582:
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
