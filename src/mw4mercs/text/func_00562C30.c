/*
 * FUN_00562C30 (37 B) — Copies ints from src to dst until src reaches end.
 * If dst is NULL, still advances src but doesn't write.
 * __cdecl (plain ret, no stack cleanup).
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_00562C30(void *src, void *end, void *dst)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xC]
        je      done
        push    esi
    loop_start:
        test    eax, eax
        je      skip_copy
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
    skip_copy:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jne     loop_start
        pop     esi
    done:
        ret
    }
}
