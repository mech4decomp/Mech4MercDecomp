/*
 * FUN_1000cff0 (92 B) — __fastcall.
 * SEH-guarded object ctor: installs an exception frame, sets the vtable
 * pointer, calls FUN_1002e220 / FUN_1001c8a0, restores the frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e220(void);
extern void __cdecl FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_1000cff0(void)
{
    __asm {
        push    -0x1
        push    0x10047a38
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x10049644
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x28]
        test    ecx, ecx
        setnz   cl
        push    eax
        mov     dword ptr [esp + 0x14], 0x0
        push    ecx
        call    FUN_1002e220
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}
