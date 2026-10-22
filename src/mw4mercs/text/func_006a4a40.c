/*
 * FUN_006a4a40 (157 B) — __cdecl, returns float in ST0.
 *
 * Calls virtual methods on param_1; if the first returns 1, computes
 * a squared-distance and compares against param_1*param_1, returning
 * DAT_0076d064 if within range, else DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076d064;
extern float DAT_0076c5b0;

__declspec(naked) float __cdecl FUN_006a4a40(void *param)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [eax + 0x54]
        cmp     al, 0x1
        jnz     l_ret2
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x4], ecx
        mov     dword ptr [esp + 0x8], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0xc], eax
        call    dword ptr [edx + 0x58]
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0x4]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [esp + 0x8]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [esp + 0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jz      l_ret2
        fld     dword ptr [DAT_0076d064]
        pop     esi
        add     esp, 0xc
        ret
    l_ret2:
        fld     dword ptr [DAT_0076c5b0]
        pop     esi
        add     esp, 0xc
        ret
    }
}
