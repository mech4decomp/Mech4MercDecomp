/*
 * FUN_006ac030 (300 B) — __thiscall (ECX=this), RET 8 (2 stack args).
 *
 * For each of 5 sub-object pointers (this+0x50/0x4c/0x54/0x58/0x5c),
 * if this+0x60 equals the sentinel g_76c5b0, calls FUN_00699160;
 * otherwise computes (v.c - v.b) * this+0x60 and calls FUN_006992f0.
 * Skips the last 4 when param_2 != 0. Clears this+0x20 and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;               /* sentinel constant */
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(void);

__declspec(naked) void __stdcall FUN_006ac030(void *this, void *param_1, char param_2)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x50]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_50_else
        fstp    st(0)
        call    FUN_00699160
        jmp     L_50_done
L_50_else:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
L_50_done:
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jnz     L_exit
        fld     dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x4c]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_4c_else
        fstp    st(0)
        call    FUN_00699160
        jmp     L_4c_done
L_4c_else:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
L_4c_done:
        fld     dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x54]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_54_else
        fstp    st(0)
        call    FUN_00699160
        jmp     L_54_done
L_54_else:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
L_54_done:
        fld     dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x58]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_58_else
        fstp    st(0)
        call    FUN_00699160
        jmp     L_58_done
L_58_else:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
L_58_done:
        fld     dword ptr [esi + 0x60]
        mov     ecx, dword ptr [esi + 0x5c]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_5c_else
        fstp    st(0)
        call    FUN_00699160
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     0x8
L_5c_else:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
L_exit:
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret     0x8
    }
}
