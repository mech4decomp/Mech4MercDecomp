/*
 * FUN_0060E5A0 (92 B) — Animation/transform helper.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Writes 0.0 to param1->+4, then if this->+4 is nonzero computes a
 * scaled float and calls a virtual method; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0077d0fc;

__declspec(naked) int __fastcall FUN_0060e5a0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 4]
        test    ecx, ecx
        push    edi
        mov     edi, dword ptr [esp + 8]
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax], 0
        jz      l_f3
        push    esi
        mov     esi, dword ptr [ecx + 0x504]
        fld     dword ptr [esi + 0x18c]
        lea     ecx, [esi + 0x78]
        fmul    dword ptr [g_0077d0fc]
        fstp    dword ptr [eax]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 0x184]
        mov     edx, dword ptr [edi + 8]
        inc     ecx
        mov     dword ptr [esp + 0xc], ecx
        fild    dword ptr [esp + 0xc]
        pop     esi
        pop     edi
        fmul    dword ptr [eax + 0x38]
        mov     eax, 1
        fstp    dword ptr [edx]
        ret     8
    l_f3:
        mov     eax, 1
        pop     edi
        ret     8
    }
}
