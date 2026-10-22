/*
 * FUN_005C75B0 (278 B) — __thiscall (ECX=this), RET 4 (one stack param).
 *
 * Finds the object in a list (param_1[0]..param_1[1]) closest to a
 * reference transform (this+0x170), returning a pointer to the best
 * element. Uses FUN_0040cb00 for the initial distance.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __fastcall FUN_0040cb00(void *this);

__declspec(naked) void *__fastcall FUN_005c75b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x24
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     edx, edi
        sub     edx, eax
        and     edx, 0xFFFFFFFC
        cmp     edx, 4
        jz      L76BF
        mov     ecx, dword ptr [ecx + 0x170]
        mov     ecx, dword ptr [ecx + 0xD8]
        mov     edx, dword ptr [ecx + 0x8C]
        add     ecx, 0x80
        mov     dword ptr [esp + 4], edx
        mov     edx, dword ptr [ecx + 0x1C]
        mov     ecx, dword ptr [ecx + 0x2C]
        push    esi
        mov     esi, eax
        mov     dword ptr [esp + 0xC], edx
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xD8]
        fld     dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0xAC]
        fsub    dword ptr [esp + 8]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [eax + 0x1C]
        fstp    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        fld     dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x1C], edx
        fsub    dword ptr [esp + 0xC]
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1C]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0040cb00
        lea     ecx, [esi + 4]
        cmp     ecx, edi
        fstp    dword ptr [esp + 0x30]
        jz      L76BC
    L7652:
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0xD8]
        fld     dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0x9C]
        fsub    dword ptr [esp + 8]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2C]
        mov     dword ptr [esp + 0x24], edx
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0xC]
        mov     dword ptr [esp + 0x28], eax
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x10]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 1
        jz      L76B3
        fstp    dword ptr [esp + 0x30]
        mov     esi, ecx
        jmp     L76B5
    L76B3:
        fstp    st(0)
    L76B5:
        add     ecx, 4
        cmp     ecx, edi
        jnz     L7652
    L76BC:
        mov     eax, esi
        pop     esi
    L76BF:
        pop     edi
        add     esp, 0x24
        ret     4
    }
}
