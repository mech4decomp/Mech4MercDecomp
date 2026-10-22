/*
 * FUN_5e010010 (51 B) — linked-list node removal by pointer.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e010010(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x30]
        add     ecx, 0x30
        test    eax, eax
        jz      loc_1002c
        mov     edx, dword ptr [esp + 0x4]
loc_1001e:
        cmp     eax, edx
        jz      loc_10032
        lea     ecx, [eax + 0x20]
        mov     eax, dword ptr [eax + 0x20]
        test    eax, eax
        jnz     loc_1001e
loc_1002c:
        or      eax, 0xffffffff
        ret     0x4
loc_10032:
        mov     eax, dword ptr [edx + 0x20]
        mov     dword ptr [edx + 0x20], 0x0
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0x4
    }
}
