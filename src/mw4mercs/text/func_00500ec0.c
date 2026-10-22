/*
 * FUN_00500EC0 (71 B) — __thiscall method
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416f20(void);

__declspec(naked) void func_00500ec0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, [esp+0x14]
        lea ebp, [edi+0x10]
        mov esi, ecx
        push ebp
        call FUN_00416f60
        mov ebx, eax
        test ebx, ebx
        jz skip_init
        push ebx
        mov ecx, esi
        call FUN_00415ca0
        push ebx
        lea ecx, [esi+0x18]
        call FUN_00415ca0
    skip_init:
        push ebp
        push edi
        mov ecx, esi
        call FUN_00416f20
        lea eax, [edi+0x14]
        push eax
        push edi
        lea ecx, [esi+0x18]
        call FUN_00416f20
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x04
    }
}
