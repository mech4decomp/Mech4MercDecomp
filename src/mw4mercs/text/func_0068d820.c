/*
 * FUN_0068D820 (114 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Searches an array at this+0x14 (count = (this+0x18 - this+0x14)>>2)
 * for a value equal to param_2. On match, copies a 3-float entry from
 * this+0x20 into param_1; otherwise fills param_1 with -1.0f (0xBF800000).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0068d820(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x14]
        mov     eax, dword ptr [ecx + 0x18]
        sub     esp, 0xC
        sub     eax, edx
        sar     eax, 2
        push    esi
        xor     edx, edx
        test    eax, eax
        push    edi
        jle     L_notfound
        mov     esi, dword ptr [ecx + 0x14]
        mov     edi, dword ptr [esp + 0x1C]
L_loop:
        cmp     dword ptr [esi], edi
        jz      L_found
        inc     edx
        add     esi, 4
        cmp     edx, eax
        jl      L_loop
L_notfound:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     ecx, 0xBF800000
        pop     esi
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        add     esp, 0xC
        ret     8
L_found:
        mov     ecx, dword ptr [ecx + 0x20]
        lea     eax, [edx + edx*2]
        fld     dword ptr [ecx + eax*4]
        mov     edx, dword ptr [ecx + eax*4 + 8]
        fld     dword ptr [ecx + eax*4 + 4]
        lea     eax, [ecx + eax*4]
        mov     eax, dword ptr [esp + 0x18]
        fxch    st(1)
        pop     edi
        fstp    dword ptr [eax]
        mov     ecx, edx
        pop     esi
        fstp    dword ptr [eax + 4]
        mov     dword ptr [esp + 8], edx
        mov     dword ptr [eax + 8], ecx
        add     esp, 0xC
        ret     8
    }
}
