/*
 * FUN_005EC250 (420 B) — __thiscall (ECX = this), RET 8 (2 params).
 * Beam weapon update: dispatches on the state at [this+0xe0]->[0x14]
 * (6 or 7), performing per-state FPU math on the current time delta
 * and updating flags/objects. Ends by calling FUN_004dad70(param_2,
 * param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0041fcb0(void);
extern void *__cdecl FUN_005ef720(void);
extern void *__cdecl FUN_005f07c0(void);
extern void *__cdecl FUN_00559be0(void);
extern void *__cdecl FUN_0041fd80(void);
extern void *__cdecl FUN_005bf9a0(void);
extern double __cdecl FUN_00707e70(int);
extern void *__cdecl FUN_004dad70(void);

extern float DAT_0076c5b0;
extern float DAT_00783768;
extern float DAT_0076d070;

__declspec(naked) void __fastcall FUN_005ec250(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     ecx, dword ptr [ecx + 0x14]
        sub     ecx, 6
        jz      l_case6
        dec     ecx
        jnz     l_common
    l_case7:
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xffffffbf
        lea     ecx, [esi + 0x220]
        mov     dword ptr [esi + 0x10], eax
        call    FUN_0041fcb0
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fsubr   dword ptr [esi + 0x1d0]
        fst     dword ptr [esp + 8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_c7_skipclamp
        mov     dword ptr [esp + 8], 0
    l_c7_skipclamp:
        mov     edx, dword ptr [esp + 8]
        push    edx
        mov     ecx, esi
        call    FUN_005ef720
        fld     dword ptr [esi + 0x1d0]
        fcomp   dword ptr [DAT_00783768]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_c7_after
        mov     al, byte ptr [esi + 0x180]
        test    al, al
        jnz     l_c7_after
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fld     dword ptr [esi + 0x1d0]
        fsub    dword ptr [DAT_0076d070]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      l_c7_after
        mov     ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        jz      l_c7_setflag
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      l_c7_setflag
        push    0x23
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
    l_c7_setflag:
        mov     byte ptr [esi + 0x180], 1
    l_c7_after:
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xec]
        fcomp   dword ptr [esi + 0x1d0]
        fnstsw  ax
        test    ah, 1
        jnz     l_common
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        lea     edi, [esi + 0x1a4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_common
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005bf9a0
        jmp     l_common
    l_case6:
        fld     qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x10]
        fsub    qword ptr [esi + 0xec]
        or      ecx, 0x40
        mov     dword ptr [esi + 0x10], ecx
        fcomp   dword ptr [eax + 0x74]
        fnstsw  ax
        test    ah, 1
        jnz     l_common
        lea     edi, [esi + 0x220]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_common
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    7
        call    dword ptr [edx + 4]
        push    0
        mov     byte ptr [esi + 0x180], 0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
    l_common:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dad70
        pop     edi
        pop     esi
        pop     ecx
        ret     8
    }
}
