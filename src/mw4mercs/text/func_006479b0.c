/*
 * FUN_006479b0 (35 B) — Constructor. Copies first byte of param into this,
 * zeroes this, allocates 0x14 bytes via FUN_004084d0, stores result.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void __stdcall FUN_006479b0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x14
        mov     dword ptr [esi], 0
        call    FUN_004084d0
        mov     dword ptr [esi], eax
        add     esp, 4
        mov     eax, esi
        pop     esi
        ret     4
    }
}
