/*
 * FUN_005EB4A0 (288 B) — __thiscall (ECX = this).
 *
 * State-machine update on this+0x1e8/0x1e4/0x1ec, then a float
 * accumulator update driven by this+0x1e0 (4/other), calling the
 * sub-object vtable method at +4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005eb4a0(void *param)
{
    

extern int DAT_00789868;
extern int DAT_007899f0;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x1e0]
        mov     edx, 0x3
        cmp     ecx, edx
        jz      L_ret
        mov     eax, dword ptr [esi + 0x1e8]
        cmp     eax, 0x2
        jz      L1
        cmp     eax, 0x1
        jnz     L2
L1:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e8], edx
        fsub    dword ptr [esi + 0x1fc]
        fstp    dword ptr [esi + 0x1fc]
L2:
        mov     eax, dword ptr [esi + 0x1e4]
        cmp     eax, 0x2
        jz      L3
        cmp     eax, 0x1
        jnz     L4
L3:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e4], edx
        fsub    dword ptr [esi + 0x1f8]
        fstp    dword ptr [esi + 0x1f8]
L4:
        mov     eax, dword ptr [esi + 0x1ec]
        cmp     eax, 0x2
        jz      L5
        cmp     eax, 0x1
        jnz     L6
L5:
        fld     dword ptr [esi + 0x1f4]
        mov     dword ptr [esi + 0x1ec], edx
        fsub    dword ptr [esi + 0x200]
        fstp    dword ptr [esi + 0x200]
L6:
        cmp     ecx, 0x4
        fld dword ptr [DAT_00789868]
        fmul dword ptr [DAT_007899f0]
        fstp    dword ptr [esi + 0x1bc]
        jz      L7
        mov     dword ptr [esi + 0x1b8], 0x0
L7:
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [esi + 0x20c]
        fadd    dword ptr [esi + 0x19c]
        mov     ecx, eax
        fsubr   dword ptr [esi + 0x1b8]
        fst     dword ptr [esi + 0x1c0]
        fcomp   dword ptr [ecx + 0x640]
        fnstsw ax
        test    ah, 0x41
        jnz     L8
        mov     edx, dword ptr [ecx + 0x640]
        mov     dword ptr [esi + 0x1c0], edx
L8:
        fld     dword ptr [ecx + 0x640]
        fchs
        fcom    dword ptr [esi + 0x1c0]
        fnstsw ax
        test    ah, 0x41
        jnz     L9
        fstp    dword ptr [esi + 0x1c0]
        mov     dword ptr [esi + 0x1e0], 0x4
        pop     esi
        ret
L9:
        fstp    st(0)
        mov     dword ptr [esi + 0x1e0], 0x4
L_ret:
        pop     esi
        ret
    }


}
