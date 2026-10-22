/*
 * FUN_00522ac0 (791 B) — Per-entry record parser.
 *
 * __stdcall with 8 bytes of parameters. Processes a linked list of entries,
 * allocating buffers and copying string data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_00595b60(int param1);
extern int __fastcall FUN_004d1f80(int param1, int param2);
extern void *__cdecl FUN_004084d0(int size);
extern int __fastcall FUN_00592a70(void *param1);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __fastcall FUN_00412570(int param1);
extern int __fastcall FUN_00412780(int param1);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_00522ac0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x78
        mov     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x1c]
        /* __emit: MSVC6 encodes mov [esp],ecx as 89 0C 24, need 89 4C 24 00 */
        __emit  0x89
        __emit  0x4c
        __emit  0x24
        __emit  0x00
        mov     ecx, dword ptr [eax + 0x20]
        mov     dword ptr [esp + 0xc], ecx
        /* __emit: MSVC6 encodes mov ecx,[0x007dab44] as B9 imm32, need 8B 0D */
        mov ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]
        push    ebx
        mov     ebx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [eax + 0x24]
        push    ebp
        mov     ebp, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x18], edx
        /* __emit: MSVC6 encodes xor ecx,[0x007dab40] as 81 F1 imm32, need 33 0D */
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x44]
        mov     edx, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        push    eax
        call    FUN_00595b60
        push    0x1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail
        lea     edx, [esp + 0x44]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     dword ptr [esp + 0x14], eax
        jmp     l_alloc_done
l_alloc_fail:
        mov     dword ptr [esp + 0x14], 0
l_alloc_done:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 0x28]
        mov     eax, dword ptr [esp + 0x10]
        sub     eax, esi
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x18]
        sub     eax, ebx
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        sub     edi, esi
        sub     ebp, esi
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x20]
        sub     esi, ebx
        sub     eax, ebx
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x30], ebp
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x34], eax
        jmp     l_loop_check
l_loop_next:
        mov     ecx, dword ptr [esp + 0x40]
l_loop_check:
        test    ecx, ecx
        jz      l_loop_end
        mov     ebp, dword ptr [ecx]
        test    ebp, ebp
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x40], ecx
        jz      l_loop_end
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ebp + 0x14]
        lea     eax, [edx + ebx]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + edx], ecx
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x1c]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + ecx], edx
        mov     edx, dword ptr [ebp + 0x20]
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + ecx], edx
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
l_skip_free1:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        /* __emit: MSVC6 encodes mov edx,[0x007dab44] as BA imm32, need 8B 15 */
        mov edx, dword ptr [DAT_007dab44]
        /* __emit: MSVC6 encodes mov ecx,[0x007dab40] as B9 imm32, need 8B 0D */
        mov ecx, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0x24]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      l_skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0
l_skip_free2:
        push    0x0
        push    0x200
        call    FUN_006f3c80
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esi + ebx], eax
        /* __emit: MSVC6 encodes mov eax,[0x007dab44] as B8 imm32, need A1 */
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        /* __emit: MSVC6 encodes xor ecx,[0x007dab40] as 81 F1 imm32, need 33 0D */
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ebp + 0x28]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      l_skip_free3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0
l_skip_free3:
        push    0x0
        push    0x200
        call    FUN_006f3c80
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esi + ebx], eax
        /* __emit: MSVC6 encodes mov eax,[0x007dab44] as B8 imm32, need A1 */
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        /* __emit: MSVC6 encodes xor ecx,[0x007dab40] as 81 F1 imm32, need 33 0D */
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ebp + 0x2c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      l_skip_free4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0
l_skip_free4:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp + 0x30]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + ebx], edx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 4
        test    eax, eax
        jz      l_loop_next
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_loop_next
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     l_loop_next
l_loop_end:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      l_skip_dtor
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
l_skip_dtor:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        mov     eax, 0x1
        add     esp, 0x78
        ret     0x8
    }


}
