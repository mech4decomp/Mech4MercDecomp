/*
 * FUN_005477a0 (447 B) — Archive entry lookup / iterator helper.
 *
 * Searches a linked list of entries (via FUN_00416cc0) for a matching
 * param_2 (index), then checks param_1 (key). Creates/destroys a
 * temporary object via FUN_004084d0/FUN_00416bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __stdcall FUN_004084d0(int size);
extern void FUN_00416bc0(void);
extern int FUN_00416cc0(void);
extern void FUN_004d1f10(void);
extern int __stdcall FUN_004da8d0(void *out, void *in);
extern void FUN_004d21c0(void);

__declspec(naked) int __stdcall FUN_005477a0(int param1, int param2)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
/* 0x005477A0: mov eax, dword ptr [0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]

        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        push    edi

        /* 0x005477AE: mov edi, dword ptr [0x007dab40] */
        mov edi, dword ptr [DAT_007dab40]

        push    0x14
        xor     esi, edi
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      l_alloc_fail1
        mov     ecx, dword ptr [esi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x8c]
        add     edx, 0x10
        push    edx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        jmp     l_alloc_done1
l_alloc_fail1:
        xor     edi, edi
l_alloc_done1:
        mov     ecx, edi
        call    FUN_00416cc0
        mov     ebx, dword ptr [esp + 0x5c]
        mov     ebp, dword ptr [esp + 0x58]
        mov     esi, eax
        test    esi, esi
        jz      l_loop1_done
l_loop1_top:
        cmp     dword ptr [esi + 0x20], ebx
        jnz     l_loop1_next
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f10
        mov     ax, word ptr [esi + 0x10]
        mov     cx, word ptr [esi + 0x12]
        lea     edx, [esp + 0x5c]
        mov     word ptr [esp + 0x5c], ax
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x66], cx
        call    FUN_004da8d0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx + 0x30]
        add     esp, 0x8
        cmp     eax, ebp
        jz      l_found1
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
l_loop1_next:
        mov     ecx, edi
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     l_loop1_top
l_loop1_done:
        test    edi, edi
        jz      l_skip_delete1
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
l_skip_delete1:
        /* 0x0054785E: mov ecx, dword ptr [0x007dab44] */
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        /* 0x00547866: xor edx, dword ptr [0x007dab40] */
        xor edx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x88]
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      l_alloc_fail2
        add     esi, 0x10
        push    esi
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        jmp     l_alloc_done2
l_found1:
        /* 0x0054789D: found1 path - interleaved here */
        test    edi, edi
        jz      l_skip_delete1b
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
l_skip_delete1b:
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x44
        ret     0x8

l_alloc_fail2:
        xor     edi, edi
l_alloc_done2:
        mov     ecx, edi
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      l_loop2_done
l_loop2_top:
        cmp     dword ptr [esi + 0x20], ebx
        jnz     l_loop2_next
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f10
        mov     cx, word ptr [esi + 0x10]
        mov     dx, word ptr [esi + 0x12]
        lea     eax, [esp + 0x5c]
        mov     word ptr [esp + 0x5c], cx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     word ptr [esp + 0x66], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edx + 0x30]
        add     esp, 0x8
        cmp     eax, ebp
        jz      l_found2
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
l_loop2_next:
        mov     ecx, edi
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     l_loop2_top
l_loop2_done:
        test    edi, edi
        jz      l_skip_delete2
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
l_skip_delete2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x44
        ret     0x8

l_found2:
        test    edi, edi
        jz      l_skip_delete2b
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
l_skip_delete2b:
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x44
        ret     0x8
    }


}
