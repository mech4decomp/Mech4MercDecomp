/*
 * FUN_100190c0 (111 B) — __fastcall, RET.
 * SEH-guarded constructor: installs exception frame, sets vtable ptr
 * 0x10049a58, frees three members via FUN_10001d60, then FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void FUN_10001d60(void);
extern void FUN_1001ca00(void);

__declspec(naked) void __fastcall FUN_100190c0(void)
{
    __asm {
        push    -1
        push    10047FB8h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 10049A58h
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_110
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        add     esp, 0xc
    L_110:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0FFFFFFFFh
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
