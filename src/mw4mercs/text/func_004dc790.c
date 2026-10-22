#include <windows.h>

extern int g_7db0b0;
extern int g_7b8810;
extern int g_76b2ac;
extern int g_7dc83c;
extern void *g_76cd64;
extern char g_77378c[];
extern char g_773784[];
extern char g_77377c[];
extern char g_773748[];
extern char g_773704[];

extern void __cdecl FUN_004D2000(void);
extern char __cdecl FUN_004D24F0(void);
extern char __cdecl FUN_004D2630(void);
extern void __cdecl FUN_004D2840(void);
extern void *__cdecl FUN_004084C0(int, int);
extern void __cdecl FUN_004C41D0(void);
extern void __cdecl FUN_00417A40(void);
extern void __cdecl FUN_0040ECC0(void);
extern void __cdecl FUN_0041EE70(void);
extern void *__cdecl FUN_004084D0(int);
extern void __cdecl FUN_004DCBF0(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_004DC4E0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411A80(void);
extern int __cdecl FUN_00504CE0(void);
extern int __cdecl FUN_006FAB90(const char *, ...);
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004D2680(void);
extern void __cdecl FUN_0041EF60(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_004DCB10(void);

__declspec(naked) void __cdecl FUN_004DC790(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx]
        push    edi
        xor     edi, edi
        push    edi
        push    eax
        lea     ecx, [ebp - 0x94]
        call    FUN_004D2000
        cmp     dword ptr [ebp - 0x58], edi
        jz      l_else
        cmp     dword ptr [ebp - 0x78], edi
        jbe     l_else
        lea     ecx, [ebp - 0x94]
        call    FUN_004D24F0
        test    al, al
        jz      l_else
        lea     ecx, [ebp - 0x94]
        call    FUN_004D2630
        test    al, al
        jnz     l_done
        mov     ecx, dword ptr [g_7db0b0]
        push    ecx
        lea     ecx, [ebp - 0x94]
        call    FUN_004D2840
        jmp     l_done
    l_else:
        mov     edx, dword ptr [g_7b8810]
        push    esi
        push    edx
        push    0xc
        call    FUN_004084C0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, edi
        jz      l_alloc_null
        lea     eax, [ebx + 0x44]
        push    eax
        mov     ecx, esi
        call    FUN_004C41D0
        mov     dword ptr [esi], offset g_76cd64
        mov     dword ptr [ebp - 0xc], esi
        jmp     l_after_alloc
    l_alloc_null:
        mov     dword ptr [ebp - 0xc], edi
    l_after_alloc:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ecx + 0x4]
        call    FUN_00417A40
        push    offset g_77378c
        mov     ecx, ebx
        mov     esi, eax
        call    FUN_0040ECC0
        test    eax, eax
        setnz   dl
        push    edi
        lea     ecx, [ebp - 0x4c]
        and     edx, 0xff
        sub     esi, edx
        mov     dword ptr [ebp - 0x8], esi
        call    FUN_0041EE70
        mov     edx, dword ptr [ebp - 0x4c]
        push    0x4
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0x4c]
        call    dword ptr [edx + 0x24]
        lea     eax, [ebp - 0x4c]
        push    0x8
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0x14], offset FUN_004DCB10
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      l_alloc2_null
        mov     eax, dword ptr [ebp - 0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], edi
        call    FUN_004DCBF0
        mov     dword ptr [ebp - 0x18], esi
        jmp     l_after_alloc2
    l_alloc2_null:
        mov     dword ptr [ebp - 0x18], edi
    l_after_alloc2:
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     ecx, edi
        jz      l_no_node
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x8], ecx
        jmp     l_after_node
    l_no_node:
        xor     eax, eax
    l_after_node:
        cmp     eax, edi
        mov     dword ptr [ebp - 0x1c], eax
        jz      l_after_loop
        mov     eax, dword ptr [eax + 0x14]
        push    offset g_77378c
        push    eax
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      l_after_alloc2
        mov     ecx, dword ptr [ebp - 0x1c]
        push    0x1
        lea     edx, [ebp - 0x50]
        push    edx
        push    offset g_773784
        call    FUN_00411BF0
        mov     esi, dword ptr [ebp - 0x38]
        mov     ebx, dword ptr [ebp - 0x3c]
        mov     edx, dword ptr [ebp - 0x4c]
        push    0x4
        lea     eax, [ebp - 0x10]
        push    eax
        lea     ecx, [ebp - 0x4c]
        sub     esi, ebx
        mov     dword ptr [ebp - 0x10], edi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x24]
        push    ecx
        push    edx
        call    FUN_004DC4E0
        mov     edi, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x34]
        mov     ebx, eax
        mov     eax, dword ptr [ebp - 0x3c]
        sub     edi, eax
        add     eax, esi
        add     esp, 0xc
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x38], eax
        jbe     l_skip1
        mov     dword ptr [ebp - 0x34], eax
    l_skip1:
        mov     edx, dword ptr [ebp - 0x4c]
        push    0x4
        lea     ecx, [ebp - 0x10]
        mov     eax, edi
        sub     eax, esi
        push    ecx
        lea     ecx, [ebp - 0x4c]
        mov     dword ptr [ebp - 0x10], eax
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [ebp - 0x34]
        add     eax, edi
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x38], eax
        jbe     l_skip2
        mov     dword ptr [ebp - 0x34], eax
    l_skip2:
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x18]
        mov     ecx, eax
        inc     eax
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [edx]
        lea     esi, [eax + ecx * 0x8]
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ecx + 0x14]
        push    edx
        lea     ecx, [esi + 0x4]
        call    FUN_00412780
        mov     dword ptr [esi], ebx
        mov     ebx, dword ptr [ebp + 0x10]
        xor     edi, edi
        jmp     l_after_alloc2
    l_after_loop:
        push    offset g_77378c
        mov     ecx, ebx
        call    FUN_0040ECC0
        cmp     eax, edi
        mov     dword ptr [ebp - 0x4], 0xffffffff
        jz      l_after_child
        push    offset g_77377c
        mov     ecx, eax
        call    FUN_00411A80
        mov     esi, eax
        mov     edi, dword ptr [esi]
        mov     dword ptr [ebp + 0x10], esi
    l_child_loop:
        test    edi, edi
        jz      l_child_done
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 0x4]
        jz      l_child_done
        mov     esi, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x18]
        push    esi
        push    eax
        push    ecx
        call    FUN_00504CE0
        add     esp, 0xc
        cmp     eax, -0x1
        mov     dword ptr [ebp - 0x4], eax
        jnz     l_child_known
        mov     edx, dword ptr [ebx]
        push    esi
        push    edx
        push    offset g_773748
        call    FUN_006FAB90
        add     esp, 0xc
        test    eax, eax
        jz      l_child_after
        int     3
        jmp     l_child_after
    l_child_known:
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_7dc83c]
        mov     eax, dword ptr [edx + eax * 0x8]
        push    ecx
        mov     ecx, eax
        call    FUN_00415230
        test    al, al
        jnz     l_child_after
        mov     edx, dword ptr [ebx]
        push    esi
        push    edx
        push    offset g_773704
        call    FUN_006FAB90
        add     esp, 0xc
        test    eax, eax
        jz      l_child_after
        int     3
    l_child_after:
        mov     edx, dword ptr [ebp - 0x4c]
        push    0x4
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x4c]
        call    dword ptr [edx + 0x24]
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        jmp     l_child_loop
    l_child_done:
        test    esi, esi
        jz      l_after_child_xor
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
    l_after_child_xor:
        xor     edi, edi
    l_after_child:
        mov     edx, dword ptr [ebp - 0x4c]
        push    0x4
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x4c]
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [ebp - 0x18]
        cmp     eax, edi
        mov     dword ptr [ebp + 0x10], eax
        jz      l_skip_free_array
        mov     ecx, dword ptr [eax]
        cmp     ecx, edi
        jz      l_skip_free_inner_after
        mov     eax, dword ptr [ecx - 0x4]
        lea     ebx, [ecx - 0x4]
        lea     ecx, [ecx + eax * 0x8]
        dec     eax
        js      l_skip_free_inner
        lea     esi, [ecx + 0x4]
        lea     edi, [eax + 0x1]
    l_free_inner_loop:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      l_free_inner_next
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_free_inner_next
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_free_inner_next:
        dec     edi
        jnz     l_free_inner_loop
    l_skip_free_inner:
        push    ebx
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free_inner_after:
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free_array:
        mov     ecx, dword ptr [ebp - 0xc]
        push    ecx
        call    FUN_004084E0
        mov     edx, dword ptr [g_7db0b0]
        add     esp, 0x4
        push    edx
        lea     eax, [ebp - 0x4c]
        push    eax
        lea     ecx, [ebp - 0x94]
        call    FUN_004D2680
        lea     ecx, [ebp - 0x4c]
        call    FUN_0041EF60
        pop     esi
    l_done:
        mov     eax, dword ptr [ebp + 0x8]
        mov     cx, word ptr [ebp - 0x54]
        mov     dx, word ptr [ebp - 0x52]
        mov     word ptr [eax], cx
        lea     ecx, [ebp - 0x94]
        mov     word ptr [eax + 0x2], dx
        call    FUN_004D21C0
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
