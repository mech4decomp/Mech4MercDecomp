/*
 * FUN_006F0FA0 (66 B) — Constructor-like: calls FUN_006f3930(this),
 * FUN_006f3930(this+0x14), sets fields, calls FUN_006f3960(0, 0x40080000),
 * calls FUN_006f39c0(this+0x14), returns this.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   57                   push    edi
 *   8B F1                mov     esi, ecx
 *   E8 87 29 00 00       call    0x006f3930
 *   8D 7E 14             lea     edi, [esi + 0x14]
 *   8B CF                mov     ecx, edi
 *   E8 7D 29 00 00       call    0x006f3930
 *   33 C0                xor     eax, eax
 *   68 00 00 08 40       push    0x40080000
 *   50                   push    eax
 *   8B CE                mov     ecx, esi
 *   C7 46 28 0A 00 00 00 mov     dword ptr [esi + 0x28], 0xa
 *   88 46 2C             mov     byte ptr [esi + 0x2c], al
 *   C6 46 2D 01          mov     byte ptr [esi + 0x2d], 1
 *   88 46 2E             mov     byte ptr [esi + 0x2e], al
 *   89 46 30             mov     dword ptr [esi + 0x30], eax
 *   E8 8A 29 00 00       call    0x006f3960
 *   8B CF                mov     ecx, edi
 *   E8 E3 29 00 00       call    0x006f39c0
 *   5F                   pop     edi
 *   8B C6                mov     eax, esi
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __fastcall FUN_006f3930(int);
void __fastcall FUN_006f3960(int, double);
void __fastcall FUN_006f39c0(int);

__declspec(naked) int __fastcall FUN_006f0fa0(int this)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006f3930
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        call    FUN_006f3930
        xor     eax, eax
        push    0x40080000
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x28], 0xa
        mov     byte ptr [esi + 0x2c], al
        mov     byte ptr [esi + 0x2d], 1
        mov     byte ptr [esi + 0x2e], al
        mov     dword ptr [esi + 0x30], eax
        call    FUN_006f3960
        mov     ecx, edi
        call    FUN_006f39c0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
