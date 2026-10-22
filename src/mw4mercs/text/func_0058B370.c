/*
 * FUN_0058B370 (190 B true extent; 230 B slice incl. next fn) — in-.text
 * data block function (block 0x58B122). FPU-heavy interpolation using
 * FUN_00507f90 and float constants 0x76c5b0 / 0x77de94.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507f90(void);

extern float g_0076c5b0;   /* float @ 0x76c5b0 */
extern float g_0077de94;   /* float @ 0x77de94 */

__declspec(naked) void FUN_0058B370(void)
{
    __asm {
        sub     esp, 0x4c
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x838]
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00507f90
        mov     ecx, dword ptr [eax + 0x1c]
        lea     edx, [esp + 0x20]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x83c]
        push    edx
        call    FUN_00507f90
        fld     dword ptr [eax + 0x1c]
        fsub    dword ptr [esi + 0x888]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esi + 0x888]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [g_0076c5b0]
        fld     dword ptr [esi + 0x88c]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne     L3DB
        fstp    st(0)
        fld     dword ptr [esi + 0x88c]
        fsub    dword ptr [esp + 0xc]
L3DB:
        fld     dword ptr [esi + 0x890]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne     L409
        fld     dword ptr [esi + 0x890]
        fsub    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 4]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L409
        fstp    st(0)
        fld     dword ptr [esp + 4]
L409:
        mov     al, byte ptr [esi + 0x884]
        fld     st(0)
        test    al, al
        fmul    dword ptr [g_0077de94]
        fstp    dword ptr [esi + 0x888]
        pop     esi
        je      L42A
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
L42A:
        add     esp, 0x4c
        ret
    }
}
