/*
 * FUN_00644E40 (188 B) — __thiscall (ECX=this, RET 0x10) that computes
 * a clamped rectangle from 4 float params scaled by two global factors.
 *
 * Stores scaled values into this+0x54..0x60, clamps min/max, then fills
 * this+0x14..0x28 with the box extents.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_dff8;   /* 0x0077dff8 */
extern float g_dff4;   /* 0x0077dff4 */

__declspec(naked) void FUN_00644e40(void)
{
    __asm {
        sub     esp, 0xc
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [g_dff8]
        fst     dword ptr [ecx + 0x54]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_dff8]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        fmul    dword ptr [g_dff4]
        mov     dword ptr [ecx + 0x58], eax
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 0x5c]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [g_dff4]
        fst     dword ptr [esp + 0x14]
        fstp    dword ptr [ecx + 0x60]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_9e
        mov     edx, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x58]
        mov     dword ptr [ecx + 0x54], edx
        jmp     l_a0
    l_9e:
        fstp    st(0)
    l_a0:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_bd
        fld     dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        fstp    dword ptr [ecx + 0x60]
        mov     dword ptr [ecx + 0x5c], eax
    l_bd:
        fld     dword ptr [ecx + 0x54]
        mov     eax, 0x3f666666
        fld     dword ptr [ecx + 0x5c]
        mov     dword ptr [ecx + 0x1c], eax
        fstp    dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x4]
        fstp    dword ptr [ecx + 0x14]
        mov     dword ptr [ecx + 0x18], edx
        fld     dword ptr [ecx + 0x58]
        mov     dword ptr [ecx + 0x28], eax
        fsub    dword ptr [ecx + 0x54]
        fld     dword ptr [ecx + 0x60]
        fsub    dword ptr [ecx + 0x5c]
        fstp    dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x4]
        fstp    dword ptr [ecx + 0x20]
        mov     dword ptr [ecx + 0x24], edx
        add     esp, 0xc
        ret     0x10
    }
}
