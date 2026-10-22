/*
 * FUN_006E3150 (53 B) — __cdecl; if arg3==0 && arg2!=0 return 0, else call
 * IAT[0x76b130] and null-terminate a wide string at [arg2 + ret*2 - 2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b130;

__declspec(naked) void FUN_006E3150(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 8]
        jne     l_call
        test    esi, esi
        je      l_call
        xor     eax, eax
        pop     esi
        ret
    l_call:
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    -1
        push    eax
        push    0
        push    0
        call    dword ptr [g_76b130]
        test    eax, eax
        jle     l_done
        mov     word ptr [esi + eax*2 - 2], 0
    l_done:
        pop     esi
        ret
    }
}
