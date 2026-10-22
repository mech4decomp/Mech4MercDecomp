/*
 * FUN_004F4310 (81 B) — __thiscall (1 stack arg, RET 4). If [this+0x178] is
 * non-null, copies 0xC dwords from [that+0xD8+0x80] to the arg; else builds
 * a temp via FUN_004F4800 and copies 0xC dwords from it to the arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004F4800(void);

__declspec(naked) void FUN_004F4310(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x178]
        sub     esp, 0x30
        test    eax, eax
        push    esi
        push    edi
        je      loc_4f4340
        mov     esi, dword ptr [eax + 0xd8]
        mov     eax, dword ptr [esp + 0x3c]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        add     esp, 0x30
        ret     4
loc_4f4340:
        lea     eax, [esp + 8]
        push    eax
        call    FUN_004F4800
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        add     esp, 0x30
        ret     4
    }
}
