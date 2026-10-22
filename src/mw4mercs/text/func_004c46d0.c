/*
 * FUN_004C46D0 (27 B) — __fastcall linked-list walker.
 * Walks a linked list at this->0x144, calling virtual method at
 * offset 0x1c on each node whose first field is non-zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004c46d0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, dword ptr [ECX + 0x144]
        TEST ESI, ESI
        JZ l_done
        MOV ECX, dword ptr [ESI]
        TEST ECX, ECX
        MOV ESI, dword ptr [ESI + 0x4]
        JZ l_done
        CALL dword ptr [ECX + 0x1c]
        _emit 0xEB
        _emit 0xEE
    l_done:
        POP ESI
        RET
    }
}
