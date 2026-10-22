/* FUN_00580600 - 21 bytes, __thiscall (ECX = this) */
void __declspec(naked) __fastcall FUN_00580600(void)
{
    __asm {
        MOV EAX, ECX
        MOV ECX, [ESP + 0x4]
        MOV DL, [ECX]
        MOV ECX, [ESP + 0x8]
        MOV [EAX], DL
        MOV EDX, [ECX]
        MOV [EAX], EDX
        RET 0x8
    }
}
