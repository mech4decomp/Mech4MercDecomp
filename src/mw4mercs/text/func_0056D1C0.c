/*
 * FUN_0056D1C0 (354 B) ??? Call virtual method on AI group members.
 *
 * Takes a group identifier, finds all AI objects in the group that
 * match criteria, and calls a virtual method (vtable+0x1C4) on each.
 *
 * __cdecl (1 param: int* groupId).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0056D1C0(void)
{
    

extern void __cdecl FUN_0058106f(void);
extern void __cdecl FUN_100566c42(void);
extern void __cdecl FUN_0064e5b8(void);
extern void __cdecl FUN_0064e4e8(void);
extern void __cdecl FUN_0064e09f(void);
extern void __cdecl FUN_0064e096(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca9c(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517e(void);
extern int DAT_007f23d8;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_00581102(void);
extern void __cdecl FUN_0064dfe8(void);
extern void __cdecl FUN_100408392(void);
__asm {
sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x0c], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        jz      label_normal_path
        lea     eax, [esp + 0x0c]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_0058106f
        add     esp, 8
        jmp     label_done_collect

label_normal_path:
        call FUN_100566c42
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b8
        test    al, al
        jz      label_done_collect
        push    esi
        mov     ecx, edi
        call FUN_0064e4e8
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e09f
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call FUN_0064e096
        cmp     edi, dword ptr [eax + 4]
        jz      label_done_collect

label_iterate:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fca9c
        mov     esi, eax
        test    esi, esi
        jz      label_next_entry
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     label_next_entry
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041517e
        cmp     al, 1
        jnz     label_next_entry
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      label_next_entry
        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_100415162
        cmp     al, 1
        jnz     label_next_entry
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     label_next_entry
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      label_grow_list
        test    eax, eax
        jz      label_skip_store
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x10]
label_skip_store:
        add     eax, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     label_next_entry

label_grow_list:
        push    1
        lea     ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_00581102

label_next_entry:
        mov     ecx, ebp
        add     edi, 4
        call FUN_0064dfe8
        cmp     edi, dword ptr [eax + 4]
        jnz     label_iterate

label_done_collect:
        mov     esi, dword ptr [esp + 0x0c]
        cmp     esi, dword ptr [esp + 0x10]
        jz      label_free_list

label_call_loop:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c4]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     label_call_loop
        mov     esi, dword ptr [esp + 0x0c]

label_free_list:
        test    esi, esi
        jz      label_return
        push    esi
        call FUN_100408392
        add     esp, 4

label_return:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret
    }


}
