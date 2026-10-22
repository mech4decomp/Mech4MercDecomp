/*
 * FUN_00494050 (76 B) — __cdecl.
 * If param_1 != 0, opens "Graphics Options" registry key and sets
 * "EffectLOD" value. Then frees DAT_007da93c if non-null and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0040eda0(const char *str);
extern int __cdecl FUN_00411dc0(int param_1, int param_2);
extern void __fastcall FUN_00415200(int param_1);
extern void __cdecl FUN_004084e0(void *ptr);

extern int DAT_007da940;
extern int DAT_007da93c;

__declspec(naked) void FUN_00494050(int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        jz      l_check_ptr
        push    0x7b2964
        call    FUN_0040eda0
        _emit 0x8B  /* mov ecx, [0x007da940] */
        _emit 0x0D
        _emit 0x40
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        push    ecx
        push    0x7b2978
        mov     ecx, eax
        call    FUN_00411dc0
l_check_ptr:
        push    esi
        _emit 0x8B  /* mov esi, [0x007da93c] */
        _emit 0x35
        _emit 0x3C
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
l_clear:
        _emit 0xC7  /* mov dword ptr [0x007da93c], 0 */
        _emit 0x05
        _emit 0x3C
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
