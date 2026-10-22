/*
 * FUN_0056CF00 (408 B) — Set elite flag for AI group members.
 *
 * Takes a group identifier and a flag value, finds all AI objects
 * in the group that match criteria, and sets their elite flags.
 *
 * __cdecl (2 params: uint groupId, undefined4 flagValue).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0056CF00(void)
{
    

extern void __cdecl FUN_005805a6(void);
extern void __cdecl FUN_00580bab(void);
extern void __cdecl FUN_100566c3e(void);
extern void __cdecl FUN_0064e5b4(void);
extern void __cdecl FUN_0064e4e4(void);
extern void __cdecl FUN_0064e09b(void);
extern void __cdecl FUN_0064e092(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca99(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517a(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_10041515e(void);
extern void __cdecl FUN_0058125b(void);
extern void __cdecl FUN_00580c3e(void);
extern void __cdecl FUN_0064dfe4(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_10056657f(void);
extern void __cdecl FUN_006faa99(void);
extern void __cdecl FUN_10040835c(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 1]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0x10], ebx
        mov     dword ptr [ebp - 8], ebx
        call FUN_005805a6
        mov     esi, dword ptr [ebp + 8]
        test    esi, 0xf00000
        jz      label_normal_path
        lea     edx, [ebp - 0x14]
        push    edx
        add     esi, 0xff100000
        push    esi
        call FUN_00580bab
        add     esp, 8
        jmp     label_done_collect

label_normal_path:
        call FUN_100566c3e
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b4
        test    al, al
        jz      label_done_collect
        push    esi
        mov     ecx, edi
        call FUN_0064e4e4
        mov     ebx, eax
        mov     ecx, ebx
        call FUN_0064e09b
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        call FUN_0064e092
        cmp     edi, dword ptr [eax + 4]
        jz      label_loop_exit

label_iterate:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call FUN_1004fca99
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
        call FUN_10041517a
        cmp     al, 1
        jnz     label_next_entry
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      label_next_entry
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041515e
        cmp     al, 1
        jnz     label_next_entry
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     label_next_entry
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp + 8], esi
        jz      label_grow_list
        lea     ecx, [ebp + 8]
        push    ecx
        push    eax
        call FUN_0058125b
        mov     eax, dword ptr [ebp - 0x10]
        add     esp, 8
        add     eax, 4
        mov     dword ptr [ebp - 0x10], eax
        jmp     label_next_entry

label_grow_list:
        push    1
        lea     edx, [ebp + 8]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x14]
        call FUN_00580c3e

label_next_entry:
        mov     ecx, ebx
        add     edi, 4
        call FUN_0064dfe4
        cmp     edi, dword ptr [eax + 4]
        jnz     label_iterate

label_loop_exit:
        xor     ebx, ebx

label_done_collect:
        mov     esi, dword ptr [ebp - 0x14]
        cmp     esi, dword ptr [ebp - 0x10]
        jz      label_free_list
        mov     edi, dword ptr [ebp + 0xc]

label_set_flags_loop:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_set_flag
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        jz      label_set_flag
        push    0x780288
        call FUN_10056657f
        push    eax
        call FUN_006faa99
        add     esp, 8
        test    eax, eax
        jz      label_set_flag
        int     3

label_set_flag:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x184], edi
        mov     dword ptr [eax + 0x1b4], edi
        mov     eax, dword ptr [ebp - 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     label_set_flags_loop
        mov     esi, dword ptr [ebp - 0x14]

label_free_list:
        cmp     esi, ebx
        jz      label_return
        push    esi
        call FUN_10040835c
        add     esp, 4

label_return:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
