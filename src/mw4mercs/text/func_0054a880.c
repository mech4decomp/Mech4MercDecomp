/*
 * FUN_0054a880 (1209 B) — Large struct initialization (__thiscall).
 *
 * ECX = this (large struct ~2.3KB). Stack param: some byte flag.
 * Initializes many fields, calls sub-initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_0041fcb0(void *this);
extern int __stdcall FUN_0041ac80(void *this, void *src);
extern int __stdcall FUN_00417ad0(void *this);
extern int __stdcall FUN_00766c60(void *a, void *b);

__declspec(naked) void __fastcall FUN_0054a880(void *this)
{
    

extern int DAT_007dd268;
extern int DAT_007dc6b4;
extern int DAT_007b8d8c;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
__asm {
sub     esp, 0x18
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        xor     ebx, ebx
        mov     edi, eax

        /* 0x0054A895: mov eax, [0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]

        cmp     eax, ebx
        mov     ecx, dword ptr [edi + 0x20]
        mov     edx, dword ptr [edi + 0x64]
        mov     dword ptr [esi + 0x418], ebx
        mov     dword ptr [esi + 0x420], ebx
        mov     dword ptr [esi + 0x8d4], ebx
        mov     byte ptr [esi + 0x70c], bl
        mov     dword ptr [esi + 0x41c], ebx
        mov     dword ptr [esi + 0x424], ebx
        mov     dword ptr [esi + 0x4b4], ebx
        mov     dword ptr [esi + 0x3a0], 0xbf800000
        mov     dword ptr [esi + 0x39c], 0xbf800000
        mov     dword ptr [esi + 0x548], ebx
        mov     dword ptr [esi + 0x54c], ebx
        mov     byte ptr [esi + 0x550], bl
        mov     byte ptr [esi + 0x585], bl
        mov     byte ptr [esi + 0x587], bl
        mov     dword ptr [esi + 0x4ac], ebx
        mov     dword ptr [esi + 0x8d8], 0x38100000
        mov     dword ptr [esi + 0x55c], ecx
        mov     dword ptr [esi + 0x554], 0x3f800000
        mov     byte ptr [esi + 0x48c], bl
        mov     dword ptr [esi + 0x294], edx
        mov     dword ptr [esi + 0x344], ebx
        jz      l_no_dd268
        cmp     dword ptr [eax + 0x1c], 0x6
        jnz     l_no_dd268

        /* 0x0054A938: mov eax, [0x007dc6b4] */
        mov eax, dword ptr [DAT_007dc6b4]

        cmp     eax, ebx
        mov     byte ptr [esi + 0x8fc], 0x1
        jz      l_after_flag
        mov     byte ptr [eax + 0x2d], 0x1
        jmp     l_after_flag

l_no_dd268:
        /* 0x0054A94E: mov eax, [0x007dc6b4] */
        mov eax, dword ptr [DAT_007dc6b4]

        cmp     eax, ebx
        mov     byte ptr [esi + 0x8fc], bl
        jz      l_after_flag
        mov     byte ptr [eax + 0x2d], bl

