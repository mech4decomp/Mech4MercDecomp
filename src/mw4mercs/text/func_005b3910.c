/*
 * FUN_005b3910 (37 B) — copy dwords from [param_1, param_2) to param_3,
 * skipping null param_3 writes. __cdecl (RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005b3910(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      done
        push    esi
copy_loop:
        test    eax, eax
        jz      skip
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
skip:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     copy_loop
        pop     esi
done:
        ret
    }
}
