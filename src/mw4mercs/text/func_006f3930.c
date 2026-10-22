/*
 * FUN_006F3930 (32 B) — Constructor-like: copies fields +0x08/+0x0C to
 * +0x00/+0x04, calls FUN_00707E70(0), stores double result at +0x08,
 * sets byte +0x10 = 1. Returns this (EAX).
 *
 * __fastcall (ECX = this), returns this.
 *
 * Disassembly:
 *   56                push    esi
 *   8B F1             mov     esi, ecx
 *   8B 46 08          mov     eax, [esi + 8]
 *   8B 4E 0C          mov     ecx, [esi + 0xc]
 *   89 06             mov     [esi], eax
 *   6A 00             push    0
 *   89 4E 04          mov     [esi + 4], ecx
 *   E8 2B 45 01 00    call    FUN_00707E70
 *   DD 5E 08          fstp    qword ptr [esi + 8]
 *   C6 46 10 01       mov     byte ptr [esi + 0x10], 1
 *   8B C6             mov     eax, esi
 *   5E                pop     esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_00707E70(int);

__declspec(naked) void * __fastcall FUN_006f3930(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [esi], eax
        push    0
        mov     dword ptr [esi + 4], ecx
        call    FUN_00707E70
        fstp    qword ptr [esi + 8]
        mov     byte ptr [esi + 0x10], 1
        mov     eax, esi
        pop     esi
        ret
    }
}
