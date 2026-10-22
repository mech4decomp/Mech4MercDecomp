/*
 * FUN_00561e70 (642 B) — __thiscall tree/container insertion function.
 * RET 0xC (3 params). Similar to FUN_00561af0 with different callees.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_004084e0(void *ptr);
extern int __cdecl FUN_004114b0(void);
extern int __cdecl FUN_00411670(void);
extern int __cdecl FUN_00562100(void);
extern int __cdecl FUN_00562510(void);
extern int __cdecl FUN_00562670(void);
extern int __cdecl FUN_00562a70(void);
extern int __cdecl FUN_00562ae0(void);
extern int __cdecl FUN_00562b00(void);

__declspec(naked) void FUN_00561e70(void)
{
    

__asm {
sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, [esp + 0x44]
        push    esi
        mov     esi, ecx
        mov     eax, [esi]
        cmp     ebp, [eax + 8]
        push    edi
        jnz     case_not_head
        ; case: param_2 == head->field_8
        mov     ecx, [esi + 4]
        test    ecx, ecx
        mov     ebx, [esp + 0x50]
        jbe     walk_tree
        mov     ecx, [ebx]
        mov     edx, [ebp + 0x10]
        cmp     ecx, edx
        jge     walk_tree
        cmp     ebp, eax
        jz      insert_common
        test    ebp, ebp
        jnz     insert_common
        mov     eax, edx
        cmp     ecx, eax
        jl      insert_common
        push    ebx
        mov     ecx, esi
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, [esi]
        mov     ecx, [eax + 0xc]
        test    ecx, ecx
        /* __emit: reference is MOV [0x0C],EDI (89 3D 0C 00 00 00) — a literal
           small-address store, not a relocatable extern; MSVC6 would emit a
           relocation for [DAT_0000000c], so emit the exact literal bytes. */
        __emit 0x89
        __emit 0x3D
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     link_node_early
        mov     [eax + 0xc], edi
        jmp     link_node_early
    insert_common:
        push    ebx
        mov     ecx, esi
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, [esi]
        cmp     ebp, eax
        mov     [ebp + 8], edi
        jnz     check_head_right
        mov     [eax + 4], edi
        mov     [eax + 0xc], edi
        jmp     link_node_early
    check_head_right:
        cmp     ebp, [eax + 8]
        jnz     link_node_early
        mov     [eax + 8], edi
    link_node_early:
        mov     [edi + 4], ebp
    link_node:
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     [edi + 8], ecx
        mov     [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, [esi + 4]
        add     esp, 8
        inc     eax
        mov     [esi + 4], eax
        mov     eax, [esp + 0x48]
        mov     [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
    walk_tree:
        mov     edi, [eax + 4]
        test    edi, edi
        mov     ebp, eax
        mov     al, 1
        jz      tree_search_done
        mov     ecx, [ebx]
    tree_search_loop:
        cmp     ecx, [edi + 0x10]
        setl    al
        test    al, al
        mov     ebp, edi
        jz      go_right
        mov     edi, [edi + 8]
        jmp     check_next
    go_right:
        mov     edi, [edi + 0xc]
    check_next:
        test    edi, edi
        jnz     tree_search_loop
    tree_search_done:
        test    al, al
        mov     [esp + 0x14], ebp
        jz      check_key
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_00562100
        mov     ecx, [esp + 0x14]
        cmp     ecx, [eax]
        jnz     call_114b0
        lea     edx, [esp + 0x50]
        push    edx
        push    ebx
        push    ebp
        push    edi
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x64], 1
        call    FUN_00562510
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     do_insert
    call_114b0:
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_004114b0
        add     esp, 4
    check_key:
        mov     edx, [esp + 0x14]
        mov     eax, [edx + 0x10]
        cmp     eax, [ebx]
        jge     check_other
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x60], 1
        call    FUN_00562510
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     do_insert
    check_other:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x14]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0
        lea     ecx, [esp + 0x44]
    do_insert:
        call    FUN_00562ae0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00562b00
        mov     eax, [esp + 0x48]
        mov     edx, [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    case_not_head:
        cmp     ebp, eax
        jnz     case_other
        ; case: param_2 == head
        mov     ebx, [eax + 0xc]
        mov     ecx, [esp + 0x50]
        mov     edx, [ecx]
        mov     edi, [ebx + 0x10]
        cmp     edi, edx
        jge     call_62670
        cmp     ebx, eax
        jz      insert_right
        mov     eax, edi
        cmp     edx, eax
        jl      insert_right
        push    ecx
        mov     ecx, esi
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, [esi]
        cmp     ebx, [eax + 0xc]
        mov     [ebx + 0xc], edi
        jnz     link_node2
        mov     [eax + 0xc], edi
        mov     [edi + 4], ebx
        jmp     link_node
    insert_right:
        push    ecx
        mov     ecx, esi
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, [esi]
        cmp     ebx, eax
        mov     [ebx + 8], edi
        jnz     check_head_right2
        mov     [eax + 4], edi
        mov     [eax + 0xc], edi
        mov     [edi + 4], ebx
        jmp     link_node
    check_head_right2:
        cmp     ebx, [eax + 8]
        jnz     link_node2
        mov     [eax + 8], edi
    link_node2:
        mov     [edi + 4], ebx
        jmp     link_node
    call_62670:
        push    ecx
        lea     eax, [esp + 0x40]
        push    eax
        jmp     do_62670
    case_other:
        lea     edx, [esp + 0x4c]
        push    edx
        mov     [esp + 0x50], ebp
        call    FUN_004114b0
        mov     eax, [esp + 0x54]
        mov     edx, [esp + 0x50]
        mov     ecx, [eax]
        mov     edi, [edx + 0x10]
        add     esp, 4
        cmp     edi, ecx
        jge     call_62670_2
        cmp     ecx, [ebp + 0x10]
        jge     call_62670_2
        mov     ecx, [edx + 0xc]
        test    ecx, ecx
        push    eax
        jnz     insert_other2
        push    edx
        push    0
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00562510
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    insert_other2:
        push    ebp
        push    ebp
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_00562510
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    call_62670_2:
        push    eax
        lea     edx, [esp + 0x40]
        push    edx
    do_62670:
        mov     ecx, esi
        call    FUN_00562670
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }


}
