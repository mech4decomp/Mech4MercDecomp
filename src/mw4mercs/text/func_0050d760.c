/*
 * FUN_0050D760 (50 B) — memcpy-like function
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d760(void)
{
    

extern void __cdecl FUN_10050d681(void);
__asm {
mov ecx, [esp+0x0C]
        mov eax, [esp+0x04]
        push ebx
        mov ebx, [eax+0x08]
        push esi
        mov esi, [esp+0x10]
        push edi
        push ecx
        push eax
        call FUN_10050d681
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 0x02
        mov edi, eax
        rep movsd
        mov ecx, edx
        add esp, 0x08
        and ecx, 0x03
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret
    }


}
