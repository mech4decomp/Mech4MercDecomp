/*
 * FUN_004a9380 (111 B) — MLR ShardCloud sub-object registry constructor
 * (__thiscall, RET 0x4). Calls base ctor FUN_004ab5c0, initializes fields,
 * constructs two sub-objects (FUN_004ae3c0), zeroes four flag bytes, and
 * sets vtable 0x770450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ab5c0(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_004a9380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004ab5c0
        mov     dword ptr [esi + 0x274], 0x8
        xor     ebx, ebx
        mov     dword ptr [esi + 0x278], ebx
        mov     dword ptr [esi + 0x280], 0x1
        lea     ecx, [esi + 0x294]
        mov     dword ptr [esi + 0x290], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2a0]
        call    FUN_004ae3c0
        mov     byte ptr [esi + 0x2b0], bl
        mov     byte ptr [esi + 0x2b2], bl
        mov     byte ptr [esi + 0x2b3], bl
        mov     byte ptr [esi + 0x2b1], bl
        mov     dword ptr [esi], 0x770450
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
