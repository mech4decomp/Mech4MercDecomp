/*
 * FUN_00490fb0 (85 B) — __thiscall, RET 4 (1 byte param on stack).
 * Destructor with global refcount management.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004169c0(void);
extern void __fastcall FUN_00416130(void);
extern void __fastcall FUN_00415e30(void);
extern void __fastcall FUN_004084e0(void);

extern int DAT_007da854;
extern int DAT_007da858;

__declspec(naked) void * __fastcall FUN_00490fb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      l_ret_esi
        ; mov ecx, [0x007da854]
        mov     ecx, dword ptr [DAT_007da854]
        push    esi
        call    FUN_00416130
        ; dec dword ptr [0x007da858]
        dec     dword ptr [DAT_007da858]
        jnz     l_ret_esi
        push    edi
        ; mov edi, [0x007da854]
        mov     edi, dword ptr [DAT_007da854]
        test    edi, edi
        jz      l_clear_global
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    l_clear_global:
        pop     edi
        mov     eax, esi
        ; mov dword ptr [0x007da854], 0
        mov     dword ptr [DAT_007da854], 0
        pop     esi
        ret     0x4
    l_ret_esi:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
