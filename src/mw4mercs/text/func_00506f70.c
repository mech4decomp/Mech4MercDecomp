/*
 * FUN_00506F70 (41 B) — Constructor
 * Calls initialization function, sets vtable, returns this
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00506f70(void)
{
    

extern int DAT_007dc7d8;
extern void __cdecl FUN_1004ec1cd(void);
__asm {
mov eax, [esp+0x08]
        mov edx, dword ptr [DAT_007dc7d8]
        push esi
        push 2
        mov esi, ecx
        mov ecx, [esp+0x0C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_1004ec1cd
        mov dword ptr [esi], 0x00776F84
        mov eax, esi
        pop esi
        ret 0x08
    }


}
