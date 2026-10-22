/*
 * FUN_004E4190 (91 B) - Adept collision cell copy (__thiscall, RET 0x4).
 *
 * Copies a 0x38-byte cell struct from [ESP+4] into [ECX] (13 dwords
 * + 1 byte at +0x34).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_004e4190(void)
{
    __asm {
        MOV EAX, ECX
        MOV ECX, dword ptr [ESP + 0x4]
        MOV EDX, dword ptr [ECX]
        MOV dword ptr [EAX], EDX
        MOV EDX, dword ptr [ECX + 0x4]
        MOV dword ptr [EAX + 0x4], EDX
        MOV EDX, dword ptr [ECX + 0x8]
        MOV dword ptr [EAX + 0x8], EDX
        MOV EDX, dword ptr [ECX + 0xc]
        MOV dword ptr [EAX + 0xc], EDX
        MOV EDX, dword ptr [ECX + 0x10]
        MOV dword ptr [EAX + 0x10], EDX
        MOV EDX, dword ptr [ECX + 0x14]
        MOV dword ptr [EAX + 0x14], EDX
        MOV EDX, dword ptr [ECX + 0x18]
        MOV dword ptr [EAX + 0x18], EDX
        MOV EDX, dword ptr [ECX + 0x1c]
        MOV dword ptr [EAX + 0x1c], EDX
        MOV EDX, dword ptr [ECX + 0x20]
        MOV dword ptr [EAX + 0x20], EDX
        MOV EDX, dword ptr [ECX + 0x24]
        MOV dword ptr [EAX + 0x24], EDX
        MOV EDX, dword ptr [ECX + 0x28]
        MOV dword ptr [EAX + 0x28], EDX
        MOV EDX, dword ptr [ECX + 0x2c]
        MOV dword ptr [EAX + 0x2c], EDX
        MOV EDX, dword ptr [ECX + 0x30]
        MOV CL, byte ptr [ECX + 0x34]
        MOV dword ptr [EAX + 0x30], EDX
        MOV byte ptr [EAX + 0x34], CL
        RET 0x4
    }
}
