/*
 * FUN_005e33f0 (60 B) — Field initializer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param, unused here).
 * Loads three globals (0x7b8d88/0x7b8d8c/0x7b8d90) into
 * [this+0x228]/[this+0x22c]/[this+0x230], zeroes [this+0x224],
 * sets [this+0x220]=1 and [this+0x234]=0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005e33f0(void)
{
    

extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
__asm {
        mov edx, dword ptr [DAT_007b8d88]
        mov     dword ptr [ecx + 0x228], edx
        mov edx, dword ptr [DAT_007b8d8c]
        xor     eax, eax
        mov     dword ptr [ecx + 0x22c], edx
        mov edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [ecx + 0x224], eax
        mov     byte ptr [ecx + 0x220], 0x1
        mov     dword ptr [ecx + 0x230], edx
        mov     byte ptr [ecx + 0x234], al
        ret     0x4
    }


}
