/*
 * FUN_004b6ca0 (217 B) — MLR element coordinate->index mapping
 * (__thiscall, 2 args). Normalizes arg1/arg2 by subtracting this+0x15c/
 * 0x160 and dividing by this+0x154/0x158, then validates the result
 * against bounds (0x76c5b0, this+0x150/0x151) and computes a packed
 * index (row*width+col) from the clamped floats. Falls back to
 * this+0x148 on out-of-range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;

__declspec(naked) void FUN_004b6ca0(void)
{
    __asm {
        push    ecx
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [ecx + 0x160]
        fdiv    dword ptr [ecx + 0x158]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [ecx + 0x15c]
        fdiv    dword ptr [ecx + 0x154]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6D6E
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x151]
        mov     eax, edx
        and     eax, 0xff
        __emit 0x89   /* mov dword ptr [esp], eax — MSVC6 drops 00 disp (89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB   /* fild dword ptr [esp] — MSVC6 drops 00 disp (DB 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6D6E
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6D6E
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x150]
        __emit 0x89   /* mov dword ptr [esp], eax — MSVC6 drops 00 disp (89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB   /* fild dword ptr [esp] — MSVC6 drops 00 disp (DB 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6D6E
        fld     dword ptr [esp + 0x8]
        xor     ax, ax
        fsub    dword ptr [g_0076d070]
        mov     al, dl
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xc]
        movzx   cx, byte ptr [esp + 0x8]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0xc]
        imul    eax, ecx
        movzx   dx, byte ptr [esp + 0xc]
        add     eax, edx
        pop     ecx
        ret     0x8
    L_6D6E:
        mov     ax, word ptr [ecx + 0x148]
        pop     ecx
        ret     0x8
    }
}
