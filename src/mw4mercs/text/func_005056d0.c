/*
 * FUN_005056D0 (68 B) — __thiscall method with ret 0x18
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005056d0(void)
{
    

extern void __cdecl FUN_100505304(void);
extern void __cdecl FUN_005058af(void);
__asm {
mov eax, [esp+0x18]
        push ebx
        mov ebx, [esp+0x10]
        push ebp
        mov ebp, [esp+0x0C]
        push esi
        push edi
        mov edi, [esp+0x20]
        push eax
        mov esi, ecx
        mov ecx, [esp+0x28]
        push ecx
        push edi
        push ebx
        push ebp
        mov ecx, esi
        call FUN_100505304
        mov edx, [esp+0x18]
        push edi
        push ebx
        push edx
        push ebp
        mov ecx, esi
        mov dword ptr [esi], 0x00776EA8
        call FUN_005058af
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
    }


}
