/*
 * FUN_006a4d50 (69 B) - Float comparison returning a constant.
 *
 * __cdecl, 3 params. Calls two virtual methods on param_1 (vtable+0x2c
 * with 2 args, vtable+0x48 with none), does FPU math, compares, and
 * returns DAT_0076d064 or DAT_0076c5b0 as a float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076d064;
extern float DAT_0076c5b0;

__declspec(naked) double __cdecl FUN_006a4d50(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x2c]
        fmul    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        fstp    dword ptr [esp + 8]
        call    dword ptr [eax + 0x48]
        fld     dword ptr [esp + 8]
        pop     esi
        fmul    dword ptr [esp + 4]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L_8e
        fld     dword ptr [DAT_0076d064]
        ret
L_8e:
        fld     dword ptr [DAT_0076c5b0]
        ret
    }
}
