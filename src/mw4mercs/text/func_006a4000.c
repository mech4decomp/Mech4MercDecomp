/*
 * FUN_006a4000 (83 B) — __thiscall. Calls a virtual method (vtable+0x28),
 * then if FUN_006a22f0(param) is nonzero and FUN_006a29d0(param) <= 0.0f,
 * calls FUN_00665090(param, 50.0f, 100.0f). Returns constant 0x0076d064.
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_006a22f0(void *a);
extern float __cdecl FUN_006a29d0(void *a);
extern void __cdecl FUN_00665090(void *a, float b, float c);
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) float FUN_006a4000(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x28]
        lea     ecx, [edi + 0x28]
        push    esi
        call    dword ptr [eax]
        fstp    st(0)
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L_48
        push    esi
        mov     ecx, edi
        call    FUN_006a29d0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_48
        push    0x42c80000
        push    0x42480000
        push    esi
        call    FUN_00665090
        add     esp, 0xc
    L_48:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
