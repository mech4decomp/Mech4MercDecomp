/*
 * FUN_5e003a80 (568 B) — DirectDraw wrapper: queries a surface via a virtual
 * call, compares a set of fields against stored state, and either updates
 * internal geometry state or clears it.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern float g_5e035aa4;
extern void __cdecl FUN_5e0121d0(void);

__declspec(naked) void FUN_5e003a80(void)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4]
        push    ebp
        lea     eax, [ebx + 0x4]
        push    esi
        lea     edx, [esp + 0x14]
        push    edi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x3c]
        mov     esi, dword ptr [esp + 0x28]
        mov     ecx, 0xb
        xor     eax, eax
        lea     edi, [esp + 0x30]
        mov     edx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x24]
        rep stosd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x54], esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x58], esi
        mov     esi, dword ptr [ebx + 0x4550]
        cmp     eax, esi
        mov     dword ptr [esp + 0x30], 0x2c
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], ebp
        mov     dword ptr [esp + 0x44], 0x0
        mov     dword ptr [esp + 0x48], 0x0
        mov     dword ptr [esp + 0x4c], 0x40000000
        mov     dword ptr [esp + 0x50], 0x40000000
        jnz     L_b82
        cmp     ecx, dword ptr [ebx + 0x4554]
        jnz     L_b82
        cmp     edx, dword ptr [ebx + 0x4558]
        jnz     L_b82
        cmp     ebp, dword ptr [ebx + 0x455c]
        jnz     L_b82
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ebx + 0x4560]
        fnstsw ax
        test ah, 0x40
        jz      L_b82
        fld     dword ptr [g_5e035aa0]
        fcomp   dword ptr [ebx + 0x4564]
        fnstsw ax
        test ah, 0x40
        jz      L_b82
        mov     ecx, dword ptr [ebx + 0x4568]
        mov     eax, 0x40000000
        cmp     ecx, eax
        jnz     L_b82
        cmp     dword ptr [ebx + 0x456c], eax
        jnz     L_b82
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [ebx + 0x4570]
        fnstsw ax
        test ah, 0x40
        jz      L_b82
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [ebx + 0x4574]
        fnstsw ax
        test ah, 0x40
        jnz     L_cb0
L_b82:
        or      byte ptr [ebx + 0x45a8], 0x8
        lea     edi, [ebx + 0x454c]
        mov     ecx, 0xb
        lea     esi, [esp + 0x30]
        rep movsd
        xor     esi, esi
        cmp     edx, esi
        jz      L_ca4
        cmp     ebp, esi
        jz      L_ca4
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x28]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test ah, 0x40
        jnz     L_ca4
        lea     edi, [ebx + 0x444c]
        push    edi
        call    FUN_5e0121d0
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [esp + 0x54]
        mov     eax, 0x3f000000
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [edi], eax
        mov     dword ptr [ebx + 0x4460], eax
        fdivr   dword ptr [g_5e035aa4]
        mov     dword ptr [ebx + 0x447c], eax
        mov     dword ptr [ebx + 0x4480], eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [ebx + 0x4450], esi
        mov     dword ptr [ebx + 0x4454], esi
        mov     dword ptr [ebx + 0x4458], esi
        mov     dword ptr [ebx + 0x445c], esi
        mov     dword ptr [ebx + 0x4464], esi
        mov     dword ptr [ebx + 0x4468], esi
        mov     dword ptr [ebx + 0x446c], esi
        mov     dword ptr [ebx + 0x4470], esi
        mov     dword ptr [ebx + 0x4478], esi
        mov     dword ptr [ebx + 0x4484], esi
        pop     edi
        mov     dword ptr [ebx + 0x4488], 0x3f800000
        fstp    dword ptr [ebx + 0x4474]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], ebp
        mov     dword ptr [esp + 0x10], esi
        add     ebp, edx
        fstp    dword ptr [ebx + 0x4598]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], esi
        fchs
        fstp    dword ptr [ebx + 0x459c]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], ebp
        mov     dword ptr [esp + 0x10], esi
        pop     esi
        pop     ebp
        fstp    dword ptr [ebx + 0x45a0]
        fild    qword ptr [esp + 0x4]
        fstp    dword ptr [ebx + 0x45a4]
        pop     ebx
        add     esp, 0x4c
        ret
L_ca4:
        add     ebx, 0x444c
        push    ebx
        call    FUN_5e0121d0
L_cb0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
