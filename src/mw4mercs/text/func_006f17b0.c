/*
 * FUN_006F17B0 (151 B) — Object constructor/initializer.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Initializes a large object: calls FUN_0041FCB0 on 10 sub-objects
 * at offsets +0x08, +0x10, +0x18, +0x20, +0x28, +0x30, +0x40,
 * +0x48, +0x50, +0x58. Sets state to 2, clears bytes at +0x68,
 * +0x69, +0x6a, and field at +0x04. Then calls FUN_006F39C0 on
 * sub-object at +0x6c, and FUN_006F3960 on sub-objects at +0xbc
 * and +0xe4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_006f3960(void);
extern void __cdecl FUN_006f39c0(void);

__declspec(naked) void __fastcall FUN_006f17b0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 8]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x20]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x28]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x30]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x40]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x48]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x50]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x58]
        call    FUN_0041fcb0
        xor     ebx, ebx
        lea     ecx, [esi + 0x6c]
        mov     byte ptr [esi + 0x68], bl
        mov     byte ptr [esi + 0x69], bl
        mov     byte ptr [esi + 0x6a], bl
        mov     dword ptr [esi], 2
        mov     dword ptr [esi + 4], ebx
        call    FUN_006f39c0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        lea     ecx, [esi + 0xbc]
        call    FUN_006f3960
        push    ebx
        push    ebx
        lea     ecx, [esi + 0xe4]
        call    FUN_006f3960
        pop     esi
        pop     ebx
        ret     8
    }
}
