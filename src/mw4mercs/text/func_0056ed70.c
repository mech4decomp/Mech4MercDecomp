/* FUN_0056ed70 (0x0056ED70, 412 bytes) */
/* __cdecl, naked inline asm */

__declspec(naked) unsigned int __cdecl FUN_0056ed70(unsigned int param_1)
{
    

extern void __cdecl FUN_00580bb4(void);
extern void __cdecl FUN_100566c47(void);
extern void __cdecl FUN_0064e5bd(void);
extern void __cdecl FUN_0064e4ed(void);
extern void __cdecl FUN_0064e0a4(void);
extern void __cdecl FUN_0064e09b(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcaa1(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100415183(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415167(void);
extern void __cdecl FUN_00581260(void);
extern void __cdecl FUN_00580c3f(void);
extern void __cdecl FUN_0064dfe5(void);
extern void __cdecl FUN_00707d3a(void);
extern int DAT_0077f688;
extern void __cdecl FUN_005dcea7(void);
extern void __cdecl FUN_10040837a(void);
extern void __cdecl FUN_10040835a(void);
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        xor     ebx, ebx
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        jz      path_branch

        /* param_1 & 0xf00000 != 0 path */
        lea     eax, [esp + 0x14]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580bb4
        add     esp, 0x8
        jmp     after_collect

path_branch:
        call FUN_100566c47
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5bd
        test    al, al
        jz      after_collect

        push    esi
        mov     ecx, edi
        call FUN_0064e4ed
        mov     ebx, eax
        mov     ecx, ebx
        call FUN_0064e0a4
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        call FUN_0064e09b
        cmp     edi, dword ptr [eax + 0x4]
        jz      after_collect_clear_ebx

loop_start:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fcaa1
        mov     esi, eax
        test    esi, esi
        jz      loop_continue

        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     loop_continue

        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415183
        cmp     al, 0x1
        jnz     loop_continue

        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      loop_continue

        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415167
        cmp     al, 0x1
        jnz     loop_continue

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     loop_continue

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], esi
        jz      grow_array

        lea     ecx, [esp + 0x10]
        push    ecx
        push    eax
        call FUN_00581260
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     loop_continue

grow_array:
        push    0x1
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_00580c3f

loop_continue:
        mov     ecx, ebx
        add     edi, 0x4
        call FUN_0064dfe5
        cmp     edi, dword ptr [eax + 0x4]
        jnz     loop_start

after_collect_clear_ebx:
        xor     ebx, ebx

after_collect:
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, dword ptr [esp + 0x18]
        jz      check_free

scan_loop:
        push    ebx
        call FUN_00707d3a
        fsub dword ptr [DAT_0077f688]
        mov     ecx, dword ptr [esi]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call FUN_005dcea7
        cmp     eax, ebx
        jnz     found_match

        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x4
        cmp     esi, eax
        jnz     scan_loop

        mov     esi, dword ptr [esp + 0x14]

check_free:
        cmp     esi, ebx
        jz      return_not_found
        push    esi
        call FUN_10040837a
        add     esp, 0x4

return_not_found:
        mov     eax, 0xfffffffe
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

found_match:
        mov     esi, dword ptr [eax + 0x30]
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      return_esi
        push    eax
        call FUN_10040835a
        add     esp, 0x4

return_esi:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
