/*
 * FUN_006B0680 (73 B) — Vtable 0x798C44 slot 8: set field_1c, clear field_14,
 * clear byte_19.
 *
 * If field_14 is non-NULL, releases it via FUN_005D9C70 (on global 0x7F2438),
 * destroys it via FUN_005D9500, frees it via FUN_004084E0, and sets field_14
 * to NULL. Then sets field_1c = param2, byte_19 = 0, field_14 = 0.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param1, param2).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   57                   push    edi
 *   8B 7E 14             mov     edi, [esi+0x14]     ; field_14
 *   85 FF                test    edi, edi
 *   74 27                je      +0x27 (skip_release)
 *   8B 0D 38 24 7F 00    mov     ecx, [0x7F2438]    ; global
 *   57                   push    edi
 *   E8 xx xx xx xx       call    FUN_005D9C70
 *   85 FF                test    edi, edi
 *   74 10                je      +0x10 (skip_destroy)
 *   8B CF                mov     ecx, edi
 *   E8 xx xx xx xx       call    FUN_005D9500
 *   57                   push    edi
 *   E8 xx xx xx xx       call    FUN_004084E0
 *   83 C4 04             add     esp, 4
 *   C7 46 14 00 00 00 00 mov     [esi+0x14], 0      ; field_14 = NULL
 *   8B 44 24 10          mov     eax, [esp+0x10]    ; param2
 *   5F                   pop     edi
 *   89 46 1C             mov     [esi+0x1C], eax    ; field_1c = param2
 *   C6 46 19 00          mov     byte ptr [esi+0x19], 0  ; byte_19 = 0
 *   C7 46 14 00 00 00 00 mov     [esi+0x14], 0      ; field_14 = 0
 *   5E                   pop     esi
 *   C2 08 00             ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005d9c70(void *param);
extern void __fastcall FUN_005d9500(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006b0680(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        test    edi, edi
        je      l_skip_release
        _emit   0x8B
        _emit   0x0D
        _emit   0x38
        _emit   0x24
        _emit   0x7F
        _emit   0x00
        push    edi
        call    FUN_005d9c70
        test    edi, edi
        je      l_zero_field
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_zero_field:
        mov     dword ptr [esi + 0x14], 0
    l_skip_release:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [esi + 0x1C], eax
        mov     byte ptr [esi + 0x19], 0
        mov     dword ptr [esi + 0x14], 0
        pop     esi
        ret     8
    }
}
