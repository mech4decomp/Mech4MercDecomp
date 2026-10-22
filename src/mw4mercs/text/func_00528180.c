/*
 * FUN_00528180 (349 B) — Control mapping object initialization.
 *
 * __thiscall (ECX = this). Dispatches based on a field at this+0x40ee0,
 * allocates/copies string data, calls virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_00417aa0(int a);
extern int __stdcall FUN_00595b60(int a);
extern void __stdcall FUN_004d1f80(int a, int b);
extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_00592a70(int a, void *b);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int len, int flag);
extern int __stdcall FUN_00593620(int a, int b);
extern void __stdcall FUN_00412570(int a, int b);
extern void __stdcall FUN_004084e0(int ptr);
extern void __stdcall FUN_004d21c0(int a);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */

__declspec(naked) int __stdcall FUN_00528180(int param_1)
{
    

extern int DAT_007f1fc0;
extern int DAT_007f1fbc;
extern int DAT_007f1fb8;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        sub     esp, 0x50
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [ecx + 0x40ee0]
        sub     eax, 0
        jz      l_case0
        dec     eax
        jz      l_case1
        dec     eax
        jnz     l_fail
        /* case 2: mov ecx,[0x007f1fc0] */
        mov     eax, dword ptr [edx]
        mov ecx, dword ptr [DAT_007f1fc0]
        push    eax
        jmp     l_call_595b60
    l_case1:
        /* mov ecx,[0x007f1fbc] */
        mov ecx, dword ptr [DAT_007f1fbc]
        lea     eax, [ecx + 0x10]
        mov     dword ptr [esp + 8], eax
        mov     edx, dword ptr [eax]
        push    0
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 8], 0x77a080
        call    FUN_00417aa0
        jmp     l_after_switch
    l_case0:
        mov     eax, dword ptr [edx]
        /* mov ecx,[0x007f1fb8] */
        mov ecx, dword ptr [DAT_007f1fb8]
        push    eax
    l_call_595b60:
        call    FUN_00595b60
    l_after_switch:
        test    eax, eax
        jz      l_fail
        push    ebp
        push    1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebp, eax
        jmp     l_got_obj
    l_alloc_fail:
        xor     ebp, ebp
    l_got_obj:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_free_skip
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_free_skip:
        push    ebx
        push    edi
        push    0
        push    0x200
        call    FUN_006f3c80
        mov     edx, dword ptr [DAT_007dab44]
        mov     ebx, eax
        mov     eax, dword ptr [edx]
        mov     dword ptr [esi], ebx
        xor     eax, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [eax + 0x0c]
        xor     esi, 0x85739531
        mov     edi, dword ptr [esi]
        mov     ecx, ebp
        call    FUN_00593620
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x34]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x64]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        test    ebp, ebp
        rep movsb
        pop     edi
        pop     ebx
        jz      l_decref
        mov     eax, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [eax]
    l_decref:
        mov     eax, dword ptr [esp + 0x5c]
        test    eax, eax
        pop     ebp
        jz      l_cleanup
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_cleanup
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_cleanup:
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
        mov     eax, 1
        pop     esi
        add     esp, 0x50
        ret     8
    l_fail:
        xor     eax, eax
        pop     esi
        add     esp, 0x50
        ret     8
    }


}
