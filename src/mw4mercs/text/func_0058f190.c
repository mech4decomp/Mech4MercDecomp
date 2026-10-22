/* FUN_0058F190: Load string from ScriptStrings_MERCS.dll, trim trailing spaces, copy to output
 * thiscall: ECX = this, stack: char **out_ptr
 * Calls: vtable[1], FUN_0072d480, FUN_0072d830, strncpy (0x0076b320), FUN_0072d7b0
 *
 */
__declspec(naked) void FUN_0058F190(void)
{
    

extern void __cdecl FUN_0072d46f(void);
extern void __cdecl FUN_0072d80a(void);
extern int DAT_0076b320;
extern void __cdecl FUN_0072d750(void);
__asm {
MOV EAX, dword ptr [ECX + 0x78]
        SUB ESP, 0x64
        PUSH EBX
        PUSH ESI
        ADD ECX, 0x78
        PUSH EDI
        CALL dword ptr [EAX + 0x4]      /* vtable[1]() */

        PUSH 0x77A50C                   /* "ScriptStrings_MERCS.dll" */
        MOV ESI, EAX
        /* CALL 0x0072D480 */
        call FUN_0072d46f

        MOV ECX, dword ptr [ESI + 0x634]
        ADD ECX, 0x1194
        MOV EBX, EAX                    /* EBX = module handle */
        PUSH ECX
        PUSH EBX
        /* CALL 0x0072D830 */
        call FUN_0072d80a

        MOV EDX, EAX                    /* EDX = string ptr */
        OR ECX, 0xFFFFFFFF
        XOR EAX, EAX
        MOV EDI, EDX
        REPNE SCASB                     /* strlen */
        NOT ECX
        DEC ECX                         /* ECX = length */

        MOV ESI, ECX
        DEC ESI
        JS done_trim
trim_loop:
        CMP byte ptr [ESI + EDX*0x1], 0x20  /* ' ' */
        JNZ done_trim
        DEC ESI
        JNS trim_loop
done_trim:
        LEA EAX, [ESI + 0x1]           /* EAX = trimmed length */
        PUSH EAX
        PUSH EDX                        /* src = string */
        LEA ECX, [ESP + 0x14]           /* dst = local buffer */
        PUSH ECX
        /* CALL dword ptr [0x0076B320] - strncpy via import */
        call dword ptr [DAT_0076b320]
        ADD ESP, 0xC

        PUSH EBX
        MOV byte ptr [ESP + ESI*0x1 + 0x11], 0x0  /* null-terminate */
        /* CALL 0x0072D7B0 */
        call FUN_0072d750

        /* strlen of local buffer */
        OR ECX, 0xFFFFFFFF
        XOR EAX, EAX
        LEA EDI, [ESP + 0xC]
        REPNE SCASB

        MOV EAX, dword ptr [ESP + 0x74] /* param_2 (out_ptr) */
        NOT ECX
        SUB EDI, ECX                    /* EDI = start of string */
        MOV EDX, ECX                    /* EDX = length */
        MOV ESI, EDI                    /* ESI = src */
        MOV EDI, dword ptr [EAX]        /* EDI = *out_ptr (dst) */
        SHR ECX, 0x2                    /* dword count */
        REP MOVSD                       /* copy dwords */
        MOV ECX, EDX
        AND ECX, 0x3                    /* remaining bytes */
        REP MOVSB                       /* copy remaining */

        POP EDI
        POP ESI
        POP EBX
        ADD ESP, 0x64
        RET 0x4
    }


}
