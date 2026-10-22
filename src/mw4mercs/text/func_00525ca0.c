/*
 * FUN_00525ca0 (603 B) — Bot AI initialization helper (variant 3).
 *
 * __thiscall (ECX = this). Initializes bot data structures with
 * multiple string copies and vtable dispatch calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00417aa0(int param1);
extern int __fastcall FUN_004d1f80(int a, int b);
extern void *__cdecl FUN_004084d0(int size);
extern int __fastcall FUN_00592a70(int a, int b);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern int __fastcall FUN_005936a0(int a, int b);
extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_004129c0(void);
extern void __fastcall FUN_00412950(void);
extern int __stdcall FUN_00412780(int param1);
extern int __fastcall FUN_00526110(int a, int b);
extern int __fastcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_00525ca0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007f1fc4;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x74
        mov     eax, dword ptr [esp + 0x78]
        mov     edx, dword ptr [eax + 8]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax + 0x0c]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x28], ecx
        /* MSVC6 encodes mov ecx,[imm32] as B9 (mov ecx,imm32), not 8B 0D */
        mov ecx, dword ptr [DAT_007f1fc4]
        add     ecx, 0x10
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x2c], 0x0077a080
        push    esi
        mov     esi, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [edx], 0xffffffff
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [edx]
        push    edi
        push    eax
        lea     ecx, [esp + 0x38]
        mov     dword ptr [ebp + 0x40ee0], 2
        mov     dword ptr [ebp + 0x40eb4], 3
        call    FUN_00417aa0
        mov     ebx, eax
        push    1
        lea     ecx, [ebx + 0x34]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     l_alloc_done
    l_alloc_fail:
        mov     dword ptr [esp + 0x14], 0
        mov     edi, dword ptr [esp + 0x14]
    l_alloc_done:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [edi + 0x40], 0
        jz      l_free_old_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_free_old_done:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esi], eax
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_005936a0
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x18]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free1:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_skip_inc
        inc     byte ptr [eax - 1]
    l_skip_inc:
        lea     ecx, [esp + 0x10]
        call    FUN_004129c0
        lea     ecx, [esp + 0x10]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x40970]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        /* MSVC6 encodes mov ecx,[imm32] as B9 (mov ecx,imm32), not 8B 0D */
        mov ecx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [ecx]
        /* MSVC6 encodes xor esi,[imm32] as 35 (xor esi,imm32), not 33 35 */
        xor esi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esi + 0x0c]
        mov     edi, dword ptr [ebx + 0x38]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    0
        mov     ecx, ebp
        mov     dword ptr [eax], edi
        call    FUN_00526110
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax]
        push    ecx
        push    1
        mov     ecx, ebp
        call    FUN_00526110
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edx]
        push    eax
        push    2
        mov     ecx, ebp
        call    FUN_00526110
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ecx]
        /* MSVC6 encodes mov edx,[imm32] as BA (mov edx,imm32), not 8B 15 */
        mov edx, dword ptr [DAT_007dab44]
        /* MSVC6 encodes mov ecx,[imm32] as B9 (mov ecx,imm32), not 8B 0D */
        mov ecx, dword ptr [DAT_007dab40]
        pop     edi
        pop     esi
        pop     ebp
        test    eax, eax
        mov     eax, dword ptr [edx]
        pop     ebx
        jz      l_clear_false
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x3531], 1
        jmp     l_check_vcall
    l_clear_false:
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x3531], 0
    l_check_vcall:
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        jz      l_skip_vcall
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip_vcall:
        /* MSVC6 encodes mov eax,[esp] as 8B 04 24, not 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      l_skip_free2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free2:
        lea     ecx, [esp + 0x30]
        call    FUN_004d21c0
        mov     eax, 1
        add     esp, 0x74
        ret     8
    }


}
