/*
 * FUN_00599050 (140 B) — __thiscall method, RET 8 (2 stack params).
 *
 * Tree/map node removal operation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00599130(void);
extern int __cdecl FUN_00599180(void);
extern int __cdecl FUN_005990E0(void);
extern int __cdecl FUN_005995C0(void);

__declspec(naked) void FUN_00599050(void)
{
    
__asm {
push    ebx
        mov     ebx, [esp + 0x0C]           ; ebx = param2
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        mov     eax, [edi]                  ; eax = this->field_0
        mov     ecx, [esp + 0x10]           ; ecx = param1
        cmp     ecx, [eax + 8]              ; compare param1 with node->field_8
        jne     L_find_path
        cmp     ebx, eax                    ; compare param2 with node
        jne     L_find_path

        ; Match found - remove node
        mov     ecx, [edi + 4]              ; ecx = this->field_4
        test    ecx, ecx
        je      L_done

    L_traverse_children:
        mov     esi, [eax + 4]              ; esi = node->field_4 (child list)
        test    esi, esi
        je      L_reset_root

    L_process_child:
        mov     eax, [esi + 0x0C]           ; eax = child->field_C
        push    eax
        mov     ecx, edi
        call    FUN_00599130                ; recursive remove
        mov     ebx, [esi + 8]              ; ebx = child->field_8 (next sibling)
        push    esi
        mov     ecx, edi
        call    FUN_00599180                ; free child node
        test    ebx, ebx
        mov     esi, ebx
        jne     L_process_child

    L_reset_root:
        mov     eax, [edi]                  ; reset root node
        mov     [eax + 8], eax              ; root->field_8 = root (self-loop)
        mov     dword ptr [eax + 4], 0      ; root->field_4 = 0
        mov     [eax + 0x0C], eax           ; root->field_C = root (self-loop)
        mov     dword ptr [edi + 4], 0      ; this->field_4 = 0
        pop     edi
        pop     esi
        pop     ebx
        ret     8

    L_find_path:
        cmp     ecx, ebx                    ; compare param1 with param2
        je      L_done

    L_find_loop:
        push    ecx
        mov     esi, esp                    ; esi points to param1 on stack
        push    0
        lea     ecx, [esp + 0x1C]           ; address of local
        push    ecx
        lea     ecx, [esp + 0x1C]
        call    FUN_005990E0                ; find node
        mov     edx, [eax]                  ; get value
        mov     ecx, edi
        mov     [esi], edx                  ; store on stack
        call    FUN_005995C0                ; insert/replace
        cmp     [esp + 0x10], ebx           ; compare param1 with param2
        jne     L_find_loop

    L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }


}
