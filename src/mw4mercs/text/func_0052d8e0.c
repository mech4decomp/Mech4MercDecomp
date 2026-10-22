/*
 * FUN_0052d8e0 (641 B) — Object initialization function (__fastcall).
 * Initializes a large structure with default values and allocates buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_004084d0(int size);

extern int DAT_007b8d8c;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_008bd608;
extern int DAT_008bd604;
extern int DAT_008bd600;
extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;

__declspec(naked) void * __fastcall FUN_0052d8e0(void *param1)
{
    

extern int DAT_007b8d8c;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_008bd608;
extern int DAT_008bd604;
extern int DAT_008bd600;
extern int DAT_007afaf4;
extern int DAT_007afaf0;
extern int DAT_007afaf8;
extern int DAT_007afafc;
__asm {
push    ecx
        push    ebx
        push    esi
        push    edi
        mov     al, byte ptr [esp + 0xf]
        /* MOV EDX,dword ptr [0x007b8d8c] */
        mov edx, dword ptr [DAT_007b8d8c]

        xor     ebx, ebx
        mov     esi, ecx

        /* MOV ECX,dword ptr [0x007b8d88] */
        mov ecx, dword ptr [DAT_007b8d88]

        mov     dword ptr [esi + 0xc4], ebx
        mov     byte ptr [esi + 0xcc], al
        mov     dword ptr [esi + 0x78], ebx
        or      eax, 0xffffffff
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0xcc], ebx
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax

        /* MOV EAX,[0x007b8d90] */
        mov eax, dword ptr [DAT_007b8d90]

        mov     byte ptr [esi + 8], bl
        mov     byte ptr [esi + 9], bl
        mov     byte ptr [esi + 0xa], bl
        mov     byte ptr [esi + 0xb], bl
        mov     dword ptr [esi + 0xc8], ebx
        mov     dword ptr [esi + 0x30], eax

        /* MOV EAX,[0x008bd608] */
        mov eax, dword ptr [DAT_008bd608]

        mov     byte ptr [esi], bl
        mov     byte ptr [esi + 1], bl
        mov     byte ptr [esi + 2], bl
        mov     byte ptr [esi + 3], bl
        mov     dword ptr [esi + 0x28], ecx

        /* MOV ECX,dword ptr [0x008bd604] */
        mov ecx, dword ptr [DAT_008bd604]

        mov     byte ptr [esi + 4], bl
        mov     byte ptr [esi + 5], bl
        mov     byte ptr [esi + 6], bl
        mov     byte ptr [esi + 7], bl
        mov     dword ptr [esi + 0x3c], eax
        mov     eax, dword ptr [esi + 0x98]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x2c], edx

        /* MOV EDX,dword ptr [0x008bd600] */
        mov edx, dword ptr [DAT_008bd600]

        mov     dword ptr [esi + 0x5c], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x38], ecx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     byte ptr [esi + 0x44], bl
        mov     dword ptr [esi + 0x4c], ebx
        mov     dword ptr [esi + 0x7c], 2
        mov     dword ptr [esi + 0x80], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x8c], 0xbf800000
        mov     dword ptr [esi + 0x20], ebx
        mov     byte ptr [esi + 0xc], bl
        mov     dword ptr [esi + 0x10], 8
        mov     byte ptr [esi + 0x24], 0x5f
        mov     byte ptr [esi + 0x25], bl
        mov     byte ptr [esi + 0x26], bl
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x34], edx
        jz      l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_free1:
        push    0x50
        mov     dword ptr [esi + 0x90], 0x14
        call    FUN_004084d0
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi + 0x98], edi
        mov     edx, dword ptr [esi + 0x98]
        mov     ecx, 0x14
        rep stosd
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x9c], ebx
        mov     ecx, ebx
        mov     dword ptr [esi + 0xa0], ebx
        mov     dword ptr [edx + ecx * 4], 0x42700000
        mov     edx, dword ptr [esi + 0x94]
        mov     ecx, dword ptr [esi + 0x90]
        add     esp, 4
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x94], edx
        jc      l_skip_wrap
        mov     dword ptr [esi + 0x94], ebx

    l_skip_wrap:
        mov     eax, dword ptr [esi + 0x78]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x1c], 0x2d
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x6c], ebx
        jz      l_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_free2:
        push    0x28
        mov     dword ptr [esi + 0x70], 10
        call    FUN_004084d0

        /* MOV EDX,dword ptr [0x007afaf4] */
        mov edx, dword ptr [DAT_007afaf4]

        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi + 0x78], edi
        mov     ecx, 10
        rep stosd

        /* MOV ECX,dword ptr [0x007afaf0] */
        mov ecx, dword ptr [DAT_007afaf0]

        lea     eax, [esi + 0xa4]
        mov     dword ptr [eax], ecx

        /* MOV ECX,dword ptr [0x007afaf8] */
        mov ecx, dword ptr [DAT_007afaf8]

        mov     dword ptr [eax + 4], edx

        /* MOV EDX,dword ptr [0x007afafc] */
        mov edx, dword ptr [DAT_007afafc]

        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0xb4], ebx
        add     esp, 4
        xor     eax, eax
        lea     ecx, [esi + 0x2020]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0xc], eax
        lea     eax, [esi + 0xb3c]
        mov     ecx, 0xdd

    l_zero_loop1:
        mov     dword ptr [eax - 0x374], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax - 0xa5c], ebx
        mov     dword ptr [eax - 0x6e8], ebx
        add     eax, 4
        dec     ecx
        jnz     l_zero_loop1

        lea     eax, [esi + 0x130c]
        mov     ecx, 0x117

    l_zero_loop2:
        mov     dword ptr [eax - 0x45c], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x45c], ebx
        mov     dword ptr [eax + 0x8b8], ebx
        add     eax, 4
        dec     ecx
        jnz     l_zero_loop2

        mov     eax, dword ptr [esi + 0xc8]
        mov     edx, dword ptr [esi + 0xc4]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xd8], ebx
        mov     dword ptr [esi + 0xdc], ebx
        mov     dword ptr [esi + 0xc0], 0xbff00000
        jle     l_done

    l_copy_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     l_copy_loop

    l_done:
        pop     edi
        mov     dword ptr [esi + 0xc8], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
