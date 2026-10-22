/*
 * FUN_0068c1f0 (77 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Computes (param+0x16C - param+0x168)/0xC, stores param+0x30 into
 * this+0x28, then loops calling a virtual method (vtable+0xC) for each
 * of the count elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0068c1f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     eax, dword ptr [edi + 0x30]
        mov     edx, dword ptr [edi + 0x168]
        mov     ecx, dword ptr [edi + 0x16C]
        sub     ecx, edx
        mov     dword ptr [esi + 0x28], eax
        mov     eax, 0x2AAAAAAB
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1F
        add     edx, ecx
        test    edx, edx
        jle     L_done
        mov     edi, dword ptr [edi + 0x168]
        push    ebx
        mov     ebx, edx
L_loop:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0xC]
        add     edi, 0xC
        dec     ebx
        jnz     L_loop
        pop     ebx
L_done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
