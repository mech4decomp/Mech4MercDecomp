/*
 * FUN_005f92d0 (451 B) -- __thiscall (ECX = this), RET 4 (1 stack param).
 * Lazily builds one or two sub-objects (at this+0x124 / this+0x128)
 * based on descriptor fields, then runs a validation callback and
 * forwards the param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned short DAT_007db0ac;
extern unsigned short DAT_007db0ae;
extern int DAT_007dc68c;
extern int *DAT_007dab44;
extern int DAT_007dab40;

extern void __stdcall FUN_006f4950(int param);
extern void __fastcall FUN_004d1f80(void *this, void *param, int flag);
extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_004fec10(void *param);
extern void *__fastcall FUN_004fdfc0(void *this, void *a, void *b, int c);
extern void __stdcall FUN_006f49a0(void);
extern void __fastcall FUN_004d21c0(void *this);
extern void *__fastcall FUN_004fe1e0(void *this, void *cb, void *a, void *b, int c);
extern char __stdcall FUN_004f93d0(void);
extern void __fastcall FUN_005f94f0(void *this);
extern void __fastcall FUN_005fcc80(void *this, void *param);
extern void __stdcall FUN_005f94a0(void);

__declspec(naked) void __fastcall FUN_005f92d0(void *param)
{
    __asm {
        sub     esp, 0x44
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        push    edi
        jnz     l_after_outer
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jnz     l_after_outer
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    ebx
        call    dword ptr [eax + 4]
        mov     ebx, eax
        mov     cx, word ptr [ebx + 0x10]
        cmp     cx, word ptr [DAT_007db0ac]
        lea     edi, [ebx + 0x10]
        jnz     l_first_alloc
        mov     dx, word ptr [edi + 2]
        cmp     dx, word ptr [DAT_007db0ae]
        jz      l_second_check
    l_first_alloc:
        mov     eax, dword ptr [DAT_007dc68c]
        push    eax
        call    FUN_006f4950
        push    1
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_004d1f80
        push    0xa0
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      l_first_zero
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_004fec10
        add     esp, 4
        push    eax
        lea     edx, [esp + 0x10]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_004fdfc0
        jmp     l_first_store
    l_first_zero:
        xor     eax, eax
    l_first_store:
        mov     dword ptr [esi + 0x124], eax
        call    FUN_006f49a0
        lea     ecx, [esp + 0xc]
        call    FUN_004d21c0
    l_second_check:
        mov     ax, word ptr [DAT_007db0ac]
        cmp     word ptr [ebx + 0x294], ax
        lea     edi, [ebx + 0x294]
        pop     ebx
        jnz     l_second_alloc
        mov     cx, word ptr [DAT_007db0ae]
        cmp     word ptr [edi + 2], cx
        jz      l_after_outer
    l_second_alloc:
        mov     edx, dword ptr [DAT_007dc68c]
        push    edx
        call    FUN_006f4950
        push    1
        push    edi
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov     eax, dword ptr [esi + 0x398]
        test    eax, eax
        jz      l_second_no_list
        push    0xa0
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      l_second_zero
        lea     eax, [esp + 8]
        push    eax
        call    FUN_004fec10
        add     esp, 4
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        push    offset FUN_005f94a0
        push    esi
        mov     ecx, edi
        call    FUN_004fe1e0
        mov     dword ptr [esi + 0x128], eax
        jmp     l_second_done
    l_second_zero:
        xor     eax, eax
        mov     dword ptr [esi + 0x128], eax
        jmp     l_second_done
    l_second_no_list:
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        jnz     l_second_done
        push    0xa0
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      l_second_no_list_zero
        lea     edx, [esp + 8]
        push    edx
        call    FUN_004fec10
        add     esp, 4
        push    eax
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        call    FUN_004fdfc0
        jmp     l_second_no_list_store
    l_second_no_list_zero:
        xor     eax, eax
    l_second_no_list_store:
        mov     dword ptr [esi + 0x124], eax
    l_second_done:
        call    FUN_006f49a0
        lea     ecx, [esp + 8]
        call    FUN_004d21c0
    l_after_outer:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        call    FUN_004f93d0
        test    al, al
        jnz     l_skip_call
        mov     ecx, esi
        call    FUN_005f94f0
    l_skip_call:
        mov     edx, dword ptr [esp + 0x50]
        push    edx
        mov     ecx, esi
        call    FUN_005fcc80
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     4
    }
}
