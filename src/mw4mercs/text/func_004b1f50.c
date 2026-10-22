/*
 * FUN_004b1f50 (255 B) -- __thiscall (RET 0x8). MLR light/object culling
 * helper: iterates up to 8 candidate objects, tests distance against a
 * squared-radius, and collects matches into an output array. Uses globals
 * DAT_007daa0c, DAT_007b220c, DAT_007da6a4, DAT_007b37f8; calls FUN_00415230.
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_00415230(void);

extern int   DAT_007daa0c;
extern float DAT_007b220c;
extern int   DAT_007da6a4;
extern int   DAT_007b37f8;

__declspec(naked) void FUN_004b1f50(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [DAT_007daa0c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x8], ecx
        jz      L_1f6c
        xor     eax, eax
        pop     ebx
        add     esp, 0x20
        ret     0x8
L_1f6c:
        mov     eax, dword ptr [ecx + 0xfc]
        mov     edx, dword ptr [ecx + 0x10c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        push    esi
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0x11c]
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], ebx
L_1f99:
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      L_2043
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [DAT_007b220c]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_202e
        mov     eax, dword ptr [DAT_007da6a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_2020
        fld     dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x34]
        fsubr   dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi + 0x44]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x28], ecx
        fsub    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], edx
        fsub    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x84]
        fadd    dword ptr [eax + 0x12c]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fcompp
        fstp    st(0)
        fstp    st(0)
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        fstp    st(0)
        jnz     L_2026
L_2020:
        mov     dword ptr [edi], esi
        inc     ebx
        add     edi, 0x4
L_2026:
        cmp     ebx, dword ptr [DAT_007b37f8]
        jge     L_2043
L_202e:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 0x4
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x10], eax
        jl      L_1f99
L_2043:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}
