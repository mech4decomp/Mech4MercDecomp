/*
 * FUN_006B06D0 (59 B) — Destructor for object with vtable 0x798c44.
 *
 * Sets vtable to 0x798c44, then if field at +0x14 is non-NULL:
 *   - Calls FUN_005D9C70 (via global this at 0x7F2438) to release it
 *   - Calls FUN_005D9500 (__thiscall on the field value) to destroy it
 *   - Calls FUN_004084E0 (free wrapper) to free it
 *   - Sets field at +0x14 to NULL
 *
 * __thiscall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   57                   push    edi
 *   8B F9                mov     edi, ecx
 *   8B 77 14             mov     esi, [edi+0x14]
 *   85 F6                test    esi, esi
 *   C7 07 44 8C 79 00    mov     dword ptr [edi], 0x798c44
 *   74 27                je      +0x27 (skip)
 *   8B 0D 38 24 7F 00    mov     ecx, [0x7f2438]
 *   56                   push    esi
 *   E8 xx xx xx xx       call    FUN_005D9C70
 *   85 F6                test    esi, esi
 *   74 10                je      +0x10 (skip_destroy)
 *   8B CE                mov     ecx, esi
 *   E8 xx xx xx xx       call    FUN_005D9500
 *   56                   push    esi
 *   E8 xx xx xx xx       call    FUN_004084E0
 *   83 C4 04             add     esp, 4
 *   C7 47 14 00 00 00 00 mov     dword ptr [edi+0x14], 0
 *   5F                   pop     edi
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_005d9c70(void *param);
extern void __fastcall FUN_005d9500(void);

__declspec(naked) void __fastcall FUN_006b06d0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x14]
        test    esi, esi
        mov     dword ptr [edi], 0x798c44
        je      l_skip
        ; mov ecx, dword ptr [0x7f2438]  -- force 6-byte encoding
        _emit 0x8B
        _emit 0x0D
        _emit 0x38
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push    esi
        call    FUN_005d9c70
        test    esi, esi
        je      l_zero_field
        mov     ecx, esi
        call    FUN_005d9500
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero_field:
        mov     dword ptr [edi + 0x14], 0
    l_skip:
        pop     edi
        pop     esi
        ret
    }
}
