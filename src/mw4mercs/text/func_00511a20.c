/*
 * FUN_00511A20 (88 B) — Initialization function
 * Loads a string resource and sets up structure fields
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00858a38;
extern void __cdecl FUN_006BBC00(int, int, int);

__declspec(naked) void func_00511a20(void)
{
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi+0x1C], -1
        jnz skip_init
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov edx, [ecx+0x0C]
        xor edx, 0x85739531
        mov al, [edx+0x16]
        test al, al
        push 0x00
        push 0x1000
        jz use_string1
        push 0x007798CC
        jmp call_alloc
use_string1:
        push 0x0077989C
call_alloc:
        call FUN_006BBC00
        mov [esi+0x30], eax
        mov dword ptr [esi+0x1C], 0x06
        mov dword ptr [DAT_00858a38], 0x535260
skip_init:
        mov byte ptr [esi+0x28], 0x00
        pop esi
        ret
    }
}
