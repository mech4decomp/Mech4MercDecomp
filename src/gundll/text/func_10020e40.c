/*
 * FUN_10020e40 (120 B) — __fastcall.
 * Object destructor with SEH frame (handler 0x10048328). Sets vtable
 * 0x1004aa68, calls FUN_1002e070, frees members via FUN_10001d60, then
 * FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e070(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10020e40(void)
{
    __asm {
        push    -1
        push    0x10048328
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004aa68
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002e070
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     L_99
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        add     esp, 0x8
    L_99:
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
