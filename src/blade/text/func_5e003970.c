/*
 * FUN_5e003970 (257 B) — DirectDraw wrapper: checks a set of float fields
 * against a constant (0x5e035aa0) and sets/clears bit 0x20 in the word at
 * obj+0x45a8.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;

__declspec(naked) void FUN_5e003970(void)
{
    __asm {
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4410]
        or      byte ptr [ecx + 0x45a8], 0x4
        mov     dx, word ptr [ecx + 0x45a8]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4414]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4418]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x441c]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4424]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4428]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x442c]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4434]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x443c]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ecx + 0x4440]
        fnstsw ax
        test ah, 0x40
        jz      L_a63
        cmp     dword ptr [ecx + 0x4438], 0x3f800000
        jnz     L_a63
        or      edx, 0x20
        mov     word ptr [ecx + 0x45a8], dx
        ret
L_a63:
        and     edx, 0xffdf
        mov     word ptr [ecx + 0x45a8], dx
        ret
    }
}
