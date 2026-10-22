/*
 * FUN_006D2A90 (39 B) — Constructor: calls FUN_00416E20(0, 1) on
 * this+0x04, sets vtable at this+0x04 to 0x79E9AC, zeros this+0x00,
 * sets byte this+0x5C = 0. Returns this.
 *
 * __fastcall (ECX = this), returns this.
 *
 * Disassembly:
 *   56                push    esi
 *   57                push    edi
 *   8B F1             mov     esi, ecx
 *   6A 01             push    1
 *   8D 7E 04          lea     edi, [esi + 4]
 *   6A 00             push    0
 *   8B CF             mov     ecx, edi
 *   E8 7E 43 D4 FF    call    FUN_00416E20
 *   C7 07 AC E9 79 00 mov     dword ptr [edi], 0x79E9AC
 *   5F                pop     edi
 *   C7 06 00 00 00 00 mov     dword ptr [esi], 0
 *   C6 46 5C 00       mov     byte ptr [esi + 0x5c], 0
 *   8B C6             mov     eax, esi
 *   5E                pop     esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_00416E20(int, int);

__declspec(naked) void * __fastcall FUN_006d2a90(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    1
        lea     edi, dword ptr [esi + 4]
        push    0
        mov     ecx, edi
        call    FUN_00416E20
        mov     dword ptr [edi], 0x79E9AC
        pop     edi
        mov     dword ptr [esi], 0
        mov     byte ptr [esi + 0x5c], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
