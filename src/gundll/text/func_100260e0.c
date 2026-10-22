/*
 * FUN_100260e0 (120 B) — __fastcall.
 * Object destructor with SEH frame (handler 0x10048568). Sets vtable
 * 0x1004abe8, frees four members via FUN_10001d60, then FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_100260e0(void)
{
    __asm {
        push    -1
        push    0x10048568
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004abe8
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_139
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x30]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x34]
        push    eax
        call    FUN_10001d60
        add     esp, 0x10
    L_139:
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
