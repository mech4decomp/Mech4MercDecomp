// FUN_00537F40 (85 bytes)
#include <windows.h>

extern void __cdecl FUN_0052ddd0(void);
extern void __cdecl FUN_0052e010(void);
extern void __cdecl FUN_004d42c0(void);

__declspec(naked) void func_00537f40(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        xor     eax, eax
        push    edi
        mov     byte ptr [esi + 0x16], 0x1
        mov     byte ptr [esi + 0x17], al
        mov     dword ptr [esi + 0x3534], eax
        lea     edi, [esi + 0x3538]
        mov     ebx, 0xff
loop1:
        mov     ecx, edi
        call    FUN_0052ddd0
        add     edi, 0x2038
        dec     ebx
        jnz     loop1
        lea     edi, [esi + 0x205d24]
        mov     ebx, 0x18
loop2:
        mov     ecx, edi
        call    FUN_0052e010
        add     edi, 0x22ac
        dec     ebx
        jnz     loop2
        mov     ecx, esi
        call    FUN_004d42c0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
