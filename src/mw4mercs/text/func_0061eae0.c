/*
 * FUN_0061eae0 (53 B) — Shift array elements down by one slot
 * (memmove-style) and decrement the stored end pointer at this+0x4.
 *
 * __thiscall (ECX = this), RET 4 (one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0061eae0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        lea     ebx, [eax + 0x4]
        cmp     ebx, edi
        jz      L_done
        mov     edx, edi
        sub     edx, ebx
        sar     edx, 0x2
        test    edx, edx
        mov     esi, eax
        jle     L_done
L_loop:
        mov     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [esi], ebx
        add     esi, 0x4
        dec     edx
        jnz     L_loop
L_done:
        add     edi, -0x4
        mov     dword ptr [ecx + 0x4], edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
