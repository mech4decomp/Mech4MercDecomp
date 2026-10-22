/*
 * FUN_0050D840 (30 B) — Import thunk: calls [0x0076B314] with struct fields
 * Takes a struct pointer, extracts [ptr+8], [ptr], [ptr+0x14] as args
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d840(void)
{
    

extern int DAT_0076b314;
__asm {
mov eax, [esp+0x08]
        push eax
        mov eax, [esp+0x08]
        mov ecx, [eax+0x08]
        mov edx, [eax]
        mov eax, [eax+0x14]
        push ecx
        push edx
        push eax
        call dword ptr [DAT_0076b314]
        add esp, 0x10
        ret
    }


}