l_after_flag:
        lea     ecx, [esi + 0x6a8]
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x3e0], ebx
        mov     dword ptr [esi + 0x3e4], ebx
        mov     dword ptr [esi + 0x3f0], ebx
        mov     dword ptr [esi + 0x3f4], ebx
        mov     dword ptr [esi + 0x560], ebx
        mov     byte ptr [esi + 0x428], bl
        mov     dword ptr [esi + 0x3d4], ebx
        mov     dword ptr [esi + 0x3d8], ebx
        mov     dword ptr [esi + 0x45c], ebx
        mov     dword ptr [esi + 0x460], ebx
        mov     dword ptr [esi + 0x464], ebx
        mov     dword ptr [esi + 0x468], ebx
        mov     dword ptr [esi + 0x3f8], ebx
        mov     dword ptr [esi + 0x3fc], ebx
        mov     dword ptr [esi + 0x400], ebx
        mov     dword ptr [esi + 0x404], ebx
        call    FUN_0041fcb0
        mov     ecx, dword ptr [edi + 0x28]
        mov     eax, dword ptr [edi + 0x24]
        mov     edx, dword ptr [edi + 0x2c]
        add     edi, 0x54
        mov     dword ptr [esi + 0x51c], ecx
        mov     dword ptr [esi + 0x38c], ebx
        mov     dword ptr [esi + 0x390], ebx
        mov     dword ptr [esi + 0x394], ebx
        mov     dword ptr [esi + 0x398], ebx
        mov     dword ptr [esi + 0x3a4], 0xbf800000
        mov     dword ptr [esi + 0x494], ebx
        mov     dword ptr [esi + 0x49c], ebx
        mov     dword ptr [esi + 0x498], ebx
        mov     dword ptr [esi + 0x4a4], ebx
        mov     dword ptr [esi + 0x4a0], ebx
        mov     byte ptr [esi + 0x4a8], 0x1
        mov     byte ptr [esi + 0x4a9], 0x1
        mov     dword ptr [esi + 0x3a8], ebx
        mov     dword ptr [esi + 0x3ac], ebx
        mov     dword ptr [esi + 0x3b0], ebx
        mov     dword ptr [esi + 0x3b4], ebx
        mov     dword ptr [esi + 0x3b8], ebx
        mov     dword ptr [esi + 0x3bc], ebx
        mov     dword ptr [esi + 0x3c0], ebx
        mov     dword ptr [esi + 0x3c4], ebx
        mov     dword ptr [esi + 0x3c8], ebx
        mov     dword ptr [esi + 0x3cc], ebx
        mov     dword ptr [esi + 0x3d0], ebx
        mov     dword ptr [esi + 0x488], ebx
        mov     dword ptr [esi + 0x46c], ebx
        mov     dword ptr [esi + 0x470], ebx
        mov     dword ptr [esi + 0x474], ebx
        mov     dword ptr [esi + 0x478], ebx
        mov     dword ptr [esi + 0x47c], ebx
        mov     dword ptr [esi + 0x480], ebx
        mov     dword ptr [esi + 0x484], ebx
        mov     dword ptr [esi + 0x408], ebx
        mov     dword ptr [esi + 0x40c], ebx
        mov     dword ptr [esi + 0x410], ebx
        mov     dword ptr [esi + 0x414], ebx
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x594], ebx
        mov     dword ptr [esi + 0x598], ebx
        mov     dword ptr [esi + 0x59c], ebx
        mov     dword ptr [esi + 0x5a0], ebx
        mov     dword ptr [esi + 0x5a4], ebx
        mov     dword ptr [esi + 0x42c], ebx
        mov     dword ptr [esi + 0x430], ebx
        mov     dword ptr [esi + 0x434], ebx
        mov     dword ptr [esi + 0x438], ebx
        mov     dword ptr [esi + 0x43c], ebx
        mov     dword ptr [esi + 0x440], ebx
        mov     dword ptr [esi + 0x444], ebx
        mov     dword ptr [esi + 0x448], ebx
        mov     dword ptr [esi + 0x44c], ebx
        mov     dword ptr [esi + 0x450], ebx
        mov     dword ptr [esi + 0x454], ebx
        mov     dword ptr [esi + 0x458], ebx
        mov     dword ptr [esi + 0x518], eax
        mov     dword ptr [esi + 0x520], edx
        push    edi
        lea     ecx, [esi + 0x524]
        call    FUN_0041ac80

        /* 0x0054AB3F: mov ecx, [0x007b8d8c] */
        mov ecx, dword ptr [DAT_007b8d8c]

        /* 0x0054AB45: mov eax, [0x007b8d88] */
        mov eax, dword ptr [DAT_007b8d88]

        /* 0x0054AB4A: mov edx, [0x007b8d90] */
        mov edx, dword ptr [DAT_007b8d90]

        mov     dword ptr [esi + 0x538], ecx
        lea     ecx, [esi + 0x758]
        mov     dword ptr [esi + 0x5a8], ebx
        mov     dword ptr [esi + 0x624], ebx
        mov     dword ptr [esi + 0x628], ebx
        mov     dword ptr [esi + 0x62c], ebx
        mov     dword ptr [esi + 0x630], ebx
        mov     dword ptr [esi + 0x558], ebx
        mov     dword ptr [esi + 0x534], eax
        mov     dword ptr [esi + 0x53c], edx
        mov     dword ptr [esi + 0x540], ebx
        mov     dword ptr [esi + 0x544], ebx
        mov     byte ptr [esi + 0x740], bl
        mov     dword ptr [esi + 0x754], ebx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x760]
        call    FUN_0041fcb0

        /* 0x0054ABB4: mov ecx, [0x007b8d8c] */
        mov ecx, dword ptr [DAT_007b8d8c]

        /* 0x0054ABBA: mov eax, [0x007b8d88] */
        mov eax, dword ptr [DAT_007b8d88]

        /* 0x0054ABBF: mov edx, [0x007b8d90] */
        mov edx, dword ptr [DAT_007b8d90]

        mov     dword ptr [esi + 0x76c], ecx
        lea     ecx, [esi + 0x820]
        mov     dword ptr [esi + 0x768], eax
        mov     dword ptr [esi + 0x770], edx
        mov     byte ptr [esi + 0x741], bl
        mov     dword ptr [esi + 0x81c], ebx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x828]
        call    FUN_0041fcb0

        /* 0x0054ABF9: mov eax, [0x007b8d88] */
        mov eax, dword ptr [DAT_007b8d88]

        /* 0x0054ABFE: mov ecx, [0x007b8d8c] */
        mov ecx, dword ptr [DAT_007b8d8c]

        /* 0x0054AC04: mov edx, [0x007b8d90] */
        mov edx, dword ptr [DAT_007b8d90]

        mov     dword ptr [esi + 0x830], eax
        lea     eax, [esi + 0x2f0]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi + 0x834], ecx
        mov     dword ptr [esi + 0x838], edx
        mov     dword ptr [esi + 0x36c], ebx
        mov     dword ptr [esi + 0x370], ebx
        mov     dword ptr [esi + 0x374], ebx
        mov     dword ptr [esi + 0x378], ebx
        mov     dword ptr [esi + 0x37c], ebx
        mov     dword ptr [esi + 0x380], ebx
        mov     dword ptr [esi + 0x6c0], ebx
        mov     dword ptr [esi + 0x6c4], ebx
        mov     byte ptr [esi + 0x589], bl
        mov     dword ptr [esi + 0x2f8], ebx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], 0x77d010
