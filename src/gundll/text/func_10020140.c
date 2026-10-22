/*
 * FUN_10020140 (96 B) — __fastcall.
 * SEH-guarded constructor: sets vtable, calls FUN_1002dcb0 then FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002dcb0(void);
extern void __cdecl FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_10020140(void)
{
    __asm {
        push    -1
        push    0x100482a8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004aa2c
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   dl
        mov     dword ptr [esp + 0x18], 0
        push    edx
        call    FUN_1002dcb0
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], -1
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
