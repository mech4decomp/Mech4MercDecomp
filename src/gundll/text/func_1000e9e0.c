/*
 * FUN_1000e9e0 (110 B) — __fastcall, RET.
 * SEH-guarded constructor: installs exception frame, sets vtable ptr
 * 0x100496bc, then calls FUN_1002e220 twice and FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void FUN_1002e220(void);
extern void FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_1000e9e0(void)
{
    __asm {
        push    -1
        push    10047AD8h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 100496BCh
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002e220
        mov     edx, dword ptr [esi + 0x24]
        push    edx
        mov     edx, dword ptr [esi + 0xc]
        test    edx, edx
        setnz   al
        push    eax
        call    FUN_1002e220
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0FFFFFFFFh
        call    FUN_1001c750
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
