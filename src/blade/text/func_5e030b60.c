/*
 * FUN_5e030b60 (47 B) - _alloca_probe-style stack probe. Touches each
 * 4 KB page down the stack to guarantee committed pages.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e030b60(void)
{
    __asm {
        push    ecx
        cmp     eax, 0x1000
        lea     ecx, [esp+8]
        jc      done
probe_loop:
        sub     ecx, 0x1000
        sub     eax, 0x1000
        test    dword ptr [ecx], eax
        cmp     eax, 0x1000
        jnc     probe_loop
done:
        sub     ecx, eax
        mov     eax, esp
        test    dword ptr [ecx], eax
        mov     esp, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax+4]
        push    eax
        ret
    }
}
