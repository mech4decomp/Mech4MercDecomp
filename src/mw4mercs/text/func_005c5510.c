/*
 * FUN_005c5510 (319 B) — __thiscall, RET 4. Computes a distance/dot-product
 * and updates a field at [this+0x170]+0x434 based on a tangent.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);

__declspec(naked) void __stdcall FUN_005c5510(void *param)
{
    

extern int DAT_007f2104;
extern int DAT_0076d064;
extern int DAT_0076d598;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x58
        mov eax, dword ptr [DAT_007f2104]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_5647
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_00419460
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     ecx, [ebp - 0x58]
        call    FUN_00428730
        mov     edx, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x10], edx
        lea     edx, [ebp - 0x58]
        mov     dword ptr [ebp - 0x8], ecx
        push    edx
        lea     ecx, [ebp - 0x28]
        mov     dword ptr [ebp - 0xc], eax
        call    FUN_00419480
        fld     dword ptr [ebp - 0x28]
        mov     edi, dword ptr [ebp + 0x8]
        fsub    dword ptr [edi]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [edi + 0x4]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [edi + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x10]
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca40
        lea     edx, [ebp - 0x58]
        push    edx
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040c9e0
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [ebp - 0xc]
        fabs
        fdiv    dword ptr [ebp + 0x8]
        fptan
        fstp    st(0)
        fst     dword ptr [ebp + 0x8]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5606
        mov     dword ptr [ebp + 0x8], 0x3f800000
L_5606:
        mov     esi, dword ptr [esi + 0x170]
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x30c]
        fmul    dword ptr [ebp + 0x8]
        fst     dword ptr [esi + 0x434]
        fld     dword ptr [edi + 0x4]
        fcomp   dword ptr [ebp - 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5645
        fmul dword ptr [DAT_0076d598]
        pop     edi
        fstp    dword ptr [esi + 0x434]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
L_5645:
        fstp    st(0)
L_5647:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
