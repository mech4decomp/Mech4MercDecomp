/*
 * FUN_10002f70 (47 B, __stdcall) — _alloca_probe-style stack allocator.
 * EAX = requested size; probes the stack in 0x1000-page chunks (touch
 * each page via TEST [ECX],EAX) then adjusts ESP and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_10002f70(void)
{
    __asm {
        push    ecx
        cmp     eax, 0x1000
        lea     ecx, [esp + 8]
        jc      L_2f90
L_2f7c:
        sub     ecx, 0x1000
        sub     eax, 0x1000
        test    dword ptr [ecx], eax
        cmp     eax, 0x1000
        jnc     L_2f7c
L_2f90:
        sub     ecx, eax
        mov     eax, esp
        test    dword ptr [ecx], eax
        mov     esp, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
        push    eax
        ret
    }
}
