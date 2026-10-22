/*
 * FUN_10015bc0 (102 B) — __fastcall, RET.
 * Destructor with SEH frame: sets vtable ptr 0x1004992c, frees members at
 * +0x24/+0x28 if +0xc is null, then calls FUN_1001c750(this) and tears
 * down the SEH frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10015bc0(void)
{
    __asm {
        push    -0x1
        push    0x10047e58
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004992c
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jnz     L_c07
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        call    FUN_10001d60
        add     esp, 0x8
    L_c07:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c750
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}
