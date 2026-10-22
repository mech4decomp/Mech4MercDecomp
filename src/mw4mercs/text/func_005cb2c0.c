/*
 * FUN_005cb2c0 (40 B) — Constructor: copy a byte from param_1 into this,
 * zero this[0], allocate a 0x10-byte node, and initialize a self-referential
 * doubly-linked list node (node[0]=node, node[4]=node) stored at this[0].
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void *__fastcall FUN_005cb2c0(void *this, void *param1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x10
        mov     dword ptr [esi], 0
        call    FUN_004084d0
        mov     dword ptr [eax], eax
        mov     dword ptr [esi], eax
        add     esp, 4
        mov     dword ptr [eax + 4], eax
        mov     eax, esi
        pop     esi
        ret     4
    }
}
