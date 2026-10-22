/*
 * FUN_1001f6f0 (92 B) — __fastcall, RET.
 * SEH-guarded destructor-ish: installs SEH frame, sets vtable 0x1004aa08,
 * calls FUN_1002ded0 then FUN_1001c8a0, restores SEH frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002ded0(void);
extern void __fastcall FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_1001f6f0(void)
{
    __asm {
        push    -1
        push    0x10048248
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004aa08
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x24]
        test    ecx, ecx
        setnz   cl
        push    eax
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002ded0
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
