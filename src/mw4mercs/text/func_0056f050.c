/* FUN_0056f050 (0x0056F050, 408 bytes) */
/* __cdecl, naked inline asm */

__declspec(naked) unsigned int __cdecl FUN_0056f050(unsigned int param_1, unsigned int param_2)
{
    

extern void __cdecl FUN_00580e0f(void);
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
extern int DAT_007f23b0;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_0058127b(void);
extern void __cdecl FUN_00580e9a(void);
extern void __cdecl FUN_0064dfe0(void);
extern int DAT_0077f670;
extern void __cdecl FUN_005c768b(void);
extern void __cdecl FUN_005804f8(void);
extern void __cdecl FUN_10040835e(void);
__asm {
sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        jz      path_branch

        /* param_1 & 0xf00000 != 0 path */
        lea     eax, [esp + 0xc]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580e0f
        add     esp, 0x8
        jmp     after_collect

path_branch:
        call FUN_100566c42
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b8
        test    al, al
        jz      after_collect

        push    esi
        mov     ecx, edi
        call FUN_0064e4e8
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e09f
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call FUN_0064e096
        cmp     edi, dword ptr [eax + 0x4]
        jz      after_collect

loop_start:
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
        jz      loop_continue

        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     loop_continue

        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041517e
        cmp     al, 0x1
        jnz     loop_continue

        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      loop_continue

        mov eax, dword ptr [DAT_007f23b0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415162
        cmp     al, 0x1
        jnz     loop_continue

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     loop_continue

        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      grow_array

        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call FUN_0058127b
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     loop_continue

grow_array:
        push    0x1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_00580e9a

loop_continue:
        mov     ecx, ebp
        add     edi, 0x4
        call FUN_0064dfe0
        cmp     edi, dword ptr [eax + 0x4]
        jnz     loop_start

after_collect:
        mov     esi, dword ptr [esp + 0xc]
        cmp     esi, dword ptr [esp + 0x10]
        jz      not_found

        mov     edi, dword ptr [esp + 0x20]
scan_loop:
        mov eax, dword ptr [DAT_0077f670]
        mov     ecx, dword ptr [esi]
        push    eax
        push    edi
        call FUN_005c768b
        cmp     al, 0x1
        jz      found_match

        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x4
        cmp     esi, eax
        jnz     scan_loop

        mov     esi, dword ptr [esp + 0xc]

not_found:
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, esi
        sar     ecx, 0x2
        push    ecx
        push    esi
        call FUN_005804f8
        add     esp, 0x8
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        add     esp, 0xc
        ret

found_match:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      return_true
        push    eax
        call FUN_10040835e
        add     esp, 0x4

return_true:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebp
        add     esp, 0xc
        ret
    }


}