l_traverse_loop:
        cmp     eax, ebx
        jz      l_traverse_done
        mov     edi, dword ptr [eax]
        cmp     edi, ebx
        jz      l_traverse_done
        lea     ecx, [esp + 0xc]
        call    FUN_00417ad0
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        jmp     l_traverse_loop
l_traverse_done:
        lea     edi, [esi + 0x278]
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 4], ebx
        mov     dword ptr [edi + 8], ebx
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x3f800000
        call    FUN_00766c60
        mov     edx, dword ptr [esi + 0x384]
        lea     eax, [esi + 0x2c4]
        mov     ecx, 0x3f800000
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [esi + 0x290], ecx
        mov     ecx, dword ptr [esi + 0xe0]
        push    ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [esi + 0x29c], eax
        mov     eax, dword ptr [ecx]
        push    0x2
        mov     dword ptr [esi + 0x298], edi
        mov     dword ptr [esi + 0x2ac], 0x2000
        mov     dword ptr [esi + 0x2a8], edx
        mov     byte ptr [esi + 0x32c], bl
        call    dword ptr [eax + 4]
        pop     edi
        mov     byte ptr [esi + 0x934], bl
        mov     dword ptr [esi + 0x308], ebx
        mov     dword ptr [esi + 0x30c], ebx
        mov     dword ptr [esi + 0x310], ebx
        mov     dword ptr [esi + 0x314], ebx
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     0x4
    }


}
