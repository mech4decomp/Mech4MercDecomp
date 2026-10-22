/*
 * FUN_0052bc80 (404 B) — Team data initialization function (__thiscall).
 * Initializes a large structure with default values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004d3280(int param);
extern void __fastcall FUN_0052b480(int param);
extern void *__stdcall FUN_00704a80(int a, int b, int c, int d);
extern void __stdcall FUN_004084e0(int ptr);

extern int DAT_007b4678;
extern int DAT_007b4674;

__declspec(naked) void __fastcall FUN_0052bc80(void *param1)
{
    

extern int DAT_007b4678;
extern int DAT_007b4674;
__asm {
mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d3280

        /* MOV EDX,dword ptr [0x007b4678] */
        mov edx, dword ptr [DAT_007b4678]

        xor     ebx, ebx
        mov     eax, 1
        or      ebp, 0xffffffff
        mov     ecx, 100
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x44], eax
        mov     dword ptr [esi + 0x4c], ecx
        mov     dword ptr [esi + 0x54], ecx
        mov     dword ptr [esi + 0x58], eax
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x74], eax

        /* MOV EAX,[0x007b4674] */
        mov eax, dword ptr [DAT_007b4674]

        mov     dword ptr [esi + 0x8c], ecx
        lea     ecx, [esi + 0xec]
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [esi + 0x80], ebx
        mov     dword ptr [esi + 0x78], edx
        mov     dword ptr [esi + 0x7c], eax
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x90], 0x2160ec0
        mov     dword ptr [esi + 0xbc], ebp
        mov     dword ptr [esi + 0xc4], ebp
        mov     dword ptr [esi + 0xcc], 0xf7ffffff
        mov     dword ptr [esi + 0xd4], ebp
        mov     dword ptr [esi + 0xdc], ebp
        mov     dword ptr [esi + 0xc0], ebp
        mov     dword ptr [esi + 0xc8], ebp
        mov     dword ptr [esi + 0xd0], ebp
        mov     dword ptr [esi + 0xd8], ebp
        mov     dword ptr [esi + 0xe0], ebp
        mov     dword ptr [esi + 0x94], 10
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0x9c], 0x3c
        mov     dword ptr [esi + 0xa0], ebx
        mov     dword ptr [esi + 0xa4], ebx
        mov     dword ptr [esi + 0xa8], ebx
        mov     dword ptr [esi + 0xac], ebx
        mov     dword ptr [esi + 0xe4], ebx
        mov     dword ptr [esi + 0xe8], 8
        mov     dword ptr [esi + 0xb0], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     dword ptr [esi + 0xb8], ebx
        xor     edi, edi
        mov     dword ptr [esp + 0x14], ecx

    l_loop:
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        call    FUN_0052b480
        mov     ecx, dword ptr [esp + 0x14]
        inc     edi
        add     ecx, 0x50
        cmp     edi, 8
        mov     dword ptr [esp + 0x14], ecx
        jl      l_loop

        push    ebx
        push    ebx
        push    ebx
        push    4
        mov     dword ptr [esi + 0x36c], ebx
        mov     dword ptr [esi + 0x370], ebx
        call    FUN_00704a80
        cmp     eax, ebx
        jz      l_done

        mov     edi, eax
        xor     eax, eax
        mov     ecx, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [esi + 0x6f8]
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }


}
