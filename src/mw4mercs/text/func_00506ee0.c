/*
 * FUN_00506EE0 (139 B) — __thiscall array resize/realloc.
 *
 * Resizes an array of 12-byte structures. Frees old allocation if new size
 * differs from current, allocates new block, initializes each 12-byte entry
 * with sentinel values (0xFFFF, 0, 0xFFFF, 0, 0xFFFF, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void *__stdcall FUN_004084d0(int size);

__declspec(naked) void FUN_00506ee0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, [esp + 0x0c]       ; param_2 (new size)
        mov     ebx, ecx                ; this pointer

        cmp     esi, [ebx + 0x04]       ; if (param_2 == this->current_size)
        push    edi
        jz      done

        xor     edi, edi                ; edi = 0
        cmp     esi, edi                ; if (param_2 <= 0)
        jbe     free_and_zero

        mov     eax, [ebx]              ; eax = this->data
        cmp     eax, edi                ; if (data == NULL)
        jz      skip_free

        push    eax
        call    FUN_004084e0            ; free(data)
        add     esp, 4

    skip_free:
        lea     eax, [esi + esi*2]      ; eax = param_2 * 3
        shl     eax, 2                  ; eax = param_2 * 12
        push    eax
        mov     [ebx + 0x04], esi       ; this->current_size = param_2
        call    FUN_004084d0            ; malloc(param_2 * 12)
        add     esp, 4

        cmp     eax, edi                ; if (result == NULL)
        jz      store_null

        lea     edx, [esi - 1]          ; edx = param_2 - 1
        cmp     edx, edi                ; if (edx < 0)
        jl      store_ptr

        lea     esi, [edx + 1]          ; esi = param_2 (loop counter)
        lea     ecx, [eax + 0x0a]       ; ecx = &result[10] (start of last entry + 10)
        or      edx, -1                 ; edx = 0xFFFF (sentinel value)

    init_loop:
        mov     word ptr [ecx - 0x0a], dx   ; entry.field0 = 0xFFFF
        mov     word ptr [ecx - 0x08], di   ; entry.field2 = 0
        mov     word ptr [ecx - 0x06], dx   ; entry.field4 = 0xFFFF
        mov     word ptr [ecx - 0x04], di   ; entry.field6 = 0
        mov     word ptr [ecx - 0x02], dx   ; entry.field8 = 0xFFFF
        mov     word ptr [ecx], di          ; entry.fieldA = 0
        add     ecx, 0x0c                   ; advance to next entry
        dec     esi
        jnz     init_loop

        pop     edi
        pop     esi
        mov     [ebx], eax              ; this->data = result
        pop     ebx
        ret     4

    store_null:
        xor     eax, eax                ; result = NULL (fall through to store)

    store_ptr:
        pop     edi
        pop     esi
        mov     [ebx], eax              ; this->data = result
        pop     ebx
        ret     4

    free_and_zero:
        mov     ecx, [ebx]              ; ecx = this->data
        push    ecx
        call    FUN_004084e0            ; free(data)
        add     esp, 4
        mov     [ebx], edi              ; this->data = NULL

    done:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
