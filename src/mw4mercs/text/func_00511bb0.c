/*
 * func_00511BB0 - 116 bytes
 * Network error script loader
 */

extern int __cdecl FUN_006BBC00(int);
extern int __cdecl FUN_00709F20(int, int, int, int, int, int, int, int, int, int);

__declspec(naked) void func_00511BB0()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        mov edx, dword ptr [DAT_007dab40]
        push 0
        xor  ecx, edx
        mov  edx, [ecx+0xC]
        push 0
        push 0
        push 0
        xor  eax, eax
        mov al, byte ptr [DAT_00858957]
        xor  edx, 0x85739531
        xor  ecx, ecx
        mov cl, byte ptr [DAT_00858956]
        push 0
        mov dword ptr [edx+0x3514], 4
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
        call FUN_00709F20
        push 0
        push 0x2000
        push 0x7799d0
        call FUN_006BBC00
        ret
    }


}
