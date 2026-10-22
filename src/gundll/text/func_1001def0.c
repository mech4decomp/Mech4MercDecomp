/*
 * FUN_1001def0 (111 B) — __fastcall, RET.
 * SEH-guarded constructor: installs exception frame, sets vtable ptr
 * 0x1004a990, calls FUN_1002d770, optionally FUN_10001d60, then
 * FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void FUN_1002d770(void);
extern void FUN_10001d60(void);
extern void FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_1001def0(void)
{
    __asm {
        push    -1
        push    100481A8h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 1004A990h
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002d770
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     L_df40
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_df40:
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
