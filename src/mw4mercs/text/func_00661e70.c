/*
 * FUN_00661e70 (36 B) — Lazy float initializer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * If this->field_8 == -1.0f, calls virtual method at vtable+0x50 on
 * param_1, converts the returned int to float, and stores it at this+8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00661e70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 8], 0xbf800000
        jnz     L_done
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x50]
        mov     dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        fstp    dword ptr [esi + 8]
L_done:
        pop     esi
        ret     4
    }
}
