/*
 * FUN_005044C0 (468 B) — Input component lookup by name
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_005044C0(void)
{
    

/* extern data/function symbols */
extern void __cdecl FUN_10050323a(void);
extern void __cdecl FUN_100411bb6(void);
extern void __cdecl FUN_00504c95(void);
extern void __cdecl FUN_006fab82(void);
extern int DAT_007dc134;
extern void __cdecl FUN_10041519e(void);
extern void __cdecl FUN_006fab42(void);
extern void __cdecl FUN_1004119ab(void);
extern void __cdecl FUN_10041795c(void);
extern void __cdecl FUN_00504bb9(void);
extern void __cdecl FUN_006faa49(void);
extern int DAT_007dc83c;
extern void __cdecl FUN_1004150c9(void);
extern void __cdecl FUN_006faa70(void);
extern void __cdecl FUN_1004177d3(void);
extern void __cdecl FUN_10040832d(void);
extern int DAT_007dc818;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp+8]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x28
        mov     ecx, esi
        mov     [ebp-0x18], esi
        call    dword ptr [eax+0x14]
        push    edi
        call FUN_10050323a
        mov     ecx, [edi+0xC]
        mov     ebx, [edi+8]
        add     esp, 4
        push    1
        lea     edx, [ebp-4]
        push    edx
        test    eax, eax
        mov     [ebp-0x14], ecx
        push    0x776B40
        mov     ecx, ebx
        setne   byte ptr [ebp+0xB]
        call FUN_100411bb6
        mov     eax, [ebp-4]
        mov     ecx, [edi+4]
        mov     edx, [ebp-0x14]
        push    eax
        push    ecx
        push    edx
        call FUN_00504c95
        add     esp, 0xC
        cmp     eax, -1
        mov     [ebp-0x10], eax
        jne     found_input
        mov     eax, [ebp-4]
        mov     ecx, [ebx+0x14]
        mov     edx, [ebx+0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x776B14
        call FUN_006fab82
        add     esp, 0x10
        test    eax, eax
        je      set_false_input
        int     3

set_false_input:
        mov     byte ptr [ebp+0xB], 0
        jmp     after_input_check

found_input:
        mov     ecx, [ebp-0x14]
        mov     edx, [ecx]
        mov ecx, dword ptr [DAT_007dc134]
        mov     eax, [edx+eax*8]
        push    ecx
        mov     ecx, eax
        call FUN_10041519e
        test    al, al
        jne     input_ok
        mov     edx, [ebp-4]
        mov     eax, [ebx+0x14]
        mov     ecx, [ebx+0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776AE8
        call FUN_006fab42
        add     esp, 0x10
        test    eax, eax
        je      set_false_input2
        int     3

set_false_input2:
        mov     byte ptr [ebp+0xB], 0
        jmp     after_input_check

input_ok:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]

after_input_check:
        push    0x77377C
        mov     ecx, ebx
        call FUN_1004119ab
        mov     edx, [eax]
        mov     ecx, eax
        mov     [ebp-0x1C], eax
        mov     [ebp-0x20], edx
        call FUN_10041795c
        push    4
        lea     ecx, [ebp-0xC]
        mov     [ebp-0xC], eax
        mov     eax, [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     dword ptr [ebp-8], 0xFFFFFFFF

child_loop:
        mov     ecx, [ebp-0x20]
        test    ecx, ecx
        je      cleanup_child
        mov     eax, [ecx]
        test    eax, eax
        mov     edx, [ecx+4]
        mov     [ebp-0x20], edx
        je      cleanup_child
        mov     esi, [eax+0x18]
        mov     eax, [edi+4]
        mov     ecx, [ebp-0x14]
        push    esi
        push    eax
        push    ecx
        call FUN_00504bb9
        add     esp, 0xC
        cmp     eax, -1
        mov     [ebp-8], eax
        jne     found_child
        mov     edx, [ebx+0x14]
        mov     eax, [ebx+0x10]
        mov     ecx, [eax]
        push    esi
        push    edx
        push    ecx
        push    0x77677C
        call FUN_006faa49
        add     esp, 0x10
        test    eax, eax
        je      set_false_child
        int     3
        jmp     set_false_child

found_child:
        mov     edx, [ebp-0x14]
        mov     ecx, [edx]
        mov     eax, [ecx+eax*8]
        mov edx, dword ptr [DAT_007dc83c]
        push    edx
        mov     ecx, eax
        call FUN_1004150c9
        test    al, al
        jne     child_ok
        mov     eax, [ebx+0x14]
        mov     ecx, [ebx+0x10]
        mov     edx, [ecx]
        push    esi
        push    eax
        push    edx
        push    0x776874
        call FUN_006faa70
        add     esp, 0x10
        test    eax, eax
        je      set_false_child
        int     3

set_false_child:
        mov     byte ptr [ebp+0xB], 0

child_ok:
        mov     ecx, [ebp-0x18]
        mov     eax, [ecx]
        push    4
        lea     edx, [ebp-8]
        push    edx
        call    dword ptr [eax+0x24]
        jmp     child_loop

cleanup_child:
        mov     esi, [ebp-0x1C]
        test    esi, esi
        je      return_val
        mov     ecx, esi
        call FUN_1004177d3
        push    esi
        call FUN_10040832d
        add     esp, 4

return_val:
        mov     al, byte ptr [ebp+0xB]
        mov ecx, dword ptr [DAT_007dc818]
        neg     al
        pop     edi
        pop     esi
        pop     ebx
        sbb     eax, eax
        and     eax, ecx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
