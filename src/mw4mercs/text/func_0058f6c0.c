/* FUN_0058F6C0: Obfuscated dispatch function (266 B)
 * References globals: 0x007dab44, 0x007dab40
 * Calls: FUN_00559be0, FUN_00415040
 *
 * inline asm does not support CALL rel32 or MOV with [imm32].
 */
__declspec(naked) void FUN_0058F6C0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_100559b82(void);
extern void __cdecl FUN_100414fdb(void);
extern void __cdecl FUN_100414f6f(void);
extern void __cdecl FUN_100559af9(void);
extern void __cdecl FUN_100559ae4(void);
__asm {
/* MOV EAX, [0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]
        /* MOV EDX, [0x007dab40] */
        mov edx, dword ptr [DAT_007dab40]
        MOV ECX, dword ptr [EAX]
        XOR ECX, EDX
        MOV EDX, dword ptr [ECX + 0x2C]
        SUB ESP, 0x24
        XOR EDX, 0x85739531
        JZ exit

        MOV EAX, dword ptr [ECX + 0x20]
        XOR EAX, 0x85739531
        MOV EAX, dword ptr [EAX + 0x4ED0]
        CMP EAX, 0x1
        JZ check_again
        CMP EAX, 0x2
        JZ branch_2_or_3
        CMP EAX, 0x3
        JNZ exit

check_again:
        CMP EAX, 0x2
        JZ branch_2_or_3
        CMP EAX, 0x3
        JZ branch_2_or_3

        MOV ECX, dword ptr [ECX + 0x2C]
        PUSH 0x60
        XOR ECX, 0x85739531
        /* CALL 0x00559BE0 */
        call FUN_100559b82

        PUSH 0x64
        /* CALL 0x00415040 */
        call FUN_100414fdb
        ADD ESP, 0x4
        CMP EAX, 0x50
        JGE exit

        /* MOV ECX, [0x007dab44] */
        mov ecx, dword ptr [DAT_007dab44]
        PUSH ESI
        MOV ESI, dword ptr [ECX]
        /* MOV ECX, [0x007dab40] */
        mov ecx, dword ptr [DAT_007dab40]
        PUSH 0x9
        MOV dword ptr [ESP + 0x8], 0x56
        MOV dword ptr [ESP + 0xC], 0x57
        MOV dword ptr [ESP + 0x10], 0x4F
        MOV dword ptr [ESP + 0x14], 0x52
        MOV dword ptr [ESP + 0x18], 0x5C
        MOV dword ptr [ESP + 0x1C], 0x5B
        MOV dword ptr [ESP + 0x20], 0x5A
        MOV dword ptr [ESP + 0x24], 0x50
        MOV dword ptr [ESP + 0x28], 0x62
        XOR ESI, ECX
        /* CALL 0x00415040 */
        call FUN_100414f6f
        MOV EDX, dword ptr [ESP + EAX*0x4 + 0x8]
        MOV ECX, dword ptr [ESI + 0x2C]
        ADD ESP, 0x4
        PUSH EDX
        XOR ECX, 0x85739531
        /* CALL 0x00559BE0 */
        call FUN_100559af9
        POP ESI
        ADD ESP, 0x24
        RET

branch_2_or_3:
        MOV ECX, dword ptr [ECX + 0x2C]
        PUSH 0x64
        XOR ECX, 0x85739531
        /* CALL 0x00559BE0 */
        call FUN_100559ae4

exit:
        ADD ESP, 0x24
        RET
    }


}
