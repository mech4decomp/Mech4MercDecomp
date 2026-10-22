/*
 * FUN_00602480 (157 B) — Iterate a linked list of objects, test each
 * against a distance threshold, and invoke a virtual method on those
 * within range.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;   /* 0x007B220C — threshold constant */

__declspec(naked) void __stdcall FUN_00602480(void *param)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [ecx + 0x280]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0xc], edx
        mov     dword ptr [esp + 0x10], eax
    l_top:
        test    esi, esi
        jz      l_done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_done
        fld     dword ptr [ecx + 0x10]
        mov     byte ptr [ecx + 0x29], 0x1
        fsub    dword ptr [esp + 0x8]
        fld     dword ptr [ecx + 0x14]
        fsub    dword ptr [esp + 0xc]
        fld     dword ptr [ecx + 0x18]
        fsub    dword ptr [esp + 0x10]
        fld     dword ptr [ecx + 0x1c]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(5)
        fmul    st(0), st(6)
        faddp   st(1), st(0)
        fsubp   st(1), st(0)
        fld     dword ptr [DAT_007b220c]
        fchs
        fcompp
        fstp    st(0)
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jz      l_top
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x4]
        jmp     l_top
    l_done:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
