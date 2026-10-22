/*
 * FUN_00763AC0 (212 B) — in-.text data block (block 0x763AC0). This is a
 * data structure, not real executable code: three function-pointer entries
 * (call rel32 to 0x763ba0 / 0x763c00 / 0x763c60) each followed by a
 * `jmp +4` over a `salc; salc; cmp al,0` data marker and 27 `jmp 0`
 * (EB 00) padding words, then a small real function at 0x763B83.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00763ba0(void);
extern void __cdecl FUN_00763c00(void);
extern void __cdecl FUN_00763c60(void);

extern int g_008bd498;   /* DAT_008bd498 */

__declspec(naked) void FUN_00763AC0(void)
{
    __asm {
        call    FUN_00763ba0
        jmp     LACB
        __emit 0xD6   /* __emit: salc (set AL on carry) not supported by MSVC6 inline asm */
        __emit 0xD6
        cmp     al, 0
LACB:   jmp     LACD
LACD:   jmp     LACF
LACF:   jmp     LAD1
LAD1:   jmp     LAD3
LAD3:   jmp     LAD5
LAD5:   jmp     LAD7
LAD7:   jmp     LAD9
LAD9:   jmp     LADB
LADB:   jmp     LADD
LADD:   jmp     LADF
LADF:   jmp     LAE1
LAE1:   jmp     LAE3
LAE3:   jmp     LAE5
LAE5:   jmp     LAE7
LAE7:   jmp     LAE9
LAE9:   jmp     LAEB
LAEB:   jmp     LAED
LAED:   jmp     LAEF
LAEF:   jmp     LAF1
LAF1:   jmp     LAF3
LAF3:   jmp     LAF5
LAF5:   jmp     LAF7
LAF7:   jmp     LAF9
LAF9:   jmp     LAFB
LAFB:   jmp     LAFD
LAFD:   jmp     LAFF
LAFF:   jmp     LB01
LB01:   call    FUN_00763c00
        jmp     LB0C
        __emit 0xD6   /* __emit: salc not supported by MSVC6 inline asm */
        __emit 0xD6
        cmp     al, 0
LB0C:   jmp     LB0E
LB0E:   jmp     LB10
LB10:   jmp     LB12
LB12:   jmp     LB14
LB14:   jmp     LB16
LB16:   jmp     LB18
LB18:   jmp     LB1A
LB1A:   jmp     LB1C
LB1C:   jmp     LB1E
LB1E:   jmp     LB20
LB20:   jmp     LB22
LB22:   jmp     LB24
LB24:   jmp     LB26
LB26:   jmp     LB28
LB28:   jmp     LB2A
LB2A:   jmp     LB2C
LB2C:   jmp     LB2E
LB2E:   jmp     LB30
LB30:   jmp     LB32
LB32:   jmp     LB34
LB34:   jmp     LB36
LB36:   jmp     LB38
LB38:   jmp     LB3A
LB3A:   jmp     LB3C
LB3C:   jmp     LB3E
LB3E:   jmp     LB40
LB40:   jmp     LB42
LB42:   call    FUN_00763c60
        jmp     LB4D
        __emit 0xD6   /* __emit: salc not supported by MSVC6 inline asm */
        __emit 0xD6
        cmp     al, 0
LB4D:   jmp     LB4F
LB4F:   jmp     LB51
LB51:   jmp     LB53
LB53:   jmp     LB55
LB55:   jmp     LB57
LB57:   jmp     LB59
LB59:   jmp     LB5B
LB5B:   jmp     LB5D
LB5D:   jmp     LB5F
LB5F:   jmp     LB61
LB61:   jmp     LB63
LB63:   jmp     LB65
LB65:   jmp     LB67
LB67:   jmp     LB69
LB69:   jmp     LB6B
LB6B:   jmp     LB6D
LB6D:   jmp     LB6F
LB6F:   jmp     LB71
LB71:   jmp     LB73
LB73:   jmp     LB75
LB75:   jmp     LB77
LB77:   jmp     LB79
LB79:   jmp     LB7B
LB7B:   jmp     LB7D
LB7D:   jmp     LB7F
LB7F:   jmp     LB81
LB81:   jmp     LB83
LB83:   mov     edx, dword ptr [g_008bd498]
        xor     eax, eax
        test    edx, edx
        setne   al
        add     eax, 0xa
        ret
    }
}
