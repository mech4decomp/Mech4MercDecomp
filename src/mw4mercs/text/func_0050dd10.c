/*
 * FUN_0050DD10 (82 B) — Dispatch function
 * Calls through vtable and handles results
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0050dd10(void)
{
    

extern void __cdecl FUN_0050d860(void);
extern void __cdecl FUN_0050d6a0(void);
extern void __cdecl FUN_0050d810(void);
__asm {
push ebx
        push esi
        mov esi, [esp+0x0C]
        mov eax, [esi+0x04]
        push edi
        mov edi, [esp+0x14]
        push eax
        push edi
        call dword ptr [esi+0x0C]
        mov ecx, [esi]
        mov edx, [esi+0x10]
        push 0x00
        push 0x00
        lea ebx, [ecx + eax*4]
        mov eax, [ebx]
        push edx
        push edi
        push eax
        call FUN_0050d860
        add esp, 0x1C
        cmp eax, -1
        jnz done
        mov ecx, [ebx]
        push edi
        push ecx
        call FUN_0050d6a0
        add esp, 0x08
        pop edi
        pop esi
        pop ebx
        ret
done:
        mov edx, [ebx]
        push eax
        push edi
        push edx
        call FUN_0050d810
        add esp, 0x0C
        pop edi
        pop esi
        pop ebx
        ret
    }


}
