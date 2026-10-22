/*
 * FUN_005b9760 (158 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_005fffa0(void);
extern void __stdcall FUN_00559be0(void);
extern void __stdcall FUN_004db180(void);

__declspec(naked) void __stdcall FUN_005b9760(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    edi
        mov     edi, ecx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      L_97fc
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        xor     esi, edx
        call    FUN_005f07c0
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     ecx, dword ptr [esi + 0x20]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005fffa0
        test    eax, eax
        pop     esi
        jnz     L_97be
        push    0x22
        mov     ecx, edi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
        pop     edi
        ret
L_97be:
        push    0x1
        push    eax
        mov     ecx, edi
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_004db180
        fld     dword ptr [edi + 0x188]
        fld     st(0)
        fmul    st, st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_97fc
        push    0x14
        mov     ecx, edi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
L_97fc:
        pop     edi
        ret
    }


}
