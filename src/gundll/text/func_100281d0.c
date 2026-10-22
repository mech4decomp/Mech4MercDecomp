/*
 * FUN_100281d0 (111 B) — __fastcall.
 * SEH-guarded object init: sets vtable ptr, conditionally frees 3 members,
 * then FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void __fastcall func_100281d0(void)
{
    __asm {
        push    -1
        push    0x10048688
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004ac60
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     skip
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        call    FUN_10001d60
        add     esp, 0xc
    skip:
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
