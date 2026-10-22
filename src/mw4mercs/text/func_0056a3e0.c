/* FUN_0056a3e0 - ABL opcode handler: find object by type */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00580be0(int param1, void *param2);
extern void __cdecl thunk_FUN_00600940(void);
extern int  __stdcall FUN_0064e600(int param1);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e540(int param1);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e100(void);         /* __thiscall: ECX=this */
extern int  __stdcall FUN_004fcb30(int id);
extern int  __stdcall FUN_00415230(int arg);
extern int  __cdecl FUN_00581350(void *a, void *b);
extern int  __stdcall FUN_00580d50(void *a, void *b, int c);  /* __thiscall: ECX=this */
extern int  __cdecl FUN_0056a3c0(int a, int b);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) int __cdecl FUN_0056a3e0(unsigned int param_1, int param_2)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f24d8;
__asm {
sub     esp, 12
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 12], 0
        mov     dword ptr [esp + 16], 0
        mov     dword ptr [esp + 20], 0
        jz      not_handle

        lea     eax, [esp + 12]
        push    eax
        add     esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add     esp, 8
        jmp     after_loop

not_handle:
        call    thunk_FUN_00600940
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064e600
        test    al, al
        jz      after_loop

        push    esi
        mov     ecx, edi
        call    FUN_0064e540
        mov     ebp, eax
        mov     ecx, ebp
        call    FUN_0064e100
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jz      after_loop

loop_start:
        mov ecx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [ecx]

        mov ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      next_iter

        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     next_iter

        mov eax, dword ptr [DAT_007f268c]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      next_iter

        mov eax, dword ptr [DAT_007f24d8]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     next_iter

        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      grow_array

        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_00581350
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 8
        add     eax, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     next_iter

grow_array:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00580d50

next_iter:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jnz     loop_start

after_loop:
        mov     esi, dword ptr [esp + 12]
        cmp     esi, dword ptr [esp + 16]
        jz      check_free

        mov     ebp, dword ptr [esp + 0x20]
inner_loop:
        mov     eax, dword ptr [esi]
        push    ebp
        push    eax
        call    FUN_0056a3c0
        mov     edi, eax
        add     esp, 8
        test    edi, edi
        jge     found

        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     inner_loop

        mov     esi, dword ptr [esp + 12]

check_free:
        test    esi, esi
        jz      return_minus2
        push    esi
        call    FUN_004084e0
        add     esp, 4

return_minus2:
        pop     edi
        pop     esi
        mov     eax, -2
        pop     ebp
        add     esp, 12
        ret

found:
        mov     eax, dword ptr [esp + 12]
        test    eax, eax
        jz      return_found
        push    eax
        call    FUN_004084e0
        add     esp, 4

return_found:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 12
        ret
    }


}
