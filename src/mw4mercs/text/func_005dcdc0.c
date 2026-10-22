/*
 * FUN_005DCDC0 (237 B) — Interpolates a float field [this+0x1bc] toward
 * [this+0x1b8] over time, using random values from FUN_00637B40/00637A20
 * and a time delta from FUN_00707E70. Stores result back and updates
 * [this+0x1c0] with the current time.
 *
 * __thiscall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_00707E70(int v);
extern void *__stdcall FUN_00637B40(int v);
extern void __stdcall FUN_00637A20(void *this);
extern void __stdcall FUN_005DBE50(void *this);

__declspec(naked) void __stdcall FUN_005DCDC0(void)
{
    

extern int DAT_0077b640;
extern int DAT_0076d5ec;
__asm {
sub     esp, 0x10
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x1bc]
        fld     dword ptr [esi + 0x1b8]
        fcompp
        fnstsw ax
        test    ah, 0x40
        jnz     done
        push    0x0
        call    FUN_00707E70
        fsub    dword ptr [esi + 0x1c0]
        fcomp qword ptr [DAT_0077b640]
        fnstsw ax
        test    ah, 0x1
        jnz     done
        mov     eax, dword ptr [esi + 0x1bc]
        push    0x0
        mov     dword ptr [esp + 0xc], eax
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        fstp    dword ptr [esp + 4]
        push    0x1
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        fsub    dword ptr [esp + 4]
        mov     ecx, esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_005DBE50
        mov     dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        fmul dword ptr [DAT_0076d5ec]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 4]
        fld     dword ptr [esi + 0x1b8]
        fld     dword ptr [esi + 0x1bc]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jz      L78
        fadd    dword ptr [esp + 8]
        fld     dword ptr [esi + 0x1b8]
        fld     st(1)
        fcompp
        fnstsw ax
        test    ah, 0x41
        jnz     L95
        jmp     L8D
L78:
        fsubr   dword ptr [esp + 8]
        fld     dword ptr [esi + 0x1b8]
        fld     st(1)
        fcompp
        fnstsw ax
        test    ah, 0x1
        jz      L95
L8D:
        fstp    st(0)
        fld     dword ptr [esi + 0x1b8]
L95:
        push    0x0
        fstp    dword ptr [esi + 0x1bc]
        call    FUN_00707E70
        fstp    dword ptr [esi + 0x1c0]
done:
        pop     esi
        add     esp, 0x10
        ret
    }


}
