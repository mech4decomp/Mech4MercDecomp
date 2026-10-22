/*
 * FUN_0059E310 (147 B) — __thiscall method, plain RET.
 *
 * Iterates through a linked list and processes items (variant 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084C0(int, int);
extern int __cdecl FUN_00417A40(void);
extern int __cdecl FUN_0059DF10(void);
extern void __cdecl FUN_004084E0(int);

__declspec(naked) void FUN_0059E310(void)
{
    

extern int DAT_007b8810;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007b8810]
        push    esi
        push    edi
        push    eax
        push    0x0C                        ; size = 12
        call    FUN_004084C0                ; allocate
        add     esp, 8
        test    eax, eax
        je      L_alloc_failed

        mov     ecx, [esp + 0x14]           ; param1
        mov     edx, [ecx + 0x44]           ; ecx->field_44
        add     ecx, 0x44                   ; ecx = &ecx->field_44
        mov     [eax + 4], ecx              ; new->field_4 = &ecx->field_44
        mov     [eax + 8], edx              ; new->field_8 = ecx->field_44
        mov     dword ptr [eax], 0x76CD64   ; set vtable
        mov     esi, eax
        jmp     L_alloc_done

    L_alloc_failed:
        xor     esi, esi

    L_alloc_done:
        mov     ecx, [esi + 4]              ; ecx = esi->field_4
        call    FUN_00417A40                ; count list length
        mov     edi, [esp + 0x10]           ; param2
        push    4
        lea     ecx, [esp + 0x18]
        mov     [esp + 0x18], eax           ; store count
        mov     eax, [edi]                  ; vtable
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]      ; call vtable method

    L_process_loop:
        mov     eax, [esi + 8]              ; eax = current node
        test    eax, eax
        je      L_loop_done
        mov     ecx, [eax]                  ; ecx = node->field_0
        test    ecx, ecx
        mov     edx, [eax + 4]              ; edx = node->field_4 (next)
        mov     [esi + 8], edx              ; advance to next
        je      L_loop_done                 ; if field_0 is NULL, skip
        push    ecx
        push    edi
        call    FUN_0059DF10                ; process node
        add     esp, 8
        jmp     L_process_loop

    L_loop_done:
        mov     eax, [edi]                  ; vtable
        push    4
        lea     ecx, [esp + 0x0C]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], 0   ; clear value
        call    dword ptr [eax + 0x24]      ; call vtable method
        push    esi
        call    FUN_004084E0                ; free(esi)
        add     esp, 4
        pop     edi
        pop     esi
        pop     ecx
        ret
    }


}
