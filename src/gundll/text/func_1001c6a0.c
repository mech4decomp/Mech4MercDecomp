/*
 * FUN_1001c6a0 (56 B) — __stdcall, RET 0x14. Wraps FUN_10038141,
 * returns 0xc1120002 on failure.
 */

extern void __cdecl FUN_10038141(void);

__declspec(naked) void __stdcall FUN_1001c6a0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x8]
        push    esi
        push    eax
        push    0x10050c18
        push    ecx
        push    edx
        xor     esi, esi
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     L_ok
        mov     eax, 0xc1120002
        pop     esi
        ret     0x14
L_ok:
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
