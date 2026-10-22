/*
 * FUN_00511B50 (82 B) — Display mode initialization
 * Sets up resolution 800x600 (0x320 x 0x258) and loads a string
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006BBC00(int);

__declspec(naked) void func_00511b50(void)
{
    

extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
extern void __cdecl FUN_00709eea(void);
__asm {
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
        call FUN_00709eea
        push 0
        push 0x2000
        push 0x7799d0
        call FUN_006BBC00
        ret
    }


}
