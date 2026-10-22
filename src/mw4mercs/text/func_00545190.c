/*
 * FUN_00545190 (714 B) — __thiscall, no return value.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __stdcall FUN_004084d0(int size);
extern void __fastcall FUN_004d2000(int param1, int param2);
extern void __fastcall FUN_004d2310(int param1);
extern int __fastcall FUN_00613f80(int param1, int param2);
extern int __fastcall FUN_00613930(int param1, int param2);
extern void __fastcall FUN_004d21c0(int param1);

__declspec(naked) void __fastcall FUN_00545190(void *this)
{
    __asm {
        sub     esp, 0x198
        push    esi
        push    edi
        xor     edi, edi
        push    edi
        mov     esi, ecx
        push    0x77b85c
        lea     ecx, [esp + 0x164]
        call    FUN_004d2000
        lea     ecx, [esp + 0x15c]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0x198], edi
        jz      l_block2
        cmp     dword ptr [esp + 0x178], edi
        jbe     l_block2
        mov     ecx, dword ptr [esi + 0x84]
        cmp     ecx, edi
        jz      l_alloc1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x84], edi
    l_alloc1:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc1_fail
        lea     ecx, [esp + 0x15c]
        push    ecx
        mov     ecx, eax
        call    FUN_00613f80
        jmp     l_alloc1_done
    l_alloc1_fail:
        xor     eax, eax
    l_alloc1_done:
        mov     dword ptr [esi + 0x84], eax
    l_block2:
        push    edi
        push    0x77b840
        lea     ecx, [esp + 0xdc]
        call    FUN_004d2000
        lea     ecx, [esp + 0xd4]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0x110], edi
        jz      l_block3
        cmp     dword ptr [esp + 0xf0], edi
        jbe     l_block3
        mov     ecx, dword ptr [esi + 0x88]
        cmp     ecx, edi
        jz      l_alloc2
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x88], edi
    l_alloc2:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc2_fail
        lea     ecx, [esp + 0xd4]
        push    ecx
        mov     ecx, eax
        call    FUN_00613f80
        jmp     l_alloc2_done
    l_alloc2_fail:
        xor     eax, eax
    l_alloc2_done:
        mov     dword ptr [esi + 0x88], eax
    l_block3:
        push    edi
        push    0x77b828
        lea     ecx, [esp + 0x54]
        call    FUN_004d2000
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0x88], edi
        jz      l_block4
        cmp     dword ptr [esp + 0x68], edi
        jbe     l_block4
        mov     ecx, dword ptr [esi + 0x8c]
        cmp     ecx, edi
        jz      l_alloc3
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x8c], edi
    l_alloc3:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc3_fail
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, eax
        call    FUN_00613f80
        jmp     l_alloc3_done
    l_alloc3_fail:
        xor     eax, eax
    l_alloc3_done:
        mov     dword ptr [esi + 0x8c], eax
    l_block4:
        push    edi
        push    0x77b80c
        lea     ecx, [esp + 0x10]
        call    FUN_004d2000
        lea     ecx, [esp + 0x8]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0x44], edi
        jz      l_block5
        cmp     dword ptr [esp + 0x24], edi
        jbe     l_block5
        mov     ecx, dword ptr [esi + 0x90]
        cmp     ecx, edi
        jz      l_alloc4
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x90], edi
    l_alloc4:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc4_fail
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    FUN_00613f80
        jmp     l_alloc4_done
    l_alloc4_fail:
        xor     eax, eax
    l_alloc4_done:
        mov     dword ptr [esi + 0x90], eax
    l_block5:
        push    edi
        push    0x77b7f4
        lea     ecx, [esp + 0x98]
        call    FUN_004d2000
        lea     ecx, [esp + 0x90]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0xcc], edi
        jz      l_block6
        cmp     dword ptr [esp + 0xac], edi
        jbe     l_block6
        mov     ecx, dword ptr [esi + 0x94]
        cmp     ecx, edi
        jz      l_alloc5
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x94], edi
    l_alloc5:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc5_fail
        lea     ecx, [esp + 0x90]
        push    ecx
        mov     ecx, eax
        call    FUN_00613930
        jmp     l_alloc5_done
    l_alloc5_fail:
        xor     eax, eax
    l_alloc5_done:
        mov     dword ptr [esi + 0x94], eax
    l_block6:
        push    edi
        push    0x77b7dc
        lea     ecx, [esp + 0x120]
        call    FUN_004d2000
        lea     ecx, [esp + 0x118]
        call    FUN_004d2310
        cmp     dword ptr [esp + 0x154], edi
        jz      l_cleanup
        cmp     dword ptr [esp + 0x134], edi
        jbe     l_cleanup
        mov     ecx, dword ptr [esi + 0x98]
        cmp     ecx, edi
        jz      l_alloc6
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x98], edi
    l_alloc6:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc6_fail
        lea     ecx, [esp + 0x118]
        push    ecx
        mov     ecx, eax
        call    FUN_00613930
        jmp     l_alloc6_done
    l_alloc6_fail:
        xor     eax, eax
    l_alloc6_done:
        mov     dword ptr [esi + 0x98], eax
    l_cleanup:
        lea     ecx, [esp + 0x118]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x90]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x4c]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xd4]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x15c]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        add     esp, 0x198
        ret
    }
}
