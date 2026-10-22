/*
 * FUN_00525f00 (317 B) — Bot AI iteration helper.
 *
 * __thiscall (ECX = this). Iterates through a linked list, copies
 * strings, and manages refcounts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_006f4950(int ptr);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_00412780(int param1);
extern void __fastcall FUN_004129c0(void);
extern void __fastcall FUN_00412950(void);
extern void __stdcall FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_00525f00(void)
{
    

extern int DAT_007dd234;
extern int DAT_007f1fc4;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x14
        mov eax, dword ptr [DAT_007dd234]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 8]
        mov edx, dword ptr [DAT_007f1fc4]
        mov     ebp, dword ptr [eax + 4]
        mov     eax, dword ptr [edx + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], 0
        jmp     l_check_next
    l_advance:
        mov     eax, dword ptr [esp + 0x20]
    l_check_next:
        test    eax, eax
        jz      l_done
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x20], eax
        jz      l_done
        cmp     dword ptr [esp + 0x10], 0x40
        jge     l_done
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jle     l_advance
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_free_old_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
    l_free_old_done:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, eax
        mov eax, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x28], 0
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     ecx, dword ptr [edx + 0x0c]
        mov     edx, dword ptr [esi + 0x38]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        mov     dword ptr [ebp], ebx
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412780
        lea     ecx, [esp + 0x28]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x28]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        inc     esi
        add     ebp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x10], esi
        jz      l_advance
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_advance
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     l_advance
    l_done:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], edx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret     8
    }


}
