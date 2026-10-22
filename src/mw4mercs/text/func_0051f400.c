/*
 * FUN_0051f400 (644 B) — Campaign screen data population function.
 *
 * __stdcall, RET 0x8 (2 params). Reads a struct with fields at +0x04,
 * +0x08, +0x0C, +0x10, +0x14, +0x1C, +0x20. Iterates a linked list
 * of entries, allocates/frees buffers, copies strings, and populates
 * output arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_004c41d0(int param);
extern int __cdecl FUN_00617920(int param);
extern int __cdecl FUN_005dec20(int param);
extern int __cdecl FUN_00412740(int param);
extern void __cdecl FUN_006f4230(void *ptr);
extern void * __cdecl FUN_006f3c80(int size, int flags);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_0051f400(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x30]  ; param1

        ; Load struct fields
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x20]
        mov     ebx, dword ptr [esi + 0x0c]
        mov     ebp, dword ptr [esi + 0x08]
        mov     dword ptr [esp + 0x1c], eax   ; save field_10
        mov eax, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x10], ecx   ; save field_1c
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x14], edx   ; save field_20
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x38]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x20], ebx   ; save field_0c
        call    FUN_004c41d0

        ; Second XOR-global access
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [esi + 0x04]
        mov     dword ptr [esp + 0x24], 0x77a108
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00617920

        xor     edx, edx
        mov     dword ptr [esp + 0x10], edx
        mov     esi, dword ptr [eax + 0x18]
        cmp     esi, edx
        mov     dword ptr [ebx], edx          ; *field_0c = 0
        mov     dword ptr [edi], 0xffffffff   ; *field_14 = -1
        jz      l_after_first_check

        ; Check entry conditions
        mov     ecx, dword ptr [esi + 0x20]
        cmp     ecx, edx
        jz      l_check_type
        cmp     ecx, 0x1
        jnz     l_skip_entry

    l_check_type:
        mov     ecx, dword ptr [esi + 0x6c]
        cmp     ecx, 0x1
        jz      l_check_active
        cmp     ecx, 0x2
        jnz     l_skip_entry

    l_check_active:
        mov     cl, byte ptr [esi + 0x24]
        test    cl, cl
        jz      l_skip_entry

        ; Check sub-entry
        mov     ecx, dword ptr [eax + 0x10]
        cmp     ecx, edx
        jz      l_call_handler
        cmp     dword ptr [ecx + 0x20], 0x2
        jnz     l_call_handler

        mov     cl, byte ptr [eax + 0x14]
        mov     dword ptr [eax + 0x10], edx
        test    cl, cl
        mov     byte ptr [eax + 0x1c], 0x1

    l_call_handler:
        lea     edx, [esi + 0x10]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     ecx, esi
        call    FUN_005dec20
        mov     dword ptr [edi], eax
        xor     edx, edx
        jmp     l_after_first_check

    l_skip_entry:
        mov     cl, byte ptr [eax + 0x14]
        mov     byte ptr [eax + 0x1c], 0x1
        mov     dword ptr [eax + 0x10], edx
        test    cl, cl
        mov     dword ptr [eax + 0x18], edx
        mov     byte ptr [eax + 0x1c], 0x0

    l_after_first_check:
        ; Free old buffer if non-null
        mov     eax, dword ptr [ebp]
        cmp     eax, edx
        jz      l_alloc_empty_str
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0x0
        xor     edx, edx

    l_alloc_empty_str:
        push    edx
        push    0x80
        call    FUN_006f3c80

        ; Copy empty string (0x76b768 = "")
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x76b768
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x18]  ; saved field_20
        and     ecx, 0x3
        rep movsb

        mov     ecx, dword ptr [esp + 0x14]  ; saved field_1c
        mov     edx, dword ptr [esp + 0x2c]  ; linked list head
        sub     ecx, ebp                     ; field_1c - field_08
        sub     eax, ebp                     ; field_20 - field_08
        mov     dword ptr [esp + 0x34], 0x1  ; counter = 1
        lea     ebx, [ebp + 0x4]             ; piVar12 = field_08 + 4
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax

    l_loop_start:
        test    edx, edx
        jz      l_loop_done
        mov     ebp, dword ptr [edx]         ; iVar6 = node->data
        test    ebp, ebp
        mov     edx, dword ptr [edx + 0x4]   ; node = node->next
        mov     dword ptr [esp + 0x2c], edx
        jz      l_loop_done

        ; Check entry conditions
        mov     eax, dword ptr [ebp + 0x20]
        test    eax, eax
        jz      l_check_type2
        cmp     eax, 0x1
        jnz     l_loop_start

    l_check_type2:
        mov     eax, dword ptr [ebp + 0x6c]
        cmp     eax, 0x1
        jz      l_check_active2
        cmp     eax, 0x2
        jnz     l_loop_start

    l_check_active2:
        mov     al, byte ptr [ebp + 0x24]
        test    al, al
        jz      l_loop_start

        ; Process entry
        mov     esi, dword ptr [ebp + 0x70]
        mov     eax, dword ptr [ebx]
        xor     edx, edx
        test    esi, esi
        setg    dl
        test    eax, eax
        mov     dword ptr [ecx + ebx], edx   ; has_subtitle flag
        jz      l_alloc_name
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0

    l_alloc_name:
        push    0x0
        push    0x80
        call    FUN_006f3c80

        ; Copy name string from entry+0x10
        mov     edi, dword ptr [ebp + 0x10]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb

        ; Compare name with previous entry
        mov     eax, dword ptr [esp + 0x10]  ; prev_name
        test    eax, eax
        jz      l_advance

        mov     esi, dword ptr [ebp + 0x10]  ; current name
    l_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     l_strcmp_done
        test    cl, cl
        jz      l_strcmp_equal
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     l_strcmp_done
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_strcmp_loop

    l_strcmp_equal:
        xor     eax, eax
        jmp     l_strcmp_result

    l_strcmp_done:
        sbb     eax, eax
        sbb     eax, -0x1

    l_strcmp_result:
        test    eax, eax
        jnz     l_advance

        ; Names match - update output
        mov     eax, dword ptr [esp + 0x1c]  ; field_10
        mov     ecx, dword ptr [esp + 0x34]  ; counter
        mov     dword ptr [eax], ecx

    l_advance:
        mov     ecx, dword ptr [esp + 0x34]  ; counter
        mov     edx, dword ptr [ebp + 0x20]  ; entry type
        mov     eax, dword ptr [esp + 0x18]  ; field_20 - field_08
        inc     ecx
        mov     dword ptr [eax + ebx], edx   ; store type
        mov     edx, dword ptr [esp + 0x2c]  ; next node
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x14]  ; field_1c - field_08
        add     ebx, 0x4
        jmp     l_loop_start

    l_loop_done:
        mov     ecx, dword ptr [esp + 0x20]  ; saved field_0c
        mov     edx, dword ptr [esp + 0x34]  ; counter
        pop     edi
        pop     esi
        mov     dword ptr [ecx], edx          ; *field_0c = counter
        mov     eax, dword ptr [esp + 0x8]   ; param1 (stack cleanup)
        test    eax, eax
        pop     ebp
        pop     ebx
        jz      l_return

        ; Decrement refcount at end of buffer
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_return:
        mov     eax, 0x1
        add     esp, 0x20
        ret     0x8
    }


}
