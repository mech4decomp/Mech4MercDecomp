/*
 * FUN_1000d3e0 (129 B) — __fastcall.
 * SEH-guarded constructor: sets vtable 0x10049650, calls FUN_1002e220
 * twice with bool flags, frees member 0x28 if member 0xc is null,
 * then thiscall FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e220(void);
extern void __cdecl FUN_10001d60(void);
extern void FUN_1001c750(void);   /* __thiscall (ECX=this) */

__declspec(naked) void __fastcall FUN_1000d3e0(void)
{
    __asm {
        push    -1
        push    0x10047a58
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x10049650
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002e220
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        mov     edx, dword ptr [esi + 0xc]
        test    edx, edx
        setnz   al
        push    eax
        call    FUN_1002e220
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     loc_d442
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    loc_d442:
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
