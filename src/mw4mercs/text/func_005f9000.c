/*
 * FUN_005f9000 (143 B) — __fastcall destructor-ish teardown. Constructs two
 * local list objects (vtables 0x783ec4/0x783f04), drains two lists calling
 * FUN_004e6180 / FUN_004e6ce0 per element, then destroys the locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416bc0(void);
extern void FUN_00416cc0(void);
extern void FUN_004e6180(void);
extern void FUN_004e6ce0(void);
extern void FUN_00416c60(void);

__declspec(naked) void FUN_005f9000(void)
{
    __asm {
        sub     esp, 0x28
        push    esi
        mov     esi, ecx
        lea     eax, [esi+0x370]
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_00416bc0
        add     esi, 0x384
        push    esi
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x1c], 0x783ec4
        call    FUN_00416bc0
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x4], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        pop     esi
        jz      L_9058
L_9044:
        mov     ecx, eax
        call    FUN_004e6180
        lea     ecx, [esp+0x14]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_9044
L_9058:
                __emit 0x8D   /* lea ecx,[esp]: MSVC6 drops 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jz      L_9079
L_9065:
        mov     ecx, eax
        call    FUN_004e6ce0
                __emit 0x8D   /* lea ecx,[esp]: MSVC6 drops 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_9065
L_9079:
                __emit 0x8D   /* lea ecx,[esp]: MSVC6 drops 00 disp byte */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416c60
        lea     ecx, [esp+0x14]
        call    FUN_00416c60
        add     esp, 0x28
        ret
    }
}
