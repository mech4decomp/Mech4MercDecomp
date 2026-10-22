/*
 * FUN_006D1980 (130 B) — Free 2D array of {ptr, flag} pairs (__thiscall).
 *
 * Iterates over a rectangular region [param1..param3) x [param2..param2+param4)
 * in a 2D array at this->field_7C (offset 0x1F*4=124). Each element is an
 * 8-byte pair {void* ptr, int flag}. If flag is non-zero, frees ptr via
 * FUN_004084E0 and zeroes both fields.
 *
 * __thiscall (ECX = this), RET 0x10, 4 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006d1980(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0x0C]
        push    ebp
        add     edx, eax
        cmp     eax, edx
        mov     ebp, ecx
        mov     ecx, eax
        mov     dword ptr [esp + 8], ecx
        mov     dword ptr [esp + 0x10], edx
        jge     l_early_done
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        lea     edi, [ebx + eax]
        mov     dword ptr [esp + 0x18], edi
    l_row_check:
        cmp     ebx, edi
        jge     l_row_done
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x7C]
        imul    edx, ecx
        add     edx, ebx
        lea     esi, [eax + edx * 8]
        sub     edi, ebx
    l_col_loop:
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jz      l_skip_free
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 4], 0
    l_skip_free:
        add     esi, 8
        dec     edi
        jnz     l_col_loop
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1C]
        mov     edi, dword ptr [esp + 0x18]
    l_row_done:
        inc     ecx
        cmp     ecx, edx
        mov     dword ptr [esp + 0x14], ecx
        jl      l_row_check
        pop     edi
        pop     esi
        pop     ebx
    l_early_done:
        pop     ebp
        ret     0x10
    }
}
