/*
 * FUN_00505CE0 (75 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00505ce0(void)
{
    

extern void __cdecl FUN_10050537f(void);
extern void __cdecl FUN_1004084c9(void);
extern void __cdecl FUN_1004084b7(void);
extern void __cdecl FUN_007226b4(void);
__asm {
push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea edi, [ebp+0x24]
        mov ebx, 0x05
loop_start:
        mov esi, [edi]
        test esi, esi
        jz skip_free
        mov ecx, esi
        call FUN_10050537f
        push esi
        call FUN_1004084c9
        add esp, 0x04
skip_free:
        add edi, 0x04
        dec ebx
        jnz loop_start
        mov eax, [ebp+0x4C]
        push eax
        call FUN_1004084b7
        mov ecx, [ebp+0x38]
        add esp, 0x04
        push 0x3D08850A
        push 0x00
        push ecx
        call FUN_007226b4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }


}
