/*
 * FUN_006F79A0 (56 B) — Sorted array insert helper.
 *
 * If param3->field_08 is non-NULL, calls vtable[4] on it with param1.
 * If it returns non-zero, stores param1 at array[count]*8, zeros the
 * next dword, and increments count. Always returns 1.
 *
 * __stdcall, RET 0xC (3 stack params: param1, param2, param3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f79a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 8]
        test    ecx, ecx
        push    edi
        jz      l_done
        mov     edi, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        test    al, al
        jz      l_done
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        lea     ecx, dword ptr [ecx + eax * 8]
        inc     eax
        mov     dword ptr [ecx], edi
        mov     dword ptr [ecx + 4], 0
        mov     dword ptr [esi + 0x14], eax
    l_done:
        pop     edi
        mov     al, 1
        pop     esi
        ret     0x0C
    }
}
