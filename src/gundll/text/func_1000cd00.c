/*
 * FUN_1000cd00 (93 B) — __fastcall, RET.
 * SEH-guarded destructor-ish: installs SEH frame, sets vtable 0x10049638,
 * optionally calls FUN_10001d60, then FUN_1001c750, restores SEH frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);
extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_1000cd00(void)
{
    __asm {
        push    -1
        push    0x10047a18
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x10049638
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L3e
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L3e:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c750
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
