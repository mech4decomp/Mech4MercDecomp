/*
 * FUN_006E2A10 (81 B) — Memory copy with offset. If (param_4 + param_2 == 0),
 * copies from a default source. Otherwise copies param_2 bytes from
 * (*this + param_3) to *param_1.
 *
 * __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int * FUN_006e27b0(void);
extern void FUN_006e2890(int);

__declspec(naked) void __stdcall FUN_006e2a10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        add     eax, ebx
        test    eax, eax
        push    esi
        mov     esi, ecx
        jnz     l_do_copy
        call    FUN_006e27b0
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0xC]
        pop     esi
        mov     dword ptr [edx], ecx
        pop     ebx
        ret     0x10
    l_do_copy:
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_006e2890
        mov     esi, dword ptr [esi]
        mov     edi, dword ptr [edi]
        mov     ecx, ebx
        mov     ebx, dword ptr [esp + 0x18]
        mov     eax, ecx
        add     esi, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
