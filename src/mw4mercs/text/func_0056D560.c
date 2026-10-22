/*
 * FUN_0056D560 (627 B) ??? Process AI group timer/combat logic.
 *
 * Takes a group identifier, finds matching AI objects, checks
 * timing and combat conditions, and pushes a result (0 or 1)
 * onto a global stack.
 *
 * __cdecl (1 param: uint groupId).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0056D560(void)
{
    

extern void __cdecl FUN_00580599(void);
extern void __cdecl FUN_00580b9c(void);
extern void __cdecl FUN_100566c2f(void);
extern void __cdecl FUN_0064e5a5(void);
extern void __cdecl FUN_0064e4d5(void);
extern void __cdecl FUN_0064e08c(void);
extern void __cdecl FUN_0064e083(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca8a(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041516b(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_10041514f(void);
extern void __cdecl FUN_005808ff(void);
extern void __cdecl FUN_0064dff5(void);
extern void __cdecl FUN_00707d42(void);
extern int DAT_0077f684;
extern void __cdecl FUN_1004fc9b8(void);
extern int DAT_0080592c;
extern int DAT_00805928;
extern void __cdecl FUN_100562e6c(void);
extern void __cdecl FUN_005803cb(void);
extern void __cdecl FUN_100562e1e(void);
extern void __cdecl FUN_005803f1(void);
__asm {
sub     esp, 0x14
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x18], 0
        call FUN_00580599
        mov     esi, dword ptr [esp + 0x24]
        test    esi, 0xf00000
        jz      label_normal_path
        lea     edx, [esp + 0x14]
        push    edx
        add     esi, 0xff100000
        push    esi
        call FUN_00580b9c
        add     esp, 8
        jmp     label_done_collect

label_normal_path:
        call FUN_100566c2f
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5a5
        test    al, al
        jz      label_done_collect
        push    esi
        mov     ecx, edi
        call FUN_0064e4d5
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e08c
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call FUN_0064e083
        cmp     edi, dword ptr [eax + 4]
        jz      label_done_collect

label_iterate:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call FUN_1004fca8a
        mov     esi, eax
        test    esi, esi
        jz      label_next_entry
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jnz     label_next_entry
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041516b
        cmp     al, 1
        jnz     label_next_entry
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      label_next_entry
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041514f
        cmp     al, 1
        jnz     label_next_entry
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     label_next_entry
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x28], esi
        call FUN_005808ff

label_next_entry:
        mov     ecx, ebp
        add     edi, 4
        call FUN_0064dff5
        cmp     edi, dword ptr [eax + 4]
        jnz     label_iterate

label_done_collect:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [esp + 0x18]
        mov     ebp, eax
        jz      label_no_match

label_check_loop:
        mov     edi, dword ptr [ebp]
        push    0
        call FUN_00707d42
        fsub dword ptr [DAT_0077f684]
        fld     dword ptr [edi + 0x1d8]
        fcompp
        fnstsw ax
        test    ah, 0x41
        jnz     label_continue_loop
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        xor     edx, 0x85739531
        jz      label_continue_loop
        mov     ecx, dword ptr [edi + 0x1d4]
        cmp     ecx, -1
        jz      label_continue_loop
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call FUN_1004fc9b8
        mov     esi, eax
        test    esi, esi
        jz      label_continue_loop
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 1
        cmp     al, 1
        jz      label_continue_loop
        mov     ecx, dword ptr [edi + 0x170]
        cmp     esi, ecx
        jz      label_continue_loop
        test    ecx, ecx
        jz      label_match_found
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [esp + 0x24]
        cmp     eax, ecx
        jnz     label_match_found
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0xc8]
        cmp     al, 1
        jnz     label_match_found

label_continue_loop:
        mov     eax, dword ptr [esp + 0x18]
        add     ebp, 4
        cmp     ebp, eax
        jz      label_no_match
        jmp     label_check_loop

label_match_found:
        mov esi, dword ptr [DAT_0080592c]
        mov eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      label_skip_grow1
        push    0
        call FUN_100562e6c
        add     esp, 4

label_skip_grow1:
        mov     dword ptr [esi], 1
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call FUN_005803cb
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret

label_no_match:
        mov esi, dword ptr [DAT_0080592c]
        mov edx, dword ptr [DAT_00805928]
        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx
        mov dword ptr [DAT_0080592c], esi
        jc      label_skip_grow2
        push    0
        call FUN_100562e1e
        add     esp, 4

label_skip_grow2:
        mov     dword ptr [esi], 0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call FUN_005803f1
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret
    }


}
