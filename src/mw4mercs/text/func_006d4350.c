/*
 * FUN_006D4350 (28 B) — Zero-initialize a 0x20-byte structure.
 *
 * __fastcall (ECX = this). Sets all 8 dwords + 1 byte to 0.
 * Fields: +0x00..+0x10 (5 dwords), +0x14 (byte), +0x18..+0x1C (2 dwords).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006d4350(void)
{
    __asm {
        MOV EAX, ECX
        XOR ECX, ECX
        MOV dword ptr [EAX], ECX
        MOV dword ptr [EAX + 0x4], ECX
        MOV dword ptr [EAX + 0x8], ECX
        MOV dword ptr [EAX + 0xC], ECX
        MOV dword ptr [EAX + 0x10], ECX
        MOV byte ptr [EAX + 0x14], CL
        MOV dword ptr [EAX + 0x18], ECX
        MOV dword ptr [EAX + 0x1C], ECX
        RET
    }
}
