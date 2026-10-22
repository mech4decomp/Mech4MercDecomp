/*
 * FUN_1001D290 (13 B) - __stdcall, RET 0x10.  Virtual-dispatch thunk:
 * loads this->vtable, stores this to [esp+4], and jumps to vtable[4]
 * (offset +0x10).  (Transcribed from reference bytes; gaptext.)
 *
 * NOTE: this candidate (0x1001d290, 173 B) spans TWO functions.  The
 * second function at 0x1001d2a0 (155 B) is transcribed separately.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001D290(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 4], eax
        jmp     dword ptr [ecx + 0x10]
    }
}
