/*
 * FUN_00761140 (82 B) — __cdecl (no args, RET). Calls FUN_007624A0; if the
 * result is 0xA, falls through an anti-tamper junk chain (salc + EB 00 jmp
 * sled) and returns 0x50; otherwise returns 0x51.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007624A0(void);

__declspec(naked) void FUN_00761140(void)
{
    __asm {
        call    FUN_007624A0
        cmp     eax, 0xa
        je      loc_761150
        mov     eax, 0x51
        ret
loc_761150:
        jmp     short loc_761156
        __emit 0xD6 /* salc: undocumented opcode, no MSVC6 mnemonic */
        __emit 0xD6 /* salc */
        cmp     al, 0
loc_761156:
        jmp     short loc_761158
loc_761158:
        jmp     short loc_76115a
loc_76115a:
        jmp     short loc_76115c
loc_76115c:
        jmp     short loc_76115e
loc_76115e:
        jmp     short loc_761160
loc_761160:
        jmp     short loc_761162
loc_761162:
        jmp     short loc_761164
loc_761164:
        jmp     short loc_761166
loc_761166:
        jmp     short loc_761168
loc_761168:
        jmp     short loc_76116a
loc_76116a:
        jmp     short loc_76116c
loc_76116c:
        jmp     short loc_76116e
loc_76116e:
        jmp     short loc_761170
loc_761170:
        jmp     short loc_761172
loc_761172:
        jmp     short loc_761174
loc_761174:
        jmp     short loc_761176
loc_761176:
        jmp     short loc_761178
loc_761178:
        jmp     short loc_76117a
loc_76117a:
        jmp     short loc_76117c
loc_76117c:
        jmp     short loc_76117e
loc_76117e:
        jmp     short loc_761180
loc_761180:
        jmp     short loc_761182
loc_761182:
        jmp     short loc_761184
loc_761184:
        jmp     short loc_761186
loc_761186:
        jmp     short loc_761188
loc_761188:
        jmp     short loc_76118a
loc_76118a:
        jmp     short loc_76118c
loc_76118c:
        mov     eax, 0x50
        ret
    }
}
