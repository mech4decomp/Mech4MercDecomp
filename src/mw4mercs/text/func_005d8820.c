/*
 * FUN_005d8820 (451 B) — Rail graph query: find the closest node to a
 * point within a radius, with an optional "must be within radius" node
 * check. Uses FPU distance comparisons.
 *
 * __thiscall (ECX = this), three stack params, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern float DAT_00784aec;

__declspec(naked) int __fastcall FUN_005d8820(void *this)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [esp + 0x28]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        mov     esi, dword ptr [ebx + 0x20]
        sub     esi, dword ptr [ebx + 0x1c]
        sar     esi, 0x2
        mov     dword ptr [esp + 0x20], 0x0
        jnz     L8856
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x24
        ret     0xc
L8856:
        cmp     esi, 0x1
        jnz     L886A
        mov     ecx, dword ptr [ebx + 0x1c]
        mov     eax, dword ptr [ecx]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
L886A:
        mov     edi, dword ptr [esp + 0x40]
        xor     ebp, ebp
        test    edi, edi
        mov     dword ptr [esp + 0x38], 0x7f7fffff
        jz      L88D1
        lea     edx, [edi + 0x8]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebp
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edi + 0x48]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     L88D1
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
L88D1:
        test    esi, esi
        jle     L895D
        mov     ecx, dword ptr [ebx + 0x1c]
        mov     edx, esi
L88DE:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L8953
        fld     dword ptr [eax + 0x8]
        add     eax, 0x8
        fld     dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x14], 0x0
        fst     dword ptr [esp + 0x30]
        fld     st(1)
        fstp    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [ecx]
        fsubr   dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [eax + 0x48]
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L8951
        fcom    dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jnz     L8949
        fld     dword ptr [esp + 0x38]
        fcomp   dword ptr [DAT_00784aec]
        fnstsw  ax
        test    ah, 0x40
        jz      L8951
L8949:
        mov     ebp, dword ptr [ecx]
        fstp    dword ptr [esp + 0x38]
        jmp     L8953
L8951:
        fstp    st(0)
L8953:
        add     ecx, 0x4
        dec     edx
        jnz     L88DE
        test    ebp, ebp
        jnz     L89D7
L895D:
        mov     al, byte ptr [esp + 0x3c]
        test    al, al
        jnz     L89D7
        test    esi, esi
        jle     L89D7
        mov     ecx, dword ptr [ebx + 0x1c]
L896C:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L89D1
        fld     dword ptr [eax + 0x8]
        add     eax, 0x8
        fld     dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x14], 0x0
        fst     dword ptr [esp + 0x30]
        fld     st(1)
        fstp    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x18]
        fsubr   dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fcom    dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jnz     L89C7
        fld     dword ptr [esp + 0x38]
        fcomp   dword ptr [DAT_00784aec]
        fnstsw  ax
        test    ah, 0x40
        jz      L89CF
L89C7:
        mov     ebp, dword ptr [ecx]
        fstp    dword ptr [esp + 0x38]
        jmp     L89D1
L89CF:
        fstp    st(0)
L89D1:
        add     ecx, 0x4
        dec     esi
        jnz     L896C
L89D7:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
    }
}
