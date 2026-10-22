/*
 * FUN_0050B000 (35 B) — Set byte at +0x14, call helper, conditionally call another
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050b000(void)
{
    

extern void __cdecl FUN_0050b21b(void);
extern void __cdecl FUN_0050b8cb(void);
__asm {
mov al, [esp+0x04]
        push esi
        mov esi, ecx
        mov [esi+0x14], al
        call FUN_0050b21b
        mov eax, [esp+0x0C]
        test eax, eax
        jz skip_call
        push eax
        mov ecx, esi
        call FUN_0050b8cb
skip_call:
        pop esi
        ret 0x08
    }


}
