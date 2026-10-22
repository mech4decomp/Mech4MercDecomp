/*
 * FUN_006a5420 (437 B) — ABL transform/color distance check. Computes squared
 * distance between two object transforms; if within param_3^2 returns the
 * "hit" float global, else the "miss" float global. Calls virtual methods
 * (vtable+0x38/+0x34/+0x60/+0xf8) and FUN_00415230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f25c0;
extern float g_0076d064;
extern float g_0076c5b0;
extern void __cdecl FUN_00415230(void);

__declspec(naked) float FUN_006a5420(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x30
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x18]
        xor     edx, 0x85739531
        push    ebx
        push    esi
        push    edi
        jz      loc_6A55C8
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x38]
        test    eax, eax
        jz      loc_6A55C8
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x18]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x178]
        test    eax, eax
        jz      loc_6A55C8
        mov     esi, dword ptr [eax + 0x384]
        test    esi, esi
        jz      loc_6A55C8
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x34]
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     ebx, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        cmp     eax, ebx
        jz      loc_6A55C8
        mov     eax, dword ptr [g_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_6A55C8
        fld     dword ptr [esp + 0x48]
        mov     edx, dword ptr [edi]
        fmul    dword ptr [esp + 0x48]
        mov     ecx, edi
        fstp    dword ptr [esp + 0x48]
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     eax, dword ptr [esi + 0xd8]
        fsubr   dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x10], ecx
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x48]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jz      loc_6A5553
        fld     dword ptr [g_0076d064]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret
loc_6A5553:
        mov     ebx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esi]
        push    1
        push    ebx
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xf8]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x38]
        mov     edx, dword ptr [eax]
        push    1
        push    ebx
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x48]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jz      loc_6A55C8
        fld     dword ptr [g_0076d064]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret
loc_6A55C8:
        fld     dword ptr [g_0076c5b0]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret
    }
}
