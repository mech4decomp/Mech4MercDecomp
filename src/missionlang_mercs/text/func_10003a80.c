/*
 * FUN_10003a80 (47 B) — MSVC CRT `_alloca_probe`. Probes the stack in
 * 0x1000-byte pages (touching each page via TEST [ECX],EAX) then adjusts
 * ESP. __stdcall, 1 arg (size in EAX). Transcribed verbatim.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_10003a80(void)
{
    __asm {
        push    ecx
        cmp     eax, 0x1000
        lea     ecx, [esp + 8]
        jc      LAA0
L8C:
        sub     ecx, 0x1000
        sub     eax, 0x1000
        test    dword ptr [ecx], eax
        cmp     eax, 0x1000
        jnc     L8C
LAA0:
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
