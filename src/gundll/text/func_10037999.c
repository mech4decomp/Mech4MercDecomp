/*
 * FUN_10037999 (37 B) — __cdecl.
 * Wide-char string copy (null-terminated), param_1 = dst, param_2 = src.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10037999(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     dx, word ptr [ecx]
        lea     esi, [eax + 0x2]
        mov     word ptr [eax], dx
    copy_loop:
        inc     ecx
        inc     ecx
        test    dx, dx
        jz      done
        mov     dx, word ptr [ecx]
        mov     word ptr [esi], dx
        inc     esi
        inc     esi
        jmp     copy_loop
    done:
        pop     esi
        ret
    }
}
