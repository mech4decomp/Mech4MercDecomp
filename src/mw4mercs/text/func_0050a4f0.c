/*
 * FUN_0050A4F0 (93 B) — Destructor/cleanup function
 * Frees arrays of structures (0x98 bytes each)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0050c5c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_0050a4f0(void)
{
    __asm {
        push ecx
        push ebp
        mov ebp, ecx
        mov ecx, [ebp+0x10]
        test ecx, ecx
        jz skip_free_array
        mov eax, [ecx-0x04]
        push ebx
        lea ebx, [ecx-0x04]
        lea edx, [eax+eax*8]
        lea edx, [eax+edx*2]
        dec eax
        push esi
        lea esi, [ecx+edx*8]
        js l_524
        push edi
        lea edi, [eax+0x01]
loop_start:
        sub esi, 0x98
        mov ecx, esi
        call FUN_0050c5c0
        dec edi
        jnz loop_start
        pop edi
l_524:
        push ebx
        call FUN_004084e0
        add esp, 0x04
        pop esi
        pop ebx
        mov dword ptr [ebp+0x10], 0x00000000
skip_free_array:
        mov eax, [ebp+0x00]
        test eax, eax
        mov [esp+0x04], eax
        pop ebp
        jz skip_free_ptr
        push eax
        call FUN_004084e0
        add esp, 0x04
skip_free_ptr:
        pop ecx
        ret
    }
}
