/*
 * FUN_00685870 (120 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * Computes a 3-float result into param_1 from two int fields scaled by
 * globals at 0x00770168/0x0077016c, or fills with -1.0 if conditions fail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00770168;
extern float g_0077016c;

__declspec(naked) void __stdcall FUN_00685870(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x24]
        test    al, al
        jz      L_006858d4
        mov     al, byte ptr [ecx + 0x26]
        test    al, al
        jnz     L_006858d4
        mov     edx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, edx
        jz      L_006858d4
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x8]
        mov     esi, edx
        sub     esi, edi
        sar     esi, 0x3
        pop     edi
        cmp     esi, 0x1
        pop     esi
        jbe     L_006858d4
        add     eax, 0x8
        cmp     eax, edx
        jz      L_006858d4
        fild    dword ptr [eax]
        fmul    dword ptr [g_00770168]
        fadd    dword ptr [g_0077016c]
        fild    dword ptr [eax + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], 0x0
        fmul    dword ptr [g_00770168]
        fadd    dword ptr [g_0077016c]
        fxch    st(1)
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
L_006858d4:
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, 0xbf800000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
