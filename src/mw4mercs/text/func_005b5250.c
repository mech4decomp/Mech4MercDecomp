/*
 * FUN_005b5250 (56 B) — __thiscall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b5250(int a)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x10
        call    dword ptr [eax + 0x4]
        mov     al, byte ptr [esi + 0x564]
        test    al, al
        mov     byte ptr [esi + 0x514], 0x0
        jz      L_5284
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0xb
        call    dword ptr [edx + 0x8]
L_5284:
        pop     esi
        ret     0x4
    }
}
