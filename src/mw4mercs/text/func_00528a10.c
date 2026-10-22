/*
 * FUN_00528a10 (298 B) — Campaign/training data initializer.
 *
 * __fastcall (ECX = this). Sets up campaign data: calls helper functions,
 * copies string data, dispatches via virtual method, sets a global flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412570(const char *str);
extern int __fastcall FUN_005178d0(int a);
extern int __stdcall FUN_006140c0(int a);
extern void *__stdcall FUN_00595c20(const char *str);
extern int __stdcall FUN_00417aa0(int a);
extern void __stdcall FUN_004129c0(void);
extern void __stdcall FUN_00412950(void);
extern int __stdcall FUN_00412780(int a);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) int __fastcall FUN_00528a10(int param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f20cc;
__asm {
sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    ecx
        mov     ecx, esp
        push    0x779f54
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x84]
        call    FUN_006140c0
        mov     cx, word ptr [eax + 0x10]
        mov     ax, word ptr [eax + 0x12]
        push    0x779de4
        mov     word ptr [ebx + 0x4097c], cx
        mov     word ptr [ebx + 0x4097e], ax
        call    FUN_00595c20
        mov     ebp, eax
        lea     eax, [ebp + 0x10]
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        push    0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x1c], 0x77a080
        call    FUN_00417aa0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_skip_refcnt
        inc     byte ptr [eax - 1]

    l_skip_refcnt:
        lea     ecx, [esp + 0x10]
        call    FUN_004129c0
        lea     ecx, [esp + 0x10]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov eax, dword ptr [DAT_007dab44]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0x40970]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [eax]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x38]
        xor     esi, ecx
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780
        test    ebp, ebp
        mov byte ptr [DAT_007f20cc], 0x1
        jz      l_skip_release
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]

    l_skip_release:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret
    }


}
