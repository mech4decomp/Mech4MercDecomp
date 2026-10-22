/*
 * FUN_00757260 (63 B) — Constructor.
 *
 * Stores params into this+0x94/0x98/0x9C, calls FUN_007582B0(*this, param_1,
 * param_2), sets this+0xE8 = 1.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007582b0(void *a, void *b, void *c);

__declspec(naked) void __fastcall FUN_00757260(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    1
        mov     dword ptr [esi + 0x94], eax
        mov     eax, edx
        push    eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0x9c], edx
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     dword ptr [esi + 0x98], ecx
        call    FUN_007582b0
        mov     byte ptr [esi + 0xe8], 1
        pop     esi
        ret     0xc
    }
}
