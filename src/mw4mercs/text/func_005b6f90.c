/*
 * FUN_005b6f90 (180 B) — __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * Switch on param_1 (index -1..3) via jump table at 0x5b7044; each case
 * subtracts param_2 from a slot (this+0xa4/a8/ac/b0) and optionally stores
 * it back depending on param_4. Default path checks param_3 against slot
 * +0xb0. Returns slot index, 0xffffffff, or 0xfffffffe.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b6f90(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     edx, [eax + 0x1]
        cmp     edx, 0x4
        mov     eax, dword ptr [esp + 0x8]
        ja      def
        jmp     dword ptr [edx*4 + 0x5b7044]
case_m1:
        or      eax, 0xffffffff
        ret     0x10
case0:
        mov     edx, dword ptr [ecx + 0xa4]
        sub     edx, eax
        js      def
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      c0_ret
        mov     dword ptr [ecx + 0xa4], edx
c0_ret:
        xor     eax, eax
        ret     0x10
case1:
        mov     edx, dword ptr [ecx + 0xa8]
        sub     edx, eax
        js      def
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      c1_ret
        mov     dword ptr [ecx + 0xa8], edx
c1_ret:
        mov     eax, 0x1
        ret     0x10
case2:
        mov     edx, dword ptr [ecx + 0xac]
        sub     edx, eax
        js      def
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      c2_ret
        mov     dword ptr [ecx + 0xac], edx
c2_ret:
        mov     eax, 0x2
        ret     0x10
case3:
        mov     edx, dword ptr [ecx + 0xb0]
        sub     edx, eax
        jns     lab7026
def:
        mov     dl, byte ptr [esp + 0xc]
        test    dl, dl
        jz      ret_fe
        mov     edx, dword ptr [ecx + 0xb0]
        sub     edx, eax
        js      ret_fe
lab7026:
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      c3_ret
        mov     dword ptr [ecx + 0xb0], edx
c3_ret:
        mov     eax, 0x3
        ret     0x10
ret_fe:
        mov     eax, 0xfffffffe
        ret     0x10
    }
}
