/*
 * FUN_10012cd0 (96 B) — __fastcall.
 * SEH-guarded ctor: sets vtable, calls FUN_1002c810 + FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002c810(void);
extern void __cdecl FUN_1001ca00(void);

__declspec(naked) void __fastcall FUN_10012cd0(void)
{
    __asm {
        push    -0x1
        push    0x10047cb8
        mov     eax, fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x10049848
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x20]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   dl
        mov     dword ptr [esp + 0x18], 0x0
        push    edx
        call    FUN_1002c810
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}
