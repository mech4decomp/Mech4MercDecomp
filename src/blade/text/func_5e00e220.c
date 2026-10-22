/*
 * FUN_5e00e220 (290 B) — __thiscall (ECX = this), RET 0xC (3 stack args).
 * Transforms an array of 8-float source records into 13-float dest records
 * with FPU math and flag computation. Loops `count` times.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa4;   /* DAT_5e035aa4 */
extern float g_5e035aa0;   /* DAT_5e035aa0 */

__declspec(naked) void __fastcall FUN_5e00e220(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jle     L33F
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ebx, eax
    L239:
        fld     dword ptr [g_5e035aa4]
        fdiv    dword ptr [esi + 0xc]
        fld     dword ptr [esi]
        fsub    dword ptr [ecx + 0x45a0]
        fmul    st(0), st(1)
        fdiv    dword ptr [ecx + 0x4598]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ecx + 0x45a4]
        fmul    st(0), st(2)
        fdiv    dword ptr [ecx + 0x459c]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_5e035aa0]
        fld     st(1)
        fmul    dword ptr [esi + 0x8]
        fnstsw  ax
        test    ah, 1
        jz      L27E
        fchs
    L27E:
        fld     st(1)
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 1
        jz      L294
        mov     edi, 4
        jmp     L2A8
    L294:
        fld     st(1)
        fcomp   st(3)
        fnstsw  ax
        test    ah, 0x41
        jnz     L2A6
        mov     edi, 8
        jmp     L2A8
    L2A6:
        xor     edi, edi
    L2A8:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 1
        jz      L2BE
        or      edi, 0x10
        jmp     L2CE
    L2BE:
        fld     dword ptr [esp + 0x18]
        fcomp   st(3)
        fnstsw  ax
        test    ah, 0x41
        jnz     L2CE
        or      edi, 0x20
    L2CE:
        fcom    dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 1
        jz      L2E0
        or      edi, 1
        jmp     L2EC
    L2E0:
        fcom    st(2)
        fnstsw  ax
        test    ah, 0x41
        jnz     L2EC
        or      edi, 2
    L2EC:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edx + 0x20], edi
        mov     dword ptr [edx + 0x28], eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [edx + 0xc], eax
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [esi + 0x1c]
        fxch
        fstp    dword ptr [edx + 0x24]
        mov     dword ptr [edx + 0x1c], eax
        mov     eax, dword ptr [esi + 0x10]
        fstp    dword ptr [edx + 0x2c]
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [esi + 0x14]
        fstp    dword ptr [edx + 0x30]
        mov     dword ptr [edx + 0x14], eax
        add     esi, 0x20
        add     edx, 0x34
        dec     ebx
        jnz     L239
        pop     edi
        pop     esi
        pop     ebx
    L33F:
        ret     0xC
    }
}
