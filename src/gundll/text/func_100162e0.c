/*
 * FUN_100162e0 (96 B) — __fastcall, SEH-prologue constructor.
 * Sets vtable 0x10049944, calls FUN_1002bb80 (__stdcall, 3 args) and
 * FUN_1001c8a0 (thiscall), restores FS:[0] SEH frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002bb80(void);
extern void __cdecl FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_100162e0(void)
{
    __asm {
        push    -1
        push    0x10047e98
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x10049944
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x30]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   dl
        mov     dword ptr [esp + 0x18], 0
        push    edx
        call    FUN_1002bb80
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
