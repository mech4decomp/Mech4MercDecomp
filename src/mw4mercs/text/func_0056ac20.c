/* FUN_0056ac20 - ABL opcode handler: set threat target */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __stdcall FUN_00580580(void *a, void *b);
extern int  __cdecl FUN_00566ef0(int param1, void *param2, int param3);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_0056ac20(int param_1, int param_2)
{
    __asm {
        sub     esp, 0x14
        push    edi
        lea     eax, [esp + 8]
        push    eax
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00580580

        mov     eax, dword ptr [esp + 0x1c]
        push    0
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_00566ef0

        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 12
        cmp     edi, eax
        jz      check_free

        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        push    esi

inner_loop:
        mov     esi, dword ptr [edi]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        cmp     eax, ebx
        jz      next_iter

        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        mov     dword ptr [esi + 0x140], ebx
        jz      next_iter

        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xec]

next_iter:
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 4
        cmp     edi, eax
        jnz     inner_loop

        mov     edi, dword ptr [esp + 0x14]
        pop     esi
        pop     ebx

check_free:
        test    edi, edi
        jz      done
        push    edi
        call    FUN_004084e0
        add     esp, 4

done:
        pop     edi
        add     esp, 0x14
        ret
    }
}
