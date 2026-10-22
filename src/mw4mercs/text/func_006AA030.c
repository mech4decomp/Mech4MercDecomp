/*
 * FUN_006AA030 (627 B) — __thiscall method (this in ecx, ret 8). Animation
 * interpolation routine. Compares [esp+4] against DAT_0076d598 and [esp+8]
 * against DAT_0076c5b0; for each of 5 sub-objects ([esi+0x5c/0x58/0x60/0x64/
 * 0x68]) either calls FUN_00699160 or interpolates via FUN_006992f0, then
 * calls the virtual [esi]->[+0x14] and stores a scaled value at [esi+0x20].
 *
 * __thiscall (this in ecx), ret 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d598;  /* 0x0076d598 */
extern float g_76c5b0;  /* 0x0076c5b0 */

extern void __cdecl FUN_00699160(void *p);
extern void __cdecl FUN_006992f0(void *p);

__declspec(naked) void FUN_006AA030(void)
{
    __asm {
        fld     dword ptr [esp + 4]
        push    esi
        fcomp   dword ptr [g_76d598]
        mov     esi, ecx
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jne     L_6aa17a
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x5c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa063
        call    FUN_00699160
        jmp     L_6aa07c
L_6aa063:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_6aa07c:
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jne     L_6aa168
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x58]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa0a3
        call    FUN_00699160
        jmp     L_6aa0bc
L_6aa0a3:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_6aa0bc:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x60]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa0d7
        call    FUN_00699160
        jmp     L_6aa0f0
L_6aa0d7:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_6aa0f0:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x64]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa10b
        call    FUN_00699160
        jmp     L_6aa124
L_6aa10b:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_6aa124:
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x68]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa14f
        call    FUN_00699160
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop     esi
        ret     8
L_6aa14f:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
L_6aa168:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop     esi
        ret     8
L_6aa17a:
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x5c]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa196
        __emit 0xDD
        __emit 0xD8
        call    FUN_00699160
        jmp     L_6aa1af
L_6aa196:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD
        __emit 0xD8
        call    FUN_006992f0
L_6aa1af:
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jne     L_6aa298
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x58]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa1d7
        __emit 0xDD
        __emit 0xD8
        call    FUN_00699160
        jmp     L_6aa1f0
L_6aa1d7:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD
        __emit 0xD8
        call    FUN_006992f0
L_6aa1f0:
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x60]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa20c
        __emit 0xDD
        __emit 0xD8
        call    FUN_00699160
        jmp     L_6aa225
L_6aa20c:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD
        __emit 0xD8
        call    FUN_006992f0
L_6aa225:
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x64]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa241
        __emit 0xDD
        __emit 0xD8
        call    FUN_00699160
        jmp     L_6aa25a
L_6aa241:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD
        __emit 0xD8
        call    FUN_006992f0
L_6aa25a:
        fld     dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x68]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6aa27f
        __emit 0xDD
        __emit 0xD8
        call    FUN_00699160
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     8
L_6aa27f:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD
        __emit 0xD8
        call    FUN_006992f0
L_6aa298:
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     8
    }
}
