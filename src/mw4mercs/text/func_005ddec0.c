/*
 * FUN_005DDEC0 (45 B) — __cdecl memcpy-style copy. Copies (param2-param1)
 * bytes from param1 to param3 using rep movsd/movsb, returns param3+count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_005ddec0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        test    edx, edx
        jle     LDEeb
        push    ebx
        push    edi
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        pop     edi
        add     eax, edx
        pop     ebx
LDEeb:
        pop     esi
        ret
    }
}
