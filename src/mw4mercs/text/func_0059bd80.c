/*
 * FUN_0059bd80 (32 B) — Linked list search by key.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (int key).
 * Walks a linked list at this+0x10. Each node has data ptr at +0,
 * next ptr at +4. Searches for node where data->field18 == key.
 * Returns matching data ptr, or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0059bd80(void)
{
    __asm {
        MOV ECX, dword ptr [ECX + 0x10]
        MOV EDX, dword ptr [ESP + 0x4]
    l_loop:
        TEST ECX, ECX
        JZ l_not_found
        MOV EAX, dword ptr [ECX]
        TEST EAX, EAX
        MOV ECX, dword ptr [ECX + 0x4]
        JZ l_done
        CMP dword ptr [EAX + 0x18], EDX
        JE l_done
        JMP l_loop
    l_not_found:
        XOR EAX, EAX
    l_done:
        RET 0x4
    }
}
