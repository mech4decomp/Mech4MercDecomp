/*
 * FUN_0050E200 (34 B) — Float bit manipulation
 * Takes a float, XORs with 0xAAAAAAAA, returns as float
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050e200(void)
{
    
__asm {
mov eax, [esp+0x04]
        mov [esp+0x04], eax
        mov byte ptr [esp+0x04], ah
        mov byte ptr [esp+0x05], al
        mov eax, [esp+0x04]
        xor eax, 0xAAAAAAAA
        mov [esp+0x04], eax
        fld dword ptr [esp+0x04]
        ret
    }


}
