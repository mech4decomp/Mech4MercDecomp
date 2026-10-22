/* FUN_0056b430 - ABL opcode handler: set AI group ID */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00580e40(int param, void **out);
extern int  __cdecl FUN_00566c80(void);
extern int  __stdcall FUN_0064e600(int param);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e540(int param);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e100(void);        /* __thiscall: ECX=this */
extern int  __stdcall FUN_004fcb30(int id);
extern char __cdecl FUN_00415230(int arg);
extern void __cdecl FUN_00581370(int *list, void *elem);
extern void __cdecl FUN_00580fb0(int *list, void *elem, int count);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_0056b430(unsigned int param_1, int param_2)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f23b0;
__asm {
sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, [esp + 0x18]
        test    esi, 0xf00000
        push    edi

        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0

        jz      not_handle

        lea     eax, [esp + 0xc]
        push    eax
        add     esi, 0xff100000
        push    esi
        call    FUN_00580e40
        add     esp, 8
        jmp     after_loop

not_handle:
        call    FUN_00566c80
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
        mov     edi, [eax]
        mov     ecx, ebp
        call    FUN_0064e100
        cmp     edi, [eax + 4]
        jz      after_loop

loop_start:
        /* __emit: mov ecx,[0x007dab44] */
        mov ecx, dword ptr [DAT_007dab44]

        mov     eax, [ecx]

        /* __emit: mov ecx,[0x007dab40] */
        mov ecx, dword ptr [DAT_007dab40]

        mov     edx, [edi]
        xor     eax, ecx
        mov     ecx, [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      next_iter

        mov     eax, [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     next_iter

        /* __emit: mov eax,[0x007f268c] */
        mov eax, dword ptr [DAT_007f268c]

        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     esi, [esi + 0x2fc]
        test    esi, esi
        jz      next_iter

        /* __emit: mov eax,[0x007f23b0] */
        mov eax, dword ptr [DAT_007f23b0]

        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     next_iter

        mov     eax, [esp + 0x10]
        cmp     eax, [esp + 0x14]
        mov     [esp + 0x1c], esi
        jz      grow_list

        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_00581370
        mov     eax, [esp + 0x18]
        add     esp, 8
        add     eax, 4
        mov     [esp + 0x10], eax
        jmp     next_iter

grow_list:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00580fb0

next_iter:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, [eax + 4]
        jnz     loop_start

after_loop:
        mov     eax, [esp + 0xc]
        cmp     eax, [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        jz      check_free

set_group_loop:
        mov     ecx, [eax]
        mov     edx, [esp + 0x14]
        mov     [ecx + 0x520], edx
        mov     ecx, [esp + 4]
        add     eax, 4
        cmp     eax, ecx
        jnz     set_group_loop
        /* __emit: mov eax,[esp] encoded as 8B 44 24 00 (MSVC6 would use 8B 04 24) */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00

check_free:
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        add     esp, 4

done:
        add     esp, 0xc
        ret
    }


}
