/* FUN_00584e30 - __thiscall, 20 bytes */
__declspec(naked) void FUN_00584e30(void)
{
    __asm {
        MOV  EAX, DWORD PTR [ECX + 0xe0]
        CMP  DWORD PTR [EAX + 0x14], 0xf
        JZ   done
        MOV  BYTE PTR [ECX + 0x52d], 0x1
done:
        RET
    }
}
