/* Auto-generated inline asm transcription for thunk_FUN_00600940 */
#include <windows.h>

__declspec(naked) void thunk_FUN_00600940(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0060092d(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        jmp FUN_0060092d
    }


}
