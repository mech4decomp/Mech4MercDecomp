/*
 * FUN_0050E230 (30 B) — Float endianness byte-swap
 * XORs the float with 0xAAAAAAAA, swaps bytes 0<->1, then loads as float
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050e230(void)
{
    
__asm {
mov eax, [esp+0x04]
        xor eax, 0xAAAAAAAA
        mov [esp+0x04], eax
        mov cl, [esp+0x05]
        mov [esp+0x04], cl
        mov [esp+0x05], al
        fld dword ptr [esp+0x04]
        ret
    }


}
