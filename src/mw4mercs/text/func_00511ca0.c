/*
 * func_00511CA0 - 102 bytes
 * Creates a window/control with specific parameters
 */

extern int __cdecl FUN_006BBC00(int);

__declspec(naked) void func_00511CA0()
{
    

extern int DAT_007ddd21;
extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
extern void __cdecl FUN_00709ede(void);
__asm {
        mov al, byte ptr [DAT_007ddd21]
        test al, al
        push esi
        mov  esi, ecx
        jne  already_created
        push 0
        push 0
        push 0
        push 0
        xor  eax, eax
        mov al, byte ptr [DAT_00858957]
        xor  ecx, ecx
        mov cl, byte ptr [DAT_00858956]
        push 0
        xor  edx, edx
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
        call FUN_00709ede
        push 0
        push 0x1000
        push 0x779a58
        call FUN_006BBC00
        mov  [esi+0x38], eax
already_created:
        mov  byte ptr [esi+0x28], 0
        pop  esi
        ret
    }


}
