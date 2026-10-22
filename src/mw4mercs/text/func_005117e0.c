/*
 * FUN_005117E0 (110 B) — Creates a window/control with specific parameters (variant 2)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005117e0(void)
{
    

extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
extern void __cdecl FUN_00709ee7(void);
extern void __cdecl FUN_006bbbb6(void);
extern int DAT_00858a38;
__asm {
push esi
        push 0x00
        push 0x00
        push 0x00
        push 0x00
        xor eax, eax
        mov al, byte ptr [DAT_00858957]
        mov esi, ecx
        xor ecx, ecx
        mov cl, byte ptr [DAT_00858956]
        push 0x00
        xor edx, edx
        mov dl, byte ptr [DAT_00858955]
        push eax
        mov eax, dword ptr [DAT_0085894c]
        push ecx
        mov ecx, dword ptr [DAT_00858948]
        push edx
        push eax
        push ecx
        push 0x258
        push 0x320
        call FUN_00709ee7
        push 0x00
        push 0x1000
        push 0x00779810
        call FUN_006bbbb6
        mov [esi+0x44], eax
        mov dword ptr [esi+0x1C], 0x07
        mov byte ptr [esi+0x28], 0x00
        mov dword ptr [DAT_00858a38], 0x535260
        pop esi
        ret
    }


}
